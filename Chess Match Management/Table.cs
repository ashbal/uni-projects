using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Logic
{
    class Table
    {
        private int tableid;
        private int status;
        

        public Table()
        {

        }

        public Table( int tableid, int status)
        {
            this.tableid = tableid;
            this.status = status;
        }

        public int StatusID
        {
            set { status = value; }
            get { return status; }
        }

        public int Tid
        {
            set { tableid = value; }
            get { return tableid; }
        }

        public string TableName()
        {
            return "T-" + tableid;
        }

        public string Status()
        {
            if ( status == 1)
            {
                return "Empty";
            }

            else if ( status == 2)
            {
                return "Waiting";
            }

            else if ( status == 3)
            {
                return "Match";
            }
            
            else
            {
                return "Error!";
            }
        }

        public void display()
        {
            Console.WriteLine("Table: " + TableName() + " | Status: " + Status());
          
        }

        public bool isvacant()
        {
            if (status == 1)
                return true;
            else
                return false;
        }

        public bool iswaiting()
        {
            if (status == 2)
                return true;
            else
                return false;
        }

        public bool isoccupied()
        {
            if (status == 3)
                return true;
            else
                return false;
        }

    }
}
