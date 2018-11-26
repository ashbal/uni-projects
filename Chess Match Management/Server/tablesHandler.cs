using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Base;

namespace Server
{
    public class tablesHandler
    {
     
        public void initializetables()
        {
            Table t = null;
            List<Table> Tables = new List<Table>();
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30;MultipleActiveResultSets=True";
            
            connection.Open();
            SqlCommand deleteall = new SqlCommand(@"truncate table [Tables]", connection);
            deleteall.BeginExecuteNonQuery();
           
            SqlCommand add = new SqlCommand("insert into [Tables]([table_Id],[status]) values(1,1), (2,1), (3,1), (4,1), (5,1), (6,1), (7,1), (8,1), (9,1)", connection);
            add.ExecuteNonQuery();
            connection.Close();



        }

        public List<Table> readtables()
        {
            Table t = null;
            List<Table> Tables = new List<Table>();
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";

            connection.Open();
            SqlCommand command = new SqlCommand(@"SELECT * FROM [Tables]", connection);
            SqlDataReader reader = command.ExecuteReader();
            while (reader.Read())
            {
                t = new Table();
                int tid = int.Parse(reader["table_Id"].ToString());
                int st = int.Parse(reader["status"].ToString());
                t = new Table(tid, st);
                Tables.Add(t);

            }


            connection.Close();
            return Tables;
        }

        public void updatestatus(int id, int status)
        {
           
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";
            connection.Open();
            SqlCommand update = new SqlCommand("update [Tables] set [status]=@st where [table_Id] = @id ", connection);
            update.Parameters.AddWithValue("@st", value: status);
            update.Parameters.AddWithValue("@id", value: id);
            update.ExecuteNonQuery();
            connection.Close();
        }

         public List<Table> EmptyTables()
        {
            List<Table> temp = readtables();
            List<Table> emp = new List<Table>();
            for (int i = 0; i < 9; i++)
            {
                if (temp[i].isvacant())
                {
                    emp.Add(temp[i]);
                }
            }
            return emp;
        }

         public List<Table> OccupiedTables()
        {
            List<Table> temp = readtables();
            List<Table> oc = new List<Table>();
            for (int i = 0; i < 9; i++)
            {
                if (temp[i].isoccupied())
                {
                    oc.Add(temp[i]);
                }
            }
            return oc;
        }
        

        public List<Table> WaitingTables()
        {
            List<Table> temp = readtables();
            List<Table> wait = new List<Table>();
            for (int i = 0; i < 9; i++)
            {
                if (temp[i].iswaiting())
                {
                    wait.Add(temp[i]);
                }
            }
            return wait;
        }


    }
}
