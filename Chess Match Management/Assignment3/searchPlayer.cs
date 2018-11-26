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
    public partial class searchPlayer : Form
    {
        façade controller = façade.getcontroller();
        int currentPlayer = 0;
        int size = 0;
        List<Player> results = new List<Player>();

        public searchPlayer()
        {
            InitializeComponent();
        }

        private void display()
        {
            label20.Text = results[currentPlayer].ID;
            label18.Text = results[currentPlayer].Name;
            label17.Text = results[currentPlayer].CNIC;
            label4.Text = results[currentPlayer].Total.ToString();
            label5.Text = results[currentPlayer].Won.ToString();
            label6.Text = results[currentPlayer].Lost.ToString();
            label7.Text = results[currentPlayer].Draw.ToString();
        }

        private void clear()
        {
            label20.Text = "";
            label18.Text = "";
            label17.Text = "";
            label4.Text = "";
            label5.Text = "";
            label6.Text = "";
            label7.Text = "";
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void searchPlayer_Load(object sender, EventArgs e)
        {

        }

        private void button3_Click_1(object sender, EventArgs e)
        {
            clear();
            if (comboBox1.Text != "" && textBox1.Text != "")
            {
                if (comboBox1.Text == "ID")
                {
                    results = controller.searchbyid(textBox1.Text);
                }
                if (comboBox1.Text == "Name")
                {
                    results = controller.searchbyname(textBox1.Text);
                }
                if (comboBox1.Text == "CNIC")
                {
                    results = controller.searchbycnic(textBox1.Text);
                }
                if (comboBox1.Text == "Total Matches")
                {
                    results = controller.searchbytotalmatches(int.Parse(textBox1.Text));
                }
                if (comboBox1.Text == "Matches Won")
                {
                    results = controller.searchbywon(int.Parse(textBox1.Text));
                }
                if (comboBox1.Text == "Matches Lost")
                {
                    results = controller.searchbylost(int.Parse(textBox1.Text));
                }
                if (comboBox1.Text == "Matches Drawn")
                {
                    results = controller.searchbydraw(int.Parse(textBox1.Text));
                }

                size = results.Count;
                label15.Text = size + " search results found!";
                if (size != 0)
                {
                    display();
                }


            }
            else
            {
                if (comboBox1.Text == "")
                {
                    errorProvider1.SetIconPadding(comboBox1, 10);
                    errorProvider1.SetError(comboBox1,"Cannot be empty!");
                }
                if (textBox1.Text == "")
                {
                    errorProvider2.SetIconPadding(textBox1, 10);
                    errorProvider2.SetError(textBox1, "Cannot be empty!");
                }
            }
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            if (results.Count==0)
            {
                MessageBox.Show("List is Empty!");
            }

            else if (currentPlayer == size - 1)
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
            if (results.Count == 0)
            {
                MessageBox.Show("List is Empty!");
            }

            else if (currentPlayer != 0)
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

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
