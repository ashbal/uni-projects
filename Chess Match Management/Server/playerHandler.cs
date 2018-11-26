using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Base;

namespace Server
{
    public class playerHandler
    {
        public void addnew(Player p)
        {
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";
            connection.Open();
            SqlCommand add = new SqlCommand("insert into [Player]([player_ID],[name],[cnic],[total],[won],[lost],[draw]) values(@id,@name,@cnic,@total,@won,@lost,@draw)",connection);
            add.Parameters.AddWithValue("@id", value: p.ID);
            add.Parameters.AddWithValue("@cnic", value: p.CNIC);
            add.Parameters.AddWithValue("@name", value: p.Name);
            add.Parameters.AddWithValue("@total", value: p.Total);
            add.Parameters.AddWithValue("@won", value: p.Won);
            add.Parameters.AddWithValue("@lost", value: p.Lost);
            add.Parameters.AddWithValue("@draw", value: p.Draw);
            add.ExecuteNonQuery();
            connection.Close();

        }

        public List<Player> readall()
        {
            Player p = null;
            List<Player> Players = new List<Player>();
            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename='E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf';Integrated Security=True;Connect Timeout=30";

            connection.Open();
            SqlCommand command = new SqlCommand(@"SELECT * FROM [Player]", connection);
            SqlDataReader reader = command.ExecuteReader();
            while (reader.Read())
            {

                string id = reader["player_ID"].ToString();
                string name = reader["name"].ToString();
                string cnic = reader["cnic"].ToString();
                int total = int.Parse(reader["total"].ToString());
                int won = int.Parse(reader["won"].ToString());
                int lost = int.Parse(reader["lost"].ToString());
                int draw = int.Parse(reader["draw"].ToString());
                p = new Player(id, name, cnic, total, won, lost, draw);
                Players.Add(p);
            }
            connection.Close();
            return Players;
        }

        public void WriteUpdate(List<Player> players)
        {

            SqlConnection connection = new SqlConnection();
            connection.ConnectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=E:\Documents\Visual Studio 2017\Projects\Assignment3\Chess.mdf;Integrated Security=True;Connect Timeout=30";
            connection.Open();
            SqlCommand deleteall = new SqlCommand("truncate table [Player]",connection);
            deleteall.ExecuteNonQuery();
            
            for (int i=0;i<players.Count;i++)
            {
                SqlCommand add = new SqlCommand("insert into [Player]([player_ID],[name],[cnic],[total],[won],[lost],[draw]) values(@id,@name,@cnic,@total,@won,@lost,@draw)",connection);
                add.Parameters.AddWithValue("@id", value: players[i].ID);
                add.Parameters.AddWithValue("@cnic", value: players[i].CNIC);
                add.Parameters.AddWithValue("@name", value: players[i].Name);
                add.Parameters.AddWithValue("@total", value: players[i].Total);
                add.Parameters.AddWithValue("@won", value: players[i].Won);
                add.Parameters.AddWithValue("@lost", value: players[i].Lost);
                add.Parameters.AddWithValue("@draw", value: players[i].Draw);
                add.ExecuteNonQuery();
            }
            connection.Close();

        }

        public void updatescore(int loc1, int loc2) //loc1 & loc2 refer to locations of players in the List
        {
            List<Player> players = readall();
            players[loc1].Total++;
            players[loc1].Won++;
            players[loc2].Total++;
            players[loc2].Lost++;
            WriteUpdate(players);
        }

        public void updatedraw(int loc1, int loc2)
        {
            List<Player> players = readall();
            players[loc1].Total++;
            players[loc1].Draw++;
            players[loc2].Total++;
            players[loc2].Draw++;
            WriteUpdate(players);
        }

        public Player findplayer(string pid)
        {
            Player p = new Player();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].ID == pid)
                {
                    p = temp[i];
                }
            }
            return p;
        }

        public int findlsoc(string pid)
        {
            int loc = -1;
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].ID == pid)
                {
                    loc = i;
                }
            }
            return loc;
        }

        public List<Player> searchbyid(string pid)
        {
            List<Player> results = new List<Player>();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].ID == pid)
                {
                    results.Add(temp[i]);
                }
            }
            return results;
        }

        public List<Player> searchbyname(string name)
        {
            List<Player> results = new List<Player>();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].Name == name)
                {
                    results.Add(temp[i]);
                }
            }
            return results;
        }

        public List<Player> searchbycnic(string cnic)
        {
            List<Player> results = new List<Player>();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].CNIC == cnic)
                {
                    results.Add(temp[i]);
                }
            }
            return results;
        }

        public List<Player> searchbytotalmatches(int total)
        {
            List<Player> results = new List<Player>();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].Total == total)
                {
                    results.Add(temp[i]);
                }
            }
            return results;
        }

        public List<Player> searchbywon(int won)
        {
            List<Player> results = new List<Player>();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].Won == won)
                {
                    results.Add(temp[i]);
                }
            }
            return results;
        }

        public List<Player> searchbylost(int lost)
        {
            List<Player> results = new List<Player>();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].Lost == lost)
                {
                    results.Add(temp[i]);
                }
            }
            return results;
        }

        public List<Player> searchbydraw(int draw)
        {
            List<Player> results = new List<Player>();
            List<Player> temp = readall();
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].Draw == draw)
                {
                    results.Add(temp[i]);
                }
            }
            return results;
        }
    }
}

