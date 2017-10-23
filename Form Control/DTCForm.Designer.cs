namespace Form_Control
{
    partial class DTCForm
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
            this.Btn_ReadDTC = new System.Windows.Forms.Button();
            this.Btn_ClearDTC = new System.Windows.Forms.Button();
            this.Box_DTC = new System.Windows.Forms.DataGridView();
            this.DTC_Code = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.DTC = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.DTC_Type = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.DTC_Description = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.DTC_Hex_Value = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.DTC_Status = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.Box_DTC)).BeginInit();
            this.SuspendLayout();
            // 
            // Btn_ReadDTC
            // 
            this.Btn_ReadDTC.Location = new System.Drawing.Point(18, 3);
            this.Btn_ReadDTC.Name = "Btn_ReadDTC";
            this.Btn_ReadDTC.Size = new System.Drawing.Size(75, 23);
            this.Btn_ReadDTC.TabIndex = 0;
            this.Btn_ReadDTC.Text = "Read DTCs";
            this.Btn_ReadDTC.UseVisualStyleBackColor = true;
            this.Btn_ReadDTC.Click += new System.EventHandler(this.Btn_ReadDTC_Click);
            // 
            // Btn_ClearDTC
            // 
            this.Btn_ClearDTC.Location = new System.Drawing.Point(500, 3);
            this.Btn_ClearDTC.Name = "Btn_ClearDTC";
            this.Btn_ClearDTC.Size = new System.Drawing.Size(75, 23);
            this.Btn_ClearDTC.TabIndex = 0;
            this.Btn_ClearDTC.Text = "Clear DTCs";
            this.Btn_ClearDTC.UseVisualStyleBackColor = true;
            this.Btn_ClearDTC.Click += new System.EventHandler(this.Btn_ClearDTC_Click);
            // 
            // Box_DTC
            // 
            this.Box_DTC.AllowUserToAddRows = false;
            this.Box_DTC.AllowUserToDeleteRows = false;
            this.Box_DTC.AllowUserToResizeColumns = false;
            this.Box_DTC.AllowUserToResizeRows = false;
            this.Box_DTC.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Box_DTC.CellBorderStyle = System.Windows.Forms.DataGridViewCellBorderStyle.None;
            this.Box_DTC.ClipboardCopyMode = System.Windows.Forms.DataGridViewClipboardCopyMode.EnableAlwaysIncludeHeaderText;
            this.Box_DTC.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.Box_DTC.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.DTC_Code,
            this.DTC,
            this.DTC_Type,
            this.DTC_Description,
            this.DTC_Hex_Value,
            this.DTC_Status});
            this.Box_DTC.Location = new System.Drawing.Point(7, 45);
            this.Box_DTC.Name = "Box_DTC";
            this.Box_DTC.RowHeadersVisible = false;
            this.Box_DTC.Size = new System.Drawing.Size(590, 222);
            this.Box_DTC.TabIndex = 1;
            this.Box_DTC.RowsAdded += new System.Windows.Forms.DataGridViewRowsAddedEventHandler(this.Box_DTC_RowsAdded);
            // 
            // DTC_Code
            // 
            this.DTC_Code.HeaderText = "Code";
            this.DTC_Code.Name = "DTC_Code";
            this.DTC_Code.Width = 50;
            // 
            // DTC
            // 
            this.DTC.HeaderText = "DTC";
            this.DTC.Name = "DTC";
            this.DTC.Width = 50;
            // 
            // DTC_Type
            // 
            this.DTC_Type.HeaderText = "Type";
            this.DTC_Type.Name = "DTC_Type";
            this.DTC_Type.Width = 50;
            // 
            // DTC_Description
            // 
            this.DTC_Description.HeaderText = "Description";
            this.DTC_Description.Name = "DTC_Description";
            this.DTC_Description.Width = 300;
            // 
            // DTC_Hex_Value
            // 
            this.DTC_Hex_Value.HeaderText = "Hex Value";
            this.DTC_Hex_Value.Name = "DTC_Hex_Value";
            this.DTC_Hex_Value.Width = 50;
            // 
            // DTC_Status
            // 
            this.DTC_Status.HeaderText = "Status";
            this.DTC_Status.Name = "DTC_Status";
            // 
            // DTCForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoScroll = true;
            this.Controls.Add(this.Box_DTC);
            this.Controls.Add(this.Btn_ClearDTC);
            this.Controls.Add(this.Btn_ReadDTC);
            this.Name = "DTCForm";
            this.Size = new System.Drawing.Size(651, 313);
            ((System.ComponentModel.ISupportInitialize)(this.Box_DTC)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        public System.Windows.Forms.Button Btn_ReadDTC;
        public System.Windows.Forms.Button Btn_ClearDTC;
        public System.Windows.Forms.DataGridView Box_DTC;
        private System.Windows.Forms.DataGridViewTextBoxColumn DTC_Code;
        private System.Windows.Forms.DataGridViewTextBoxColumn DTC;
        private System.Windows.Forms.DataGridViewTextBoxColumn DTC_Type;
        private System.Windows.Forms.DataGridViewTextBoxColumn DTC_Description;
        private System.Windows.Forms.DataGridViewTextBoxColumn DTC_Hex_Value;
        private System.Windows.Forms.DataGridViewTextBoxColumn DTC_Status;
    }
}
