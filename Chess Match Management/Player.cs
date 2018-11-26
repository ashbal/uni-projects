using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Logic
{
    class Player
    {
        private string playerid;
        private string name;
        private string cnic;
        private int total;
        private int won;
        private int lost;
        private int draw;

        public Player()
        {

        }

        public Player(string playerid, string name, string cnic)
        {
            this.playerid = playerid;
            this.name = name;
            this.cnic = cnic;
            total = 0;
            won = 0;
            lost = 0;
            draw = 0;
        }

        public Player(string playerid, string name, string cnic, int total, int won, int lost, int draw)
        {
            this.playerid = playerid;
            this.name = name;
            this.cnic = cnic;
            this.total = total;
            this.won = won;
            this.lost = lost;
            this.draw = draw;
        }
        public string ID
        {
            set { playerid = value; }
            get { return playerid; }
        }

        public string Name
        {
            set { name = value; }
            get { return name; }
        }

        public string CNIC
        {
            set { cnic = value; }
            get { return cnic; }
        }

        public int Total
        {
            set { total = value; }
            get { return total; }
        }

        public int Won
        {
            set { won = value; }
            get { return won; }
        }

        public int Lost
        {
            set { lost = value; }
            get { return lost; }
        }

        public int Draw
        {
            set { draw = value; }
            get { return draw; }
        }

        public void display()
        {
            Console.WriteLine("Player ID: " + playerid);
            Console.WriteLine("Name: " + name);
            Console.WriteLine("CNIC: " + cnic);
            Console.WriteLine("Total Matches Played: " + total);
            Console.WriteLine("Total Matches Won: "+ won);
            Console.WriteLine("Total Matches Lost: " + lost);
            Console.WriteLine("Total Matches Drawn: " + draw);
        }

        
    }
}
