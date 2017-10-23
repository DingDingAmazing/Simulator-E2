namespace Form_Control
{
    partial class MemoryCheck
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
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

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Btn_Read = new System.Windows.Forms.Button();
            this.Box_MemoryList = new System.Windows.Forms.DataGridView();
            this.B_Item = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.B_Value = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.Box_PITsList = new System.Windows.Forms.DataGridView();
            this.Btn_Get = new System.Windows.Forms.Button();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Length = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.Box_MemoryList)).BeginInit();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.Box_PITsList)).BeginInit();
            this.SuspendLayout();
            // 
            // Btn_Read
            // 
            this.Btn_Read.Location = new System.Drawing.Point(511, 16);
            this.Btn_Read.Name = "Btn_Read";
            this.Btn_Read.Size = new System.Drawing.Size(75, 23);
            this.Btn_Read.TabIndex = 0;
            this.Btn_Read.Text = "Read";
            this.Btn_Read.UseVisualStyleBackColor = true;
            this.Btn_Read.Click += new System.EventHandler(this.Btn_Read_Click);
            // 
            // Box_MemoryList
            // 
            this.Box_MemoryList.AllowUserToAddRows = false;
            this.Box_MemoryList.AllowUserToDeleteRows = false;
            this.Box_MemoryList.AllowUserToResizeColumns = false;
            this.Box_MemoryList.AllowUserToResizeRows = false;
            this.Box_MemoryList.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Box_MemoryList.CellBorderStyle = System.Windows.Forms.DataGridViewCellBorderStyle.None;
            this.Box_MemoryList.ClipboardCopyMode = System.Windows.Forms.DataGridViewClipboardCopyMode.EnableAlwaysIncludeHeaderText;
            this.Box_MemoryList.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.Box_MemoryList.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.B_Item,
            this.B_Value});
            this.Box_MemoryList.Location = new System.Drawing.Point(3, 6);
            this.Box_MemoryList.Name = "Box_MemoryList";
            this.Box_MemoryList.RowHeadersVisible = false;
            this.Box_MemoryList.Size = new System.Drawing.Size(489, 184);
            this.Box_MemoryList.TabIndex = 2;
            this.Box_MemoryList.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.Box_MemoryList_CellContentClick);
            // 
            // B_Item
            // 
            this.B_Item.HeaderText = "Item";
            this.B_Item.Name = "B_Item";
            this.B_Item.ReadOnly = true;
            // 
            // B_Value
            // 
            this.B_Value.HeaderText = "Value";
            this.B_Value.Name = "B_Value";
            this.B_Value.ReadOnly = true;
            this.B_Value.Width = 400;
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Location = new System.Drawing.Point(0, 3);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(651, 331);
            this.tabControl1.TabIndex = 3;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.Box_MemoryList);
            this.tabPage1.Controls.Add(this.Btn_Read);
            this.tabPage1.Location = new System.Drawing.Point(4, 22);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(643, 305);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "Memory Check";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.Box_PITsList);
            this.tabPage2.Controls.Add(this.Btn_Get);
            this.tabPage2.Location = new System.Drawing.Point(4, 22);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(643, 305);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "PITS";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // Box_PITsList
            // 
            this.Box_PITsList.AllowUserToAddRows = false;
            this.Box_PITsList.AllowUserToDeleteRows = false;
            this.Box_PITsList.AllowUserToResizeColumns = false;
            this.Box_PITsList.AllowUserToResizeRows = false;
            this.Box_PITsList.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Box_PITsList.CellBorderStyle = System.Windows.Forms.DataGridViewCellBorderStyle.None;
            this.Box_PITsList.ClipboardCopyMode = System.Windows.Forms.DataGridViewClipboardCopyMode.EnableAlwaysIncludeHeaderText;
            this.Box_PITsList.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.Box_PITsList.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.Column1,
            this.Length,
            this.dataGridViewTextBoxColumn2});
            this.Box_PITsList.Location = new System.Drawing.Point(6, 6);
            this.Box_PITsList.Name = "Box_PITsList";
            this.Box_PITsList.RowHeadersVisible = false;
            this.Box_PITsList.Size = new System.Drawing.Size(482, 189);
            this.Box_PITsList.TabIndex = 3;
            // 
            // Btn_Get
            // 
            this.Btn_Get.Location = new System.Drawing.Point(494, 15);
            this.Btn_Get.Name = "Btn_Get";
            this.Btn_Get.Size = new System.Drawing.Size(75, 23);
            this.Btn_Get.TabIndex = 0;
            this.Btn_Get.Text = "Read";
            this.Btn_Get.UseVisualStyleBackColor = true;
            this.Btn_Get.Click += new System.EventHandler(this.Btn_Get_Click);
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.HeaderText = "Item";
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            this.dataGridViewTextBoxColumn1.Width = 200;
            // 
            // Column1
            // 
            this.Column1.HeaderText = "SWID";
            this.Column1.Name = "Column1";
            // 
            // Length
            // 
            this.Length.HeaderText = "Length";
            this.Length.Name = "Length";
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.HeaderText = "Value";
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            this.dataGridViewTextBoxColumn2.Width = 280;
            // 
            // MemoryCheck
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.tabControl1);
            this.Name = "MemoryCheck";
            this.Size = new System.Drawing.Size(716, 506);
            ((System.ComponentModel.ISupportInitialize)(this.Box_MemoryList)).EndInit();
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.Box_PITsList)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        public System.Windows.Forms.Button Btn_Read;
        public System.Windows.Forms.DataGridView Box_MemoryList;
        private System.Windows.Forms.DataGridViewTextBoxColumn B_Item;
        private System.Windows.Forms.DataGridViewTextBoxColumn B_Value;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        public System.Windows.Forms.DataGridView Box_PITsList;
        public System.Windows.Forms.Button Btn_Get;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Length;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
    }
}
