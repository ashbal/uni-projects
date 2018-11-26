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
    public partial class Tables : Form
    {
        façade controller = façade.getcontroller();
        public Tables()
        {
            InitializeComponent();
            
            List<Table> tlist = controller.readalltables();
            if (tlist.Count == 0)
            {
                controller.initializetables();
                tlist = controller.readalltables();
            }


            label1.Text = tlist[0].Status();
            label2.Text = tlist[1].Status();
            label3.Text = tlist[2].Status();
            label4.Text = tlist[3].Status();
            label5.Text = tlist[4].Status();
            label6.Text = tlist[5].Status();
            label7.Text = tlist[6].Status();
            label8.Text = tlist[7].Status();
            label9.Text = tlist[8].Status();

            if (tlist[0].StatusID == 1)
            {
                pictureBox1.Image = Image.FromFile("0p.png");
            }
            else if (tlist[0].StatusID == 2)
            {
                pictureBox1.Image = Image.FromFile("1p.png");
            }
            else if (tlist[0].StatusID == 3)
            {
                pictureBox1.Image = Image.FromFile("2p.png");
            }

            if (tlist[1].StatusID == 1)
            {
                pictureBox2.Image = Image.FromFile("0p.png");
            }
            else if (tlist[1].StatusID == 2)
            {
                pictureBox2.Image = Image.FromFile("1p.png");
            }
            else if (tlist[1].StatusID == 3)
            {
                pictureBox2.Image = Image.FromFile("2p.png");
            }

            if (tlist[2].StatusID == 1)
            {
                pictureBox3.Image = Image.FromFile("0p.png");
            }
            else if (tlist[2].StatusID == 2)
            {
                pictureBox3.Image = Image.FromFile("1p.png");
            }
            else if (tlist[2].StatusID == 3)
            {
                pictureBox3.Image = Image.FromFile("2p.png");
            }

            if (tlist[3].StatusID == 1)
            {
                pictureBox4.Image = Image.FromFile("0p.png");
            }
            else if (tlist[3].StatusID == 2)
            {
                pictureBox4.Image = Image.FromFile("1p.png");
            }
            else if (tlist[3].StatusID == 3)
            {
                pictureBox4.Image = Image.FromFile("2p.png");
            }

            if (tlist[4].StatusID == 1)
            {
                pictureBox5.Image = Image.FromFile("0p.png");
            }
            else if (tlist[4].StatusID == 2)
            {
                pictureBox5.Image = Image.FromFile("1p.png");
            }
            else if (tlist[4].StatusID == 3)
            {
                pictureBox5.Image = Image.FromFile("2p.png");
            }

            if (tlist[5].StatusID == 1)
            {
                pictureBox6.Image = Image.FromFile("0p.png");
            }
            else if (tlist[5].StatusID == 2)
            {
                pictureBox6.Image = Image.FromFile("1p.png");
            }
            else if (tlist[5].StatusID == 3)
            {
                pictureBox6.Image = Image.FromFile("2p.png");
            }

            if (tlist[6].StatusID == 1)
            {
                pictureBox7.Image = Image.FromFile("0p.png");
            }
            else if (tlist[6].StatusID == 2)
            {
                pictureBox7.Image = Image.FromFile("1p.png");
            }
            else if (tlist[6].StatusID == 3)
            {
                pictureBox7.Image = Image.FromFile("2p.png");
            }

            if (tlist[7].StatusID == 1)
            {
                pictureBox8.Image = Image.FromFile("0p.png");
            }
            else if (tlist[7].StatusID == 2)
            {
                pictureBox8.Image = Image.FromFile("1p.png");
            }
            else if (tlist[7].StatusID == 3)
            {
                pictureBox8.Image = Image.FromFile("2p.png");
            }

            if (tlist[8].StatusID == 1)
            {
                pictureBox9.Image = Image.FromFile("0p.png");
            }
            else if (tlist[8].StatusID == 2)
            {
                pictureBox9.Image = Image.FromFile("1p.png");
            }
            else if (tlist[8].StatusID == 3)
            {
                pictureBox9.Image = Image.FromFile("2p.png");
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

        private void Tables_Load(object sender, EventArgs e)
        {

        }
    }
}
