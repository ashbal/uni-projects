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
    public partial class Matches : Form
    {
        façade controller = façade.getcontroller();
        int currentMatch = 0;
        int size = 0;
        
        List<Match> matchList;

        public Matches()
        {
            InitializeComponent();
            clear();
            
                matchList = controller.readallmatches();
                size = matchList.Count();
                if (size != 0)
                {
                    display();
                    if (matchList[currentMatch].Winner == -1)
                        {
                        button3.Visible = true;
                    }
                }

              
           


        }

        private void display()
        {
            
            string p1name = controller.findplayer(matchList[currentMatch].P1).Name;
            string p2name = controller.findplayer(matchList[currentMatch].P2).Name;

            label1.Text = matchList[currentMatch].ID;
            label2.Text = p1name;
            label3.Text = p2name;
            label4.Text = matchList[currentMatch].Table;
            label5.Text = matchList[currentMatch].StartTime;
            label6.Text = matchList[currentMatch].EndTime;
            label7.Text = matchList[currentMatch].WinnerText();
        }

        void clear()
        {
            label1.Text = "";
            label2.Text = "";
            label3.Text = "";
            label4.Text = "";
            label5.Text = "";
            label6.Text = "";
            label7.Text = "";
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                label19.Visible = false;
                label14.Visible = true;
                button3.Visible = true;
                clear();
                matchList = controller.ongoingmatches();
                size = matchList.Count();
                if (size != 0)
                {
                    display();
                }
            }
            else
            {
                label19.Visible = true;
                label14.Visible = false;
                clear();
                button3.Visible = false;
                matchList = controller.readallmatches();
                size = matchList.Count();
                display();
            }

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            button3.Visible = false;
            if (matchList.Count != 0 && matchList[currentMatch].Winner == -1)
            {
                button3.Visible = true;
            }

            if (matchList.Count == 0)
            {
                MessageBox.Show("List is Empty!");
            }

            else if (currentMatch == size - 1)
            {
                MessageBox.Show("End of list!");
            }
            else
            {
                currentMatch++;
                display();
            }
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            button3.Visible = false;
            if (matchList.Count != 0 && matchList[currentMatch].Winner == -1)
            {
                button3.Visible = true;
            }

            if (matchList.Count == 0)
            {
                MessageBox.Show("List is Empty!");
            }

            else if (currentMatch != 0)
            {
                currentMatch--;
                display();
            }
        }

        private void button3_Click_1(object sender, EventArgs e)
        {
            label15.Visible = true;
            label10.Visible = false;
            label7.Visible = false;
            label11.Visible = false;
            label12.Visible = false;
            label5.Visible = false;
            label6.Visible = false;
            button1.Visible = false;
            button2.Visible = false;
            button3.Visible = false;
            button4.Visible = true;
            radioButton1.Visible = true;
            radioButton2.Visible = true;
            radioButton3.Visible = true;
        }

        private void button4_Click_1(object sender, EventArgs e)
        {
            int win = -1;
            if (radioButton1.Checked)
            {
                win = 1;
                controller.updateplayerscore(controller.findplayerlocation(matchList[currentMatch].P1), controller.findplayerlocation(matchList[currentMatch].P2));
            }
            if (radioButton2.Checked)
            {
                win = 2;
                controller.updateplayerscore(controller.findplayerlocation(matchList[currentMatch].P2), controller.findplayerlocation(matchList[currentMatch].P1));
            }
            if (radioButton3.Checked)
            {
                win = 0;
                controller.updateplayerdraw(controller.findplayerlocation(matchList[currentMatch].P1), controller.findplayerlocation(matchList[currentMatch].P2));
            }

            controller.updatetablestatus((int.Parse(matchList[currentMatch].Table)), 1);
            controller.updatematchwinner(matchList[currentMatch].ID, win);
            MessageBox.Show("Match has Ended!");
            label15.Visible = false;
            label10.Visible = true;
            label7.Visible = true;
            label11.Visible = true;
            label12.Visible = true;
            label5.Visible = true;
            label6.Visible = true;
            button1.Visible = true;
            button2.Visible = true;
            button3.Visible = true;
            button4.Visible = false;
            radioButton1.Visible = false;
            radioButton2.Visible = false;
            radioButton3.Visible = false;
            clear();

            matchList = controller.readallmatches();
            size = matchList.Count();
            if (size != 0)
            {
                display();
            }

            if (matchList[currentMatch].Winner == -1)
            {
                button3.Visible = true;
            }
            button3.Visible = false;

        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }

        private void viewTablesToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            Tables f = new Tables();
            f.Show();
        }

        private void viewToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            Players f = new Players();
            f.Show();
        }

        private void addNewToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            addPlayer f = new addPlayer();
            f.Show();
        }

        private void searchToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            searchPlayer f = new searchPlayer();
            f.Show();
        }

        private void viewToolStripMenuItem1_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            Matches f = new Matches();
            f.Show();
        }

        private void startToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            createMatch f = new createMatch();
            f.Show();
        }

        private void checkBox1_CheckedChanged_1(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                label19.Visible = false;
                label14.Visible = true;
                button3.Visible = true;
                clear();
                matchList = controller.ongoingmatches();
                size = matchList.Count();
                if (size != 0)
                {
                    display();
                }
            }
            else
            {
                label19.Visible = true;
                label14.Visible = false;
                clear();
                button3.Visible = false;
                matchList = controller.readallmatches();
                size = matchList.Count();
                display();
            }
        }
    }
}
