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
    public partial class createMatch : Form
    {

        façade controller = façade.getcontroller();
        public createMatch()
        {
            InitializeComponent();
            radioButton1.Checked = true;
        }

      

        private void createMatch_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            if (radioButton2.Checked)
            {
                label1.Visible = true;
                textBox2.Visible = true;
                if (textBox1.Text != "" && textBox2.Text != "")
                {

                    string p1 = textBox1.Text;
                    string p2 = textBox2.Text;
                    int matchtable;
                    int mid = controller.getMatchID();
                    Match m = null;
                    bool check1 = false;
                    bool check2 = false;
                    check1 = controller.PlayerExist(p1);
                    if (!check1)
                    {
                        errorProvider1.SetIconPadding(textBox1, 10);
                        errorProvider1.SetError(textBox1, "Not a valid Player ID");
                    }


                    check2 = controller.PlayerExist(p2);
                    if (!check2)
                    {
                        errorProvider2.SetIconPadding(textBox2, 10);
                        errorProvider2.SetError(textBox2, "Not a valid Player ID");
                    }

                    if (check1 && check2)
                    {
                        matchtable = controller.findemptytable();
                        if (controller.findemptytable() == -1)
                        {
                            label3.Text = "No Empty Tables. Checking if any Table is Waiting";
                            controller.OverrideWaiting(p1.ToString(), p2.ToString());
                        }
                        else
                        {

                            m = new Match(mid.ToString(), p1.ToString(), p2.ToString(), matchtable.ToString(), -1, "", "");
                            m.Start();
                            controller.updatetablestatus(matchtable, 3);
                            controller.addnewmatch(m);
                            MessageBox.Show("Match started!");
                        }

                    }
                }
            }

            if (radioButton1.Checked)
            {
                if (textBox1.Text != "")
                {
                    string p1 = textBox1.Text;
                    string p2 = "NULL";
                    int matchtable;
                    int mid = controller.getMatchID();
                    Match m = null;
                    bool check = false;
                    check = controller.PlayerExist(p1);

                    if (check)
                    {

                        if (controller.findwaitingtable() == -1)
                        {
                            matchtable = controller.findemptytable();
                            if (matchtable == -1)
                            {

                                label3.Text = "Sorry There are currently no empty tables.";
                            }
                            else
                            {
                                m = new Match(mid.ToString(), p1.ToString(), p2.ToString(), matchtable.ToString(), -1,"", "");
                                controller.updatetablestatus(matchtable, 2);
                                controller.addnewmatch(m);
                                MessageBox.Show("Waiting for opponent!");
                            }
                        }
                        else
                        {
                            string matchid = controller.findmatch(controller.findwaitingtable().ToString());
                            controller.StartReserveMatch(matchid, p1);


                        }
                    }
                    else
                    {
                        MessageBox.Show("No such player exists. Please Enter a valid Player ID.");
                    }


                }
                else
                {
                    MessageBox.Show("Please Enter the player ID");
                }
            }



        }

        private void radioButton1_CheckedChanged_1(object sender, EventArgs e)
        {
            label1.Visible = false;
            textBox2.Visible = false;
        }

        private void radioButton2_CheckedChanged_1(object sender, EventArgs e)
        {
            label1.Visible = true;
            textBox2.Visible = true;
        }

        private void toolStripMenuItem1_Click(object sender, EventArgs e)
        {
            this.Hide();
            Tables f = new Tables();
            f.Show();
        }

        private void toolStripMenuItem3_Click(object sender, EventArgs e)
        {
            this.Hide();
            Players f = new Players();
            f.Show();
        }

        private void toolStripMenuItem4_Click(object sender, EventArgs e)
        {
            this.Hide();
            addPlayer f = new addPlayer();
            f.Show();
        }

        private void toolStripMenuItem5_Click(object sender, EventArgs e)
        {
            this.Hide();
            searchPlayer f = new searchPlayer();
            f.Show();
        }

        private void toolStripMenuItem7_Click(object sender, EventArgs e)
        {
            this.Hide();
            Matches f = new Matches();
            f.Show();
        }

        private void toolStripMenuItem8_Click(object sender, EventArgs e)
        {
            this.Hide();
            createMatch f = new createMatch();
            f.Show();
        }
    }
}
