using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Base
{
    public class Match
    {
        private string matchid;
        private string player1id;
        private string player2id;
        private string tableid;
        private int winner;

        private string starttime;
        private string endtime;

        public Match()
        {

        }

        public Match(string matchid, string player1id, string player2id, string tableid, int winner, string starttime, string endtime)
        {
            this.matchid = matchid;
            this.player1id = player1id;
            this.player2id = player2id;
            this.tableid = tableid;
            this.winner = winner;
            this.starttime = starttime;
            this.endtime = endtime;
           
        }

        
        public string ID
        {
            set { matchid = value ; }
            get { return matchid; }
        }

        public string P1
        {
            set { player1id = value; }
            get { return player1id; }
        }

        public string P2
        {
            set { player2id = value; }
            get { return player2id; }
        }

        public string Table
        {
            set { tableid = value; }
            get { return tableid; }
        }

        public int Winner
        {
            set { winner = value; }
            get { return winner; }
        }

        public string StartTime
        {
            set { starttime = value; }
            get { return starttime; }
        }

        public string EndTime
        {
            set { endtime = value; }
            get { return endtime; }
        }

        public string WinnerText()
        {
            if (winner == -1)
            {
                return "Match in Progress.";
            }
            else if (winner == 1)
            {
                return "Player 1";
            }

            else if (winner == 2)
            {
                return "Player 2";
            }
            else
                return "";
        }

        public void Start()
        {
            starttime = DateTime.Now.ToString();
        }
        
        public void End()
        {
            endtime = DateTime.Now.ToString();

        }

      

        public bool inprogress()
        {
            if (winner == -1)
            {
                return true;
            }
            else
                return false;
        }

       

    }

}
