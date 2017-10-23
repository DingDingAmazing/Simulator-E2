namespace Form_Control
{
    partial class ParkAssistantForm
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
            this.label1 = new System.Windows.Forms.Label();
            this.Box_PrkAstRrSysStat = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.Box_PrkAsstRrExtdDist_FAKE = new System.Windows.Forms.NumericUpDown();
            this.label3 = new System.Windows.Forms.Label();
            this.Box_PARrRgn1ObjStat = new System.Windows.Forms.ComboBox();
            this.label4 = new System.Windows.Forms.Label();
            this.Box_PARrRgn2ObjStat = new System.Windows.Forms.ComboBox();
            this.label5 = new System.Windows.Forms.Label();
            this.Box_PARrRgn3ObjStat = new System.Windows.Forms.ComboBox();
            this.label6 = new System.Windows.Forms.Label();
            this.Box_PARrRgn4ObjStat = new System.Windows.Forms.ComboBox();
            this.Box_PrkAsstRrExtdDist = new System.Windows.Forms.NumericUpDown();
            ((System.ComponentModel.ISupportInitialize)(this.Box_PrkAsstRrExtdDist_FAKE)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.Box_PrkAsstRrExtdDist)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(15, 11);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(196, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Parking Assistance Rear System Status:";
            // 
            // Box_PrkAstRrSysStat
            // 
            this.Box_PrkAstRrSysStat.FormattingEnabled = true;
            this.Box_PrkAstRrSysStat.Location = new System.Drawing.Point(145, 27);
            this.Box_PrkAstRrSysStat.Name = "Box_PrkAstRrSysStat";
            this.Box_PrkAstRrSysStat.Size = new System.Drawing.Size(121, 21);
            this.Box_PrkAstRrSysStat.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(15, 51);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(219, 13);
            this.label2.TabIndex = 0;
            this.label2.Text = "Parking Assistance Rear Extended Distance:";
            // 
            // Box_PrkAsstRrExtdDist_FAKE
            // 
            this.Box_PrkAsstRrExtdDist_FAKE.DecimalPlaces = 2;
            this.Box_PrkAsstRrExtdDist_FAKE.Increment = new decimal(new int[] {
            5,
            0,
            0,
            131072});
            this.Box_PrkAsstRrExtdDist_FAKE.Location = new System.Drawing.Point(214, 67);
            this.Box_PrkAsstRrExtdDist_FAKE.Maximum = new decimal(new int[] {
            4095,
            0,
            0,
            131072});
            this.Box_PrkAsstRrExtdDist_FAKE.Name = "Box_PrkAsstRrExtdDist_FAKE";
            this.Box_PrkAsstRrExtdDist_FAKE.Size = new System.Drawing.Size(52, 20);
            this.Box_PrkAsstRrExtdDist_FAKE.TabIndex = 3;
            this.Box_PrkAsstRrExtdDist_FAKE.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.Box_PrkAsstRrExtdDist_FAKE.ValueChanged += new System.EventHandler(this.Box_PrkAsstRrExtdDist_FAKE_ValueChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(15, 90);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(239, 13);
            this.label3.TabIndex = 0;
            this.label3.Text = "Parking Assistance Rear Region 1 Object Status:";
            // 
            // Box_PARrRgn1ObjStat
            // 
            this.Box_PARrRgn1ObjStat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Box_PARrRgn1ObjStat.FormattingEnabled = true;
            this.Box_PARrRgn1ObjStat.Location = new System.Drawing.Point(145, 106);
            this.Box_PARrRgn1ObjStat.Name = "Box_PARrRgn1ObjStat";
            this.Box_PARrRgn1ObjStat.Size = new System.Drawing.Size(121, 21);
            this.Box_PARrRgn1ObjStat.TabIndex = 1;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(15, 130);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(239, 13);
            this.label4.TabIndex = 0;
            this.label4.Text = "Parking Assistance Rear Region 2 Object Status:";
            // 
            // Box_PARrRgn2ObjStat
            // 
            this.Box_PARrRgn2ObjStat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Box_PARrRgn2ObjStat.FormattingEnabled = true;
            this.Box_PARrRgn2ObjStat.Location = new System.Drawing.Point(145, 146);
            this.Box_PARrRgn2ObjStat.Name = "Box_PARrRgn2ObjStat";
            this.Box_PARrRgn2ObjStat.Size = new System.Drawing.Size(121, 21);
            this.Box_PARrRgn2ObjStat.TabIndex = 1;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(15, 170);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(239, 13);
            this.label5.TabIndex = 0;
            this.label5.Text = "Parking Assistance Rear Region 3 Object Status:";
            // 
            // Box_PARrRgn3ObjStat
            // 
            this.Box_PARrRgn3ObjStat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Box_PARrRgn3ObjStat.FormattingEnabled = true;
            this.Box_PARrRgn3ObjStat.Location = new System.Drawing.Point(145, 186);
            this.Box_PARrRgn3ObjStat.Name = "Box_PARrRgn3ObjStat";
            this.Box_PARrRgn3ObjStat.Size = new System.Drawing.Size(121, 21);
            this.Box_PARrRgn3ObjStat.TabIndex = 1;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(15, 210);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(239, 13);
            this.label6.TabIndex = 0;
            this.label6.Text = "Parking Assistance Rear Region 4 Object Status:";
            // 
            // Box_PARrRgn4ObjStat
            // 
            this.Box_PARrRgn4ObjStat.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Box_PARrRgn4ObjStat.FormattingEnabled = true;
            this.Box_PARrRgn4ObjStat.Location = new System.Drawing.Point(145, 226);
            this.Box_PARrRgn4ObjStat.Name = "Box_PARrRgn4ObjStat";
            this.Box_PARrRgn4ObjStat.Size = new System.Drawing.Size(121, 21);
            this.Box_PARrRgn4ObjStat.TabIndex = 1;
            // 
            // Box_PrkAsstRrExtdDist
            // 
            this.Box_PrkAsstRrExtdDist.Location = new System.Drawing.Point(214, 67);
            this.Box_PrkAsstRrExtdDist.Maximum = new decimal(new int[] {
            4095,
            0,
            0,
            0});
            this.Box_PrkAsstRrExtdDist.Name = "Box_PrkAsstRrExtdDist";
            this.Box_PrkAsstRrExtdDist.Size = new System.Drawing.Size(52, 20);
            this.Box_PrkAsstRrExtdDist.TabIndex = 3;
            this.Box_PrkAsstRrExtdDist.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.Box_PrkAsstRrExtdDist.Visible = false;
            // 
            // ParkAssistantForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.Box_PrkAsstRrExtdDist);
            this.Controls.Add(this.Box_PrkAsstRrExtdDist_FAKE);
            this.Controls.Add(this.Box_PARrRgn4ObjStat);
            this.Controls.Add(this.Box_PARrRgn3ObjStat);
            this.Controls.Add(this.Box_PARrRgn2ObjStat);
            this.Controls.Add(this.Box_PARrRgn1ObjStat);
            this.Controls.Add(this.Box_PrkAstRrSysStat);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label1);
            this.Name = "ParkAssistantForm";
            this.Size = new System.Drawing.Size(707, 339);
            ((System.ComponentModel.ISupportInitialize)(this.Box_PrkAsstRrExtdDist_FAKE)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.Box_PrkAsstRrExtdDist)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        public System.Windows.Forms.ComboBox Box_PrkAstRrSysStat;
        private System.Windows.Forms.Label label2;
        public System.Windows.Forms.NumericUpDown Box_PrkAsstRrExtdDist_FAKE;
        private System.Windows.Forms.Label label3;
        public System.Windows.Forms.ComboBox Box_PARrRgn1ObjStat;
        private System.Windows.Forms.Label label4;
        public System.Windows.Forms.ComboBox Box_PARrRgn2ObjStat;
        private System.Windows.Forms.Label label5;
        public System.Windows.Forms.ComboBox Box_PARrRgn3ObjStat;
        private System.Windows.Forms.Label label6;
        public System.Windows.Forms.ComboBox Box_PARrRgn4ObjStat;
        public System.Windows.Forms.NumericUpDown Box_PrkAsstRrExtdDist;
    }
}
