using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using Base;

namespace Server
{
    public class matchHandler
    {
        public void addnew(Match m)
        {

            SqlConnection connection = new SqlConnection();

            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";
            SqlCommand add = new SqlCommand("insert into [Match] ([match_ID],[player1_ID],[player2_id],[table_ID],[winner],[starttime],[endtime]) values(@id,@p1,@p2,@table,@winner,@starttime,@endtime)", connection);
            connection.Open();
            add.Parameters.AddWithValue("@id", value: m.ID);
            add.Parameters.AddWithValue("@p1", value: m.P1);
            add.Parameters.AddWithValue("@p2", value: m.P2);
            add.Parameters.AddWithValue("@table", value: m.Table);
            add.Parameters.AddWithValue("@winner", value: m.Winner);
            add.Parameters.AddWithValue("@starttime", value: m.StartTime);
            add.Parameters.AddWithValue("@endtime", value: m.EndTime);
            add.ExecuteNonQuery();
            connection.Close();
        }

        public int MatchID()
        {
            int id=0;
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";
          
            connection.Open();
            SqlCommand command = new SqlCommand("SELECT * FROM [MatchID]", connection);
            SqlDataReader reader = command.ExecuteReader();
            while (reader.Read())
            {
                 id = int.Parse(reader["id"].ToString());
            }
         
            connection.Close();
            connection.Open();
            SqlCommand delete = new SqlCommand("truncate table [MatchID]", connection);
            delete.ExecuteNonQuery();
            SqlCommand insert = new SqlCommand("insert into [MatchID] values(@id)", connection);
            insert.Parameters.AddWithValue("@id", value: ++id);
            insert.ExecuteNonQuery();
            connection.Close();


            return id;
        }

        public List<Match> readall()
        {
            Match m = null;
            List<Match> Matches = new List<Match>();
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";

            connection.Open();
            SqlCommand command = new SqlCommand(@"SELECT * FROM [Match]", connection);
            SqlDataReader reader = command.ExecuteReader();
            while (reader.Read())
            {
                string id = reader["match_ID"].ToString();
                string p1 = reader["player1_ID"].ToString();
                string p2 = reader["player2_ID"].ToString();
                string tid = reader["table_ID"].ToString();
                int winner = int.Parse(reader["winner"].ToString());
                string starttime = reader["starttime"].ToString();
                string endtime = reader["endtime"].ToString();

                m = new Match(id, p1, p2, tid, winner, starttime, endtime);
                Matches.Add(m);
            }
            connection.Close();


            return Matches;
        }

        public List<Match> ongoing()
        {
            List<Match> temp = readall();
            List<Match> og = new List<Match>();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].inprogress())
                {
                    og.Add(temp[i]);
                }
            }
            return og;
        }

        public string findmatch(string tid)
        {
            string matchid = "0";
            List<Match> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].Table == tid)
                {
                    matchid = temp[i].ID;
                }
            }
            return matchid;
        }

        public void updatematchwinner(string mid, int winner)
        {
            List<Match> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].ID == mid)
                {
                    temp[i].End();
                    temp[i].Winner = winner;
                }
            }

            update(temp);
        }

        public void update(List<Match> m)
        {
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";
            connection.Open();
            SqlCommand deleteall = new SqlCommand("truncate table [Match]",connection);
            deleteall.ExecuteNonQuery();

            for (int i = 0; i < m.Count; i++)
            {
                SqlCommand add = new SqlCommand("insert into [Match]([match_ID],[player1_ID],[player2_id],[table_ID],[winner],[starttime],[endtime]) values(@id,@p1,@p2,@table,@winner,@starttime,@endtime)",connection);
                add.Parameters.AddWithValue("@id", value: m[i].ID);
                add.Parameters.AddWithValue("@p1", value: m[i].P1);
                add.Parameters.AddWithValue("@p2", value: m[i].P2);
                add.Parameters.AddWithValue("@table", value: m[i].Table);
                add.Parameters.AddWithValue("@winner", value: m[i].Winner);
                add.Parameters.AddWithValue("@starttime", value: m[i].StartTime);
                add.Parameters.AddWithValue("@endtime", value: m[i].EndTime);
                add.ExecuteNonQuery();
            }
            connection.Close();
        }


    }
}
