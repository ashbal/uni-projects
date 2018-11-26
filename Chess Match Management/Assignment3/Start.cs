using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Logic;

namespace Assignment3
{
    public partial class Start : Form
    {
        public Start()
        {
            InitializeComponent();

           
        }

        private void btnLogin_Click(object sender, EventArgs e)
        {
            if (txtUserName.Text == "admin" && txtPassword.Text == "1024")
            {
                this.Hide();
                mainMenu m = new mainMenu();
                m.Show();

            }
            else
            {
                MessageBox.Show("Incorrect Credendtials. Please try again.");
            }
        }

        private void Start_Load(object sender, EventArgs e)
        {

        }
    }
}
