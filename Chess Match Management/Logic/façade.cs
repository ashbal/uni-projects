using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Server;
using Base;

namespace Logic
{
    public class façade
    {
        private façade() { }

        private static façade instance = null;

        public static façade getcontroller()
        {
            if (instance == null)
                instance = new façade();
            return instance;
        }

        public matchHandler mh = new matchHandler();
        public tablesHandler th = new tablesHandler();
        public playerHandler ph = new playerHandler();
        public MatchFunctions mf = new MatchFunctions();

        // MATCHHANDLER.CS FUNCTIONS
        //
        //
        // addnew()
        public void addnewmatch(Match m)
        {
            mh.addnew(m);
        } 
        // MatchID()
        public int getMatchID()
        {
            return mh.MatchID();
        }
        // readall()
        public List<Match> readallmatches()
        {
            return mh.readall();
        }
        // ongoing()
        public List<Match> ongoingmatches()
        {
            return mh.ongoing();
        }
        // findmatch()
        public string findmatch(string tid)
        {
            return mh.findmatch(tid);
        }
        // updatematchwinner()
        public void updatematchwinner(string mid, int winner)
        {
            mh.updatematchwinner(mid, winner);
        }
        // update()
        public void updatematches(List<Match> m)
        {
            mh.update(m);
        }
        //
        // END


        // TABLEHANDLER.CS FUNCTIONS
        //
        //
        // initializetables
        public void initializetables()
        {
            th.initializetables();
        }
        // readtables()
        public List<Table> readalltables()
        {
            return th.readtables();
        }
        // updatestatus()
        public void updatetablestatus(int id, int status)
        {
            th.updatestatus(id, status);
        }
        // EmptyTables()
        public List<Table> getemptytables()
        {
           return th.EmptyTables();
        }
        // OccupiedTables()
        public List<Table> getoccupiedtables()
        {
            return th.OccupiedTables();
        }
        // WaitingTables()
        public List<Table> getwaitingtables()
        {
            return th.WaitingTables();
        }
        //
        // END


        // PLAYERHANDLER.CS FUNCTIONS
        //
        //
        // addnew()
        public void addnewplayer(Player p)
        {
            ph.addnew(p);
        }
        // readall()
        public List<Player> readallplayers()
        {
            return ph.readall();
        }
        // writeupdate()
        public void writeplayersupdate(List<Player> players)
        {
            ph.WriteUpdate(players);
        }
        // updatescore()
        public void updateplayerscore(int loc1, int loc2)
        {
            ph.updatescore(loc1, loc2);
        }
        // updatedraw()
        public void updateplayerdraw(int loc1,int loc2)
        {
            ph.updatedraw(loc1,loc2);
        }
        // findplayer()
        public Player findplayer(string pid)
        {
            return ph.findplayer(pid);
        }
        // findloc()
        public int findplayerlocation(string pid)
        {
            return ph.findlsoc(pid);
        }
        // searchbyid()
        public List<Player> searchbyid(string pid)
        {
            return ph.searchbyid(pid);
        }
        // searchbyname()
        public List<Player> searchbyname(string name)
        {
            return ph.searchbyname(name);
        }
        // searchbycnic() 
        public List<Player> searchbycnic(string cnic)
        {
            return ph.searchbycnic(cnic);
        }
        // searchbytotalmatches()
        public List<Player> searchbytotalmatches(int total)
        {
            return ph.searchbytotalmatches(total);
        }
        // searchbywon()
        public List<Player> searchbywon(int won)
        {
            return ph.searchbywon(won);
        }
        // searchbylost()
        public List<Player> searchbylost(int lost)
        {
            return ph.searchbylost(lost);
        }
        // searchbydraw()
        public List<Player> searchbydraw(int draw)
        {
            return ph.searchbydraw(draw);
        }
        //
        // END
        
        
        //
        //
        // playerexist()
        public bool PlayerExist(string id)
        {
            return mf.PlayerExist(id);
        }
        // findemptytable()
        public int findemptytable()
        {
            return mf.findemptytable();
        }
        // findwaitingtable()
        public int findwaitingtable()
        {
            return mf.findwaitingtable();
        }
        // StartReserveMatch()
        public void StartReserveMatch(string mid, string p2)
        {
            mf.StartReserveMatch(mid, p2);
        }
        // OverrideWaiting()
        public void OverrideWaiting(string p1, string p2)
        {
            mf.OverrideWaiting(p1, p2);
        }




    }
}
