namespace _11._04._2024
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            tableLayoutPanel1 = new TableLayoutPanel();
            panel1 = new Panel();
            addBtn = new Button();
            deleteBtn = new Button();
            saveBtn = new Button();
            recrieveAllData = new Button();
            dbDataGridView = new DataGridView();
            panel2 = new Panel();
            ageBox = new TextBox();
            surnameBox = new TextBox();
            nameBox = new TextBox();
            dbComboBox = new ComboBox();
            tableLayoutPanel1.SuspendLayout();
            panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)dbDataGridView).BeginInit();
            panel2.SuspendLayout();
            SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.ColumnCount = 2;
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 50F));
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 50F));
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 20F));
            tableLayoutPanel1.Controls.Add(panel1, 1, 0);
            tableLayoutPanel1.Controls.Add(dbDataGridView, 0, 1);
            tableLayoutPanel1.Controls.Add(panel2, 0, 0);
            tableLayoutPanel1.Dock = DockStyle.Fill;
            tableLayoutPanel1.Location = new Point(0, 0);
            tableLayoutPanel1.Name = "tableLayoutPanel1";
            tableLayoutPanel1.RowCount = 2;
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 22.4444447F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 77.55556F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 20F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 20F));
            tableLayoutPanel1.Size = new Size(800, 450);
            tableLayoutPanel1.TabIndex = 0;
            // 
            // panel1
            // 
            panel1.Controls.Add(addBtn);
            panel1.Controls.Add(deleteBtn);
            panel1.Controls.Add(saveBtn);
            panel1.Controls.Add(recrieveAllData);
            panel1.Dock = DockStyle.Fill;
            panel1.Location = new Point(403, 3);
            panel1.Name = "panel1";
            panel1.Size = new Size(394, 95);
            panel1.TabIndex = 0;
            // 
            // addBtn
            // 
            addBtn.Dock = DockStyle.Fill;
            addBtn.Location = new Point(256, 0);
            addBtn.Name = "addBtn";
            addBtn.Size = new Size(138, 95);
            addBtn.TabIndex = 3;
            addBtn.Text = "Add";
            addBtn.UseVisualStyleBackColor = true;
            addBtn.Click += addBtn_Click;
            // 
            // deleteBtn
            // 
            deleteBtn.Dock = DockStyle.Left;
            deleteBtn.Location = new Point(181, 0);
            deleteBtn.Name = "deleteBtn";
            deleteBtn.Size = new Size(75, 95);
            deleteBtn.TabIndex = 2;
            deleteBtn.Text = "Delete";
            deleteBtn.UseVisualStyleBackColor = true;
            deleteBtn.Click += deleteBtn_Click;
            // 
            // saveBtn
            // 
            saveBtn.Dock = DockStyle.Left;
            saveBtn.Location = new Point(106, 0);
            saveBtn.Name = "saveBtn";
            saveBtn.Size = new Size(75, 95);
            saveBtn.TabIndex = 1;
            saveBtn.Text = "Save";
            saveBtn.UseVisualStyleBackColor = true;
            saveBtn.Click += SaveBtn_Click;
            // 
            // recrieveAllData
            // 
            recrieveAllData.Dock = DockStyle.Left;
            recrieveAllData.Location = new Point(0, 0);
            recrieveAllData.Name = "recrieveAllData";
            recrieveAllData.Size = new Size(106, 95);
            recrieveAllData.TabIndex = 0;
            recrieveAllData.Text = "Recrieve All Data";
            recrieveAllData.UseVisualStyleBackColor = true;
            recrieveAllData.Click += getAllDatabtn_Click;
            // 
            // dbDataGridView
            // 
            dbDataGridView.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            tableLayoutPanel1.SetColumnSpan(dbDataGridView, 2);
            dbDataGridView.Dock = DockStyle.Fill;
            dbDataGridView.Location = new Point(3, 104);
            dbDataGridView.Name = "dbDataGridView";
            dbDataGridView.Size = new Size(794, 343);
            dbDataGridView.TabIndex = 2;
            // 
            // panel2
            // 
            panel2.Controls.Add(ageBox);
            panel2.Controls.Add(surnameBox);
            panel2.Controls.Add(nameBox);
            panel2.Controls.Add(dbComboBox);
            panel2.Location = new Point(3, 3);
            panel2.Name = "panel2";
            panel2.Size = new Size(394, 95);
            panel2.TabIndex = 3;
            // 
            // ageBox
            // 
            ageBox.ForeColor = Color.Gray;
            ageBox.Location = new Point(184, 55);
            ageBox.Name = "ageBox";
            ageBox.Size = new Size(191, 23);
            ageBox.TabIndex = 5;
            ageBox.Text = "Age";
            ageBox.Visible = false;
            ageBox.VisibleChanged += dbComboBox_SelectedIndexChanged_1;
            ageBox.Enter += ageBox_Enter;
            ageBox.Leave += ageBox_Leave;
            // 
            // surnameBox
            // 
            surnameBox.ForeColor = Color.Gray;
            surnameBox.Location = new Point(3, 55);
            surnameBox.Name = "surnameBox";
            surnameBox.Size = new Size(175, 23);
            surnameBox.TabIndex = 4;
            surnameBox.Text = "Surname";
            surnameBox.Enter += surnameBox_Enter;
            surnameBox.Leave += surnameBox_Leave;
            // 
            // nameBox
            // 
            nameBox.ForeColor = Color.Gray;
            nameBox.Location = new Point(3, 26);
            nameBox.Name = "nameBox";
            nameBox.Size = new Size(175, 23);
            nameBox.TabIndex = 3;
            nameBox.Text = "Name";
            nameBox.Enter += nameBox_Enter;
            nameBox.Leave += nameBox_Leave;
            // 
            // dbComboBox
            // 
            dbComboBox.Dock = DockStyle.Fill;
            dbComboBox.FormattingEnabled = true;
            dbComboBox.Location = new Point(0, 0);
            dbComboBox.Name = "dbComboBox";
            dbComboBox.Size = new Size(394, 23);
            dbComboBox.TabIndex = 2;
            dbComboBox.SelectedIndexChanged += dbComboBox_SelectedIndexChanged_1;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(tableLayoutPanel1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            tableLayoutPanel1.ResumeLayout(false);
            panel1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)dbDataGridView).EndInit();
            panel2.ResumeLayout(false);
            panel2.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private TableLayoutPanel tableLayoutPanel1;
        private Panel panel1;
        private Button addBtn;
        private Button deleteBtn;
        private Button saveBtn;
        private Button recrieveAllData;
        private DataGridView dbDataGridView;
        private Panel panel2;
        private TextBox ageBox;
        private TextBox surnameBox;
        private TextBox nameBox;
        private ComboBox dbComboBox;
    }
}
