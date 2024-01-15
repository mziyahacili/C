using Microsoft.Extensions.Configuration;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Diagnostics.Eventing.Reader;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;


namespace _11._04._2024
{
    public partial class Form1 : Form
    {


        private SqlConnection conn;
        private SqlDataAdapter adapter;
        private DataSet ds;

        public Form1()
        {
            InitializeComponent();

            var builder = new ConfigurationBuilder();
            builder.AddUserSecrets<Form1>();

            var config = builder.Build();

            var connectionString = config["DefaultConnection"];

            conn = new SqlConnection(connectionString);

            conn.Open();

            dbDataGridView.AllowUserToAddRows = false; 
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            using SqlCommand cmd = new("select [name] from sys.tables", conn);
            using SqlDataReader reader = cmd.ExecuteReader();


            while (reader.Read())
            {
                dbComboBox.Items.Add(reader["name"]);
            }

        }

        private void getAllDatabtn_Click(object sender, EventArgs e)
        {

            adapter = new($"select * from {dbComboBox.SelectedItem}", conn);

            DataSet ds = new();
            adapter.Fill(ds);

            dbDataGridView.DataSource = ds.Tables[0];

        }

        private void SaveBtn_Click(object sender, EventArgs e)
        {
            using SqlCommandBuilder builder = new(adapter);

            DataTable table = (DataTable)dbDataGridView.DataSource; 

            adapter.Update(table);
        }

        private void deleteBtn_Click(object sender, EventArgs e)
        {
            foreach (DataGridViewRow row in dbDataGridView.SelectedRows)
            {
                dbDataGridView.Rows.Remove(row);
            }
        }



        private void addBtn_Click(object sender, EventArgs e)
        {
            if (dbDataGridView.DataSource is DataTable dataTable)
            {
                if (dbComboBox.Text == "Users")
                {
                    DataRow newRow = dataTable.NewRow();

                    newRow["Name"] = nameBox.Text;
                    newRow["Surname"] = surnameBox.Text;

                    dataTable.Rows.Add(newRow);
                    dbDataGridView.Refresh();
                }
                else if (dbComboBox.Text == "Students")
                {
                    DataRow newRow = dataTable.NewRow();

                    newRow["Name"] = nameBox.Text;
                    newRow["Surname"] = surnameBox.Text;
                    newRow["Age"] = ageBox.Text;


                    dataTable.Rows.Add(newRow);
                    dbDataGridView.Refresh();
                }
            }

            nameBox.Text = "Name";
            surnameBox.Text = "Surname";
            ageBox.Text = "Age";
        }


        private void dbComboBox_SelectedIndexChanged_1(object sender, EventArgs e)
        {

            if (dbComboBox.Text == "Students")
            {
                ageBox.Visible = true;
            }
            else if (dbComboBox.Text == "Users")
            {
                ageBox.Visible = false;
            }
        }

        private void nameBox_Enter(object sender, EventArgs e)
        {
            if (nameBox.Text == "Name")
            {
                nameBox.Text = "";
                nameBox.ForeColor = Color.Black;
            }
        }

        private void nameBox_Leave(object sender, EventArgs e)
        {
            if (nameBox.Text == "")
            {
                nameBox.Text = "Name";
                nameBox.ForeColor = Color.Silver;

            }
        }

        private void surnameBox_Enter(object sender, EventArgs e)
        {
            if (surnameBox.Text == "Surname")
            {
                surnameBox.Text = "";
                surnameBox.ForeColor = Color.Black;
            }
        }

        private void surnameBox_Leave(object sender, EventArgs e)
        {
            if (surnameBox.Text == "")
            {
                surnameBox.Text = "Surname";
                surnameBox.ForeColor = Color.Silver;

            }
        }

        private void ageBox_Enter(object sender, EventArgs e)
        {
            if (ageBox.Text == "Age")
            {
                ageBox.Text = "";
                ageBox.ForeColor = Color.Black;

            }
        }

        private void ageBox_Leave(object sender, EventArgs e)
        {
            if (ageBox.Text == "")
            {
                ageBox.Text = "Age";
                ageBox.ForeColor = Color.Silver;
            }
        }
    }
}
