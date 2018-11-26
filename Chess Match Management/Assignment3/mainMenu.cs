using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Assignment3
{
    public partial class mainMenu : Form
    {
        public mainMenu()
        {
            InitializeComponent();
        }

        private void mainMenu_Load(object sender, EventArgs e)
        {

        }

      
        private void button1_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            Tables t = new Tables();
            t.Show();
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            Players p = new Players();
            p.Show();
        }

        private void button3_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            Matches m = new Matches();
            m.Show();
        }

        private void button4_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            addPlayer m = new addPlayer();
            m.Show();
        }

        private void button5_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            createMatch m = new createMatch();
            m.Show();
        }

        private void button6_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            searchPlayer m = new searchPlayer();
            m.Show();
        }
    }
}
