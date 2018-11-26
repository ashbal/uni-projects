using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Logic;
using Base;

namespace Assignment3
{
    public partial class Players : Form
    {
        façade controller = façade.getcontroller();
        int currentPlayer = 0;
        int size = 0;
        List<Player> playerList;

        public Players()
        {
            InitializeComponent();
            playerList = controller.readallplayers();
            size = playerList.Count;
            if (size != 0)
            {
                display();
            }
        }

        private void Players_Load(object sender, EventArgs e)
        {

        }

        public void display()
        {
            label1.Text = playerList[currentPlayer].ID;
            label2.Text = playerList[currentPlayer].Name;
            label3.Text = playerList[currentPlayer].CNIC;
            label4.Text = playerList[currentPlayer].Total.ToString();
            label5.Text = playerList[currentPlayer].Won.ToString();
            label6.Text = playerList[currentPlayer].Lost.ToString();
            label7.Text = playerList[currentPlayer].Draw.ToString();
        }

        private void label15_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {

            if (playerList.Count == 0)
            {
                MessageBox.Show("List is Empty!");
            }

            else
            if (currentPlayer == size - 1)
            {
                MessageBox.Show("End of list!");
            }
            else
            {
                currentPlayer++;
                display();
            }
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            if (playerList.Count == 0)
            {
                MessageBox.Show("List is Empty!");
            }

            else if(currentPlayer != 0)
            {
                currentPlayer--;
                display();
            }
        }

        private void viewTablesToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Hide();
            Tables f = new Tables();
            f.Show();
        }

        private void viewToolStripMenuItem_Click(object sender, EventArgs e)
        {

            this.Hide();
            Players f = new Players();
            f.Show();
        }

        private void addNewToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Hide();
            addPlayer f = new addPlayer();
            f.Show();
        }

        private void searchToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Hide();
            searchPlayer f = new searchPlayer();
            f.Show();
        }

        private void viewToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            this.Hide();
            Matches f = new Matches();
            f.Show();
        }

        private void startToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Hide();
            createMatch f = new createMatch();
            f.Show();
        }
    }
}
