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
using System.Text.RegularExpressions;

namespace Assignment3
{
    public partial class addPlayer : Form
    {
        façade controller = façade.getcontroller();
        public addPlayer()
        {
            InitializeComponent();
        }

        private void addPlayer_Load(object sender, EventArgs e)
        {

        }

       

        private void button1_Click_1(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "" && maskedTextBox1.Text != "")
            {
                int t;
                string name = textBox2.Text;
                string cnic = maskedTextBox1.Text;
                bool isNumeric = int.TryParse(textBox1.Text, out t);
                
                bool test1 = true;
                bool test2 = true;
                bool test3 = true;

                string id = textBox1.Text;
                
                if (!isNumeric || id.Length > 4)
                {
                    errorProvider1.SetIconPadding(textBox1, 10);
                    errorProvider1.SetError(textBox1, "Only numbers allowed. Maximum 4 digit");
                    test1 = false;
                }
                if(name.ToCharArray().Any(char.IsDigit) || name.Length > 30)
                {
                    errorProvider2.SetIconPadding(textBox2, 10);
                    errorProvider2.SetError(textBox2, "Only Alphabets allowed. Maximum 30 characters");
                    test2 = false;
                }
                
                if (cnic.Length<15)
                {
                    errorProvider3.SetIconPadding(maskedTextBox1, 10);
                    errorProvider3.SetError(maskedTextBox1, "CNIC Incomplete!");
                    test3 = false;
                }

                if (test1 && test2 && test3)
               
                {
                    if (controller.PlayerExist(id))
                    {
                        MessageBox.Show("Player ID already Exists!");
                    }
                    else
                    {
                        textBox1.Text = "";
                        textBox2.Text = "";
                        maskedTextBox1.Text = "";

                        Player temp = new Player(id, name, cnic);
                        controller.addnewplayer(temp);
                        MessageBox.Show("Saved Successfully!");
                    }
                }
              
                
                
            }
            else
            {
                errorProvider1.SetIconPadding(textBox1, 10);
                errorProvider2.SetIconPadding(textBox2, 10);
                errorProvider3.SetIconPadding(maskedTextBox1, 10);
                errorProvider1.SetError(textBox1, "Blank Field!");
                errorProvider2.SetError(textBox2, "Blank Field!");
                errorProvider3.SetError(maskedTextBox1, "Blank Field!");


            }

        }

        private void viewToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            Players f = new Players();
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

        private void viewTablesToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Hide();
            Tables f = new Tables();
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
    }
}
