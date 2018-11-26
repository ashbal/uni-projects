using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Server;
using Base;
using System.Windows.Forms;

namespace Logic
{
    public class MatchFunctions
    {
        tablesHandler tf = new tablesHandler();
        matchHandler mf = new matchHandler();
        playerHandler pf = new playerHandler();

        public bool PlayerExist(string id)
        {
            bool found = false;
            List<Player> players = pf.readall();
            for (int i = 0; i < players.Count; i++)
            {
                if (players[i].ID == id)
                {
                    found = true;
                }
            }
            if (!found)
            {
                Console.WriteLine("Sorry No such Player Exists");
            }
            return found;
        }

        public int findemptytable()
        {
            List<Table> emp = tf.EmptyTables();
            int max = emp.Count;
            if (max == 0)
            {
                return -1;
            }
            else
            {
                Random random = new Random();
                int randomNumber = random.Next(0, max);
                return emp[randomNumber].Tid;
            }

        }

        public int findwaitingtable()
        {
            List<Table> emp = tf.WaitingTables();
            int max = emp.Count;
            if (max == 0)
            {
                return -1;
            }
            else
            {
                Random random = new Random();
                int randomNumber = random.Next(0, max);
                return emp[randomNumber].Tid;
            }
        }


        public void OverrideWaiting(string p1, string p2)
        {
            int tid = findwaitingtable();

            string matchid = mf.findmatch(tid.ToString());
            List<Match> temp = mf.readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].ID == matchid)
                {
                    string p = pf.findplayer(temp[i].P1).Name;
                    MessageBox.Show("Removing " + p + " from Table T-" + tid);
                    tf.updatestatus(tid, 1);
                    temp[i].P1 = p1;
                    temp[i].P2 = p2;
                    temp[i].Start();
                    tf.updatestatus(tid, 3);
                    mf.update(temp);
                    MessageBox.Show("Table Transfer Success!");

                }
            }
        }



        public void StartReserveMatch(string mid, string p2)
        {
            bool check = false;
            List<Match> temp = mf.readall();
            int t;
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].ID == mid)
                {

                    temp[i].P2 = p2;
                    temp[i].Start();
                    mf.update(temp);
                    t = int.Parse(temp[i].Table);
                    tf.updatestatus(t, 3);
                    MessageBox.Show("Match started!");
                    check = true;
                }
               

            }
            if  (!check)
            {
              
                    MessageBox.Show("Sorry. Unable to Start Match. Incorrect Match ID");
               
            }
        }

    }
}
