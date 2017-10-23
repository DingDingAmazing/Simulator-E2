namespace Form_Control
{
    partial class Hvac
    {
        /// <summary> 
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region 组件设计器生成的代码

        /// <summary> 
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.comboBox_FrontBlower = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.comboBox_AirInlet = new System.Windows.Forms.ComboBox();
            this.label9 = new System.Windows.Forms.Label();
            this.comboBox_Zone = new System.Windows.Forms.ComboBox();
            this.label10 = new System.Windows.Forms.Label();
            this.comboBox_AirCondition = new System.Windows.Forms.ComboBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.label33 = new System.Windows.Forms.Label();
            this.label50 = new System.Windows.Forms.Label();
            this.label49 = new System.Windows.Forms.Label();
            this.label37 = new System.Windows.Forms.Label();
            this.label36 = new System.Windows.Forms.Label();
            this.label35 = new System.Windows.Forms.Label();
            this.label34 = new System.Windows.Forms.Label();
            this.label32 = new System.Windows.Forms.Label();
            this.label31 = new System.Windows.Forms.Label();
            this.Bar_FanSpeed = new System.Windows.Forms.TrackBar();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.label48 = new System.Windows.Forms.Label();
            this.label47 = new System.Windows.Forms.Label();
            this.label46 = new System.Windows.Forms.Label();
            this.label45 = new System.Windows.Forms.Label();
            this.label44 = new System.Windows.Forms.Label();
            this.label43 = new System.Windows.Forms.Label();
            this.label42 = new System.Windows.Forms.Label();
            this.label41 = new System.Windows.Forms.Label();
            this.label40 = new System.Windows.Forms.Label();
            this.label39 = new System.Windows.Forms.Label();
            this.label38 = new System.Windows.Forms.Label();
            this.label30 = new System.Windows.Forms.Label();
            this.label29 = new System.Windows.Forms.Label();
            this.label28 = new System.Windows.Forms.Label();
            this.label27 = new System.Windows.Forms.Label();
            this.label26 = new System.Windows.Forms.Label();
            this.label25 = new System.Windows.Forms.Label();
            this.label24 = new System.Windows.Forms.Label();
            this.label23 = new System.Windows.Forms.Label();
            this.label22 = new System.Windows.Forms.Label();
            this.label21 = new System.Windows.Forms.Label();
            this.label20 = new System.Windows.Forms.Label();
            this.label19 = new System.Windows.Forms.Label();
            this.label18 = new System.Windows.Forms.Label();
            this.label17 = new System.Windows.Forms.Label();
            this.label16 = new System.Windows.Forms.Label();
            this.label15 = new System.Windows.Forms.Label();
            this.label14 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.comboBox_Temp = new System.Windows.Forms.ComboBox();
            this.Bar_Temp = new System.Windows.Forms.TrackBar();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.checkBox_Front_AirInlet = new System.Windows.Forms.CheckBox();
            this.checkBox_Front_ACStatus = new System.Windows.Forms.CheckBox();
            this.checkBox_Front_RightSetTemp = new System.Windows.Forms.CheckBox();
            this.checkBox_Front_LeftSetTemp = new System.Windows.Forms.CheckBox();
            this.checkBox_Front_FanSpeed = new System.Windows.Forms.CheckBox();
            this.checkBox_Front_BlowerMode = new System.Windows.Forms.CheckBox();
            this.label4 = new System.Windows.Forms.Label();
            this.groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.Bar_FanSpeed)).BeginInit();
            this.groupBox3.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.Bar_Temp)).BeginInit();
            this.groupBox4.SuspendLayout();
            this.SuspendLayout();
            // 
            // comboBox_FrontBlower
            // 
            this.comboBox_FrontBlower.FormattingEnabled = true;
            this.comboBox_FrontBlower.Items.AddRange(new object[] {
            "OFF",
            "AUTO",
            "DEFROST",
            "HEATER",
            "HEATER-DEFROST",
            "BI-LEVEL",
            "AC",
            "PURGE",
            "ECO",
            "DEFOG",
            "TRI-LEVEL",
            "E-DEFROST",
            "E-DEFOG",
            "E-PANEL",
            "E-TRI-LEVEL",
            "FloorDirectionCombi",
            "PanelDirectionCombi",
            "WindowScreenDirectionCombi"});
            this.comboBox_FrontBlower.Location = new System.Drawing.Point(31, 145);
            this.comboBox_FrontBlower.Name = "comboBox_FrontBlower";
            this.comboBox_FrontBlower.Size = new System.Drawing.Size(101, 21);
            this.comboBox_FrontBlower.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(28, 129);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(69, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "Front_Blower";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(399, 122);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(39, 13);
            this.label3.TabIndex = 4;
            this.label3.Text = "AirInlet";
            // 
            // comboBox_AirInlet
            // 
            this.comboBox_AirInlet.FormattingEnabled = true;
            this.comboBox_AirInlet.Items.AddRange(new object[] {
            "Fresh Air",
            "Recirculation",
            "Auto Recirculation"});
            this.comboBox_AirInlet.Location = new System.Drawing.Point(402, 145);
            this.comboBox_AirInlet.Name = "comboBox_AirInlet";
            this.comboBox_AirInlet.Size = new System.Drawing.Size(92, 21);
            this.comboBox_AirInlet.TabIndex = 5;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(157, 129);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(32, 13);
            this.label9.TabIndex = 17;
            this.label9.Text = "Zone";
            // 
            // comboBox_Zone
            // 
            this.comboBox_Zone.FormattingEnabled = true;
            this.comboBox_Zone.Items.AddRange(new object[] {
            "Single Zone Climate Control",
            "Dual Zone Climate Control",
            "Tri Zone Climate Control",
            "Climate Zone Linked"});
            this.comboBox_Zone.Location = new System.Drawing.Point(155, 145);
            this.comboBox_Zone.Name = "comboBox_Zone";
            this.comboBox_Zone.Size = new System.Drawing.Size(101, 21);
            this.comboBox_Zone.TabIndex = 18;
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(284, 127);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(63, 13);
            this.label10.TabIndex = 19;
            this.label10.Text = "AirCondition";
            // 
            // comboBox_AirCondition
            // 
            this.comboBox_AirCondition.FormattingEnabled = true;
            this.comboBox_AirCondition.Items.AddRange(new object[] {
            "Inactive",
            "Active",
            "Hybrid A/C On",
            "Comfort A/C On",
            "ECO A/C On",
            "Battry A/C On"});
            this.comboBox_AirCondition.Location = new System.Drawing.Point(284, 145);
            this.comboBox_AirCondition.Name = "comboBox_AirCondition";
            this.comboBox_AirCondition.Size = new System.Drawing.Size(92, 21);
            this.comboBox_AirCondition.TabIndex = 20;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.label33);
            this.groupBox2.Controls.Add(this.label50);
            this.groupBox2.Controls.Add(this.label49);
            this.groupBox2.Controls.Add(this.label37);
            this.groupBox2.Controls.Add(this.label36);
            this.groupBox2.Controls.Add(this.label35);
            this.groupBox2.Controls.Add(this.label34);
            this.groupBox2.Controls.Add(this.label32);
            this.groupBox2.Controls.Add(this.label31);
            this.groupBox2.Controls.Add(this.Bar_FanSpeed);
            this.groupBox2.Location = new System.Drawing.Point(23, 18);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(523, 101);
            this.groupBox2.TabIndex = 25;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "HVAC Fan Speed";
            // 
            // label33
            // 
            this.label33.AutoSize = true;
            this.label33.Location = new System.Drawing.Point(74, 74);
            this.label33.Name = "label33";
            this.label33.Size = new System.Drawing.Size(19, 13);
            this.label33.TabIndex = 29;
            this.label33.Text = "01";
            // 
            // label50
            // 
            this.label50.AutoSize = true;
            this.label50.Location = new System.Drawing.Point(421, 74);
            this.label50.Name = "label50";
            this.label50.Size = new System.Drawing.Size(19, 13);
            this.label50.TabIndex = 29;
            this.label50.Text = "08";
            // 
            // label49
            // 
            this.label49.AutoSize = true;
            this.label49.Location = new System.Drawing.Point(372, 74);
            this.label49.Name = "label49";
            this.label49.Size = new System.Drawing.Size(19, 13);
            this.label49.TabIndex = 29;
            this.label49.Text = "07";
            // 
            // label37
            // 
            this.label37.AutoSize = true;
            this.label37.Location = new System.Drawing.Point(320, 74);
            this.label37.Name = "label37";
            this.label37.Size = new System.Drawing.Size(19, 13);
            this.label37.TabIndex = 29;
            this.label37.Text = "06";
            // 
            // label36
            // 
            this.label36.AutoSize = true;
            this.label36.Location = new System.Drawing.Point(272, 74);
            this.label36.Name = "label36";
            this.label36.Size = new System.Drawing.Size(19, 13);
            this.label36.TabIndex = 29;
            this.label36.Text = "05";
            // 
            // label35
            // 
            this.label35.AutoSize = true;
            this.label35.Location = new System.Drawing.Point(220, 74);
            this.label35.Name = "label35";
            this.label35.Size = new System.Drawing.Size(19, 13);
            this.label35.TabIndex = 29;
            this.label35.Text = "04";
            // 
            // label34
            // 
            this.label34.AutoSize = true;
            this.label34.Location = new System.Drawing.Point(172, 74);
            this.label34.Name = "label34";
            this.label34.Size = new System.Drawing.Size(19, 13);
            this.label34.TabIndex = 29;
            this.label34.Text = "03";
            // 
            // label32
            // 
            this.label32.AutoSize = true;
            this.label32.Location = new System.Drawing.Point(122, 74);
            this.label32.Name = "label32";
            this.label32.Size = new System.Drawing.Size(19, 13);
            this.label32.TabIndex = 29;
            this.label32.Text = "02";
            // 
            // label31
            // 
            this.label31.AutoSize = true;
            this.label31.Location = new System.Drawing.Point(26, 74);
            this.label31.Name = "label31";
            this.label31.Size = new System.Drawing.Size(19, 13);
            this.label31.TabIndex = 28;
            this.label31.Text = "00";
            // 
            // Bar_FanSpeed
            // 
            this.Bar_FanSpeed.AllowDrop = true;
            this.Bar_FanSpeed.LargeChange = 1;
            this.Bar_FanSpeed.Location = new System.Drawing.Point(21, 35);
            this.Bar_FanSpeed.Maximum = 8;
            this.Bar_FanSpeed.Name = "Bar_FanSpeed";
            this.Bar_FanSpeed.Size = new System.Drawing.Size(423, 45);
            this.Bar_FanSpeed.TabIndex = 0;
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.label48);
            this.groupBox3.Controls.Add(this.label47);
            this.groupBox3.Controls.Add(this.label46);
            this.groupBox3.Controls.Add(this.label45);
            this.groupBox3.Controls.Add(this.label44);
            this.groupBox3.Controls.Add(this.label43);
            this.groupBox3.Controls.Add(this.label42);
            this.groupBox3.Controls.Add(this.label41);
            this.groupBox3.Controls.Add(this.label40);
            this.groupBox3.Controls.Add(this.label39);
            this.groupBox3.Controls.Add(this.label38);
            this.groupBox3.Controls.Add(this.label30);
            this.groupBox3.Controls.Add(this.label29);
            this.groupBox3.Controls.Add(this.label28);
            this.groupBox3.Controls.Add(this.label27);
            this.groupBox3.Controls.Add(this.label26);
            this.groupBox3.Controls.Add(this.label25);
            this.groupBox3.Controls.Add(this.label24);
            this.groupBox3.Controls.Add(this.label23);
            this.groupBox3.Controls.Add(this.label22);
            this.groupBox3.Controls.Add(this.label21);
            this.groupBox3.Controls.Add(this.label20);
            this.groupBox3.Controls.Add(this.label19);
            this.groupBox3.Controls.Add(this.label18);
            this.groupBox3.Controls.Add(this.label17);
            this.groupBox3.Controls.Add(this.label16);
            this.groupBox3.Controls.Add(this.label15);
            this.groupBox3.Controls.Add(this.label14);
            this.groupBox3.Controls.Add(this.label11);
            this.groupBox3.Controls.Add(this.label7);
            this.groupBox3.Controls.Add(this.label6);
            this.groupBox3.Controls.Add(this.label5);
            this.groupBox3.Controls.Add(this.label2);
            this.groupBox3.Controls.Add(this.comboBox_Temp);
            this.groupBox3.Controls.Add(this.Bar_Temp);
            this.groupBox3.Location = new System.Drawing.Point(23, 184);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(706, 95);
            this.groupBox3.TabIndex = 26;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "HVAC Temp";
            // 
            // label48
            // 
            this.label48.AutoSize = true;
            this.label48.Location = new System.Drawing.Point(563, 63);
            this.label48.Name = "label48";
            this.label48.Size = new System.Drawing.Size(19, 13);
            this.label48.TabIndex = 27;
            this.label48.Text = "20";
            this.label48.Click += new System.EventHandler(this.label30_Click);
            // 
            // label47
            // 
            this.label47.AutoSize = true;
            this.label47.Location = new System.Drawing.Point(545, 63);
            this.label47.Name = "label47";
            this.label47.Size = new System.Drawing.Size(19, 13);
            this.label47.TabIndex = 27;
            this.label47.Text = "1F";
            this.label47.Click += new System.EventHandler(this.label30_Click);
            // 
            // label46
            // 
            this.label46.AutoSize = true;
            this.label46.Location = new System.Drawing.Point(529, 63);
            this.label46.Name = "label46";
            this.label46.Size = new System.Drawing.Size(20, 13);
            this.label46.TabIndex = 27;
            this.label46.Text = "1E";
            this.label46.Click += new System.EventHandler(this.label30_Click);
            // 
            // label45
            // 
            this.label45.AutoSize = true;
            this.label45.Location = new System.Drawing.Point(512, 63);
            this.label45.Name = "label45";
            this.label45.Size = new System.Drawing.Size(21, 13);
            this.label45.TabIndex = 27;
            this.label45.Text = "1D";
            this.label45.Click += new System.EventHandler(this.label30_Click);
            // 
            // label44
            // 
            this.label44.AutoSize = true;
            this.label44.Location = new System.Drawing.Point(495, 63);
            this.label44.Name = "label44";
            this.label44.Size = new System.Drawing.Size(20, 13);
            this.label44.TabIndex = 27;
            this.label44.Text = "1C";
            this.label44.Click += new System.EventHandler(this.label30_Click);
            // 
            // label43
            // 
            this.label43.AutoSize = true;
            this.label43.Location = new System.Drawing.Point(478, 63);
            this.label43.Name = "label43";
            this.label43.Size = new System.Drawing.Size(20, 13);
            this.label43.TabIndex = 27;
            this.label43.Text = "1B";
            this.label43.Click += new System.EventHandler(this.label30_Click);
            // 
            // label42
            // 
            this.label42.AutoSize = true;
            this.label42.Location = new System.Drawing.Point(460, 63);
            this.label42.Name = "label42";
            this.label42.Size = new System.Drawing.Size(20, 13);
            this.label42.TabIndex = 27;
            this.label42.Text = "1A";
            this.label42.Click += new System.EventHandler(this.label30_Click);
            // 
            // label41
            // 
            this.label41.AutoSize = true;
            this.label41.Location = new System.Drawing.Point(442, 63);
            this.label41.Name = "label41";
            this.label41.Size = new System.Drawing.Size(19, 13);
            this.label41.TabIndex = 27;
            this.label41.Text = "19";
            this.label41.Click += new System.EventHandler(this.label30_Click);
            // 
            // label40
            // 
            this.label40.AutoSize = true;
            this.label40.Location = new System.Drawing.Point(425, 63);
            this.label40.Name = "label40";
            this.label40.Size = new System.Drawing.Size(19, 13);
            this.label40.TabIndex = 27;
            this.label40.Text = "18";
            this.label40.Click += new System.EventHandler(this.label30_Click);
            // 
            // label39
            // 
            this.label39.AutoSize = true;
            this.label39.Location = new System.Drawing.Point(407, 63);
            this.label39.Name = "label39";
            this.label39.Size = new System.Drawing.Size(19, 13);
            this.label39.TabIndex = 27;
            this.label39.Text = "17";
            this.label39.Click += new System.EventHandler(this.label30_Click);
            // 
            // label38
            // 
            this.label38.AutoSize = true;
            this.label38.Location = new System.Drawing.Point(390, 63);
            this.label38.Name = "label38";
            this.label38.Size = new System.Drawing.Size(19, 13);
            this.label38.TabIndex = 27;
            this.label38.Text = "16";
            this.label38.Click += new System.EventHandler(this.label30_Click);
            // 
            // label30
            // 
            this.label30.AutoSize = true;
            this.label30.Location = new System.Drawing.Point(372, 63);
            this.label30.Name = "label30";
            this.label30.Size = new System.Drawing.Size(19, 13);
            this.label30.TabIndex = 27;
            this.label30.Text = "15";
            this.label30.Click += new System.EventHandler(this.label30_Click);
            // 
            // label29
            // 
            this.label29.AutoSize = true;
            this.label29.Location = new System.Drawing.Point(355, 63);
            this.label29.Name = "label29";
            this.label29.Size = new System.Drawing.Size(19, 13);
            this.label29.TabIndex = 27;
            this.label29.Text = "14";
            // 
            // label28
            // 
            this.label28.AutoSize = true;
            this.label28.Location = new System.Drawing.Point(337, 63);
            this.label28.Name = "label28";
            this.label28.Size = new System.Drawing.Size(19, 13);
            this.label28.TabIndex = 27;
            this.label28.Text = "13";
            // 
            // label27
            // 
            this.label27.AutoSize = true;
            this.label27.Location = new System.Drawing.Point(321, 63);
            this.label27.Name = "label27";
            this.label27.Size = new System.Drawing.Size(19, 13);
            this.label27.TabIndex = 27;
            this.label27.Text = "12";
            // 
            // label26
            // 
            this.label26.AutoSize = true;
            this.label26.Location = new System.Drawing.Point(305, 63);
            this.label26.Name = "label26";
            this.label26.Size = new System.Drawing.Size(19, 13);
            this.label26.TabIndex = 27;
            this.label26.Text = "11";
            // 
            // label25
            // 
            this.label25.AutoSize = true;
            this.label25.Location = new System.Drawing.Point(287, 63);
            this.label25.Name = "label25";
            this.label25.Size = new System.Drawing.Size(19, 13);
            this.label25.TabIndex = 27;
            this.label25.Text = "10";
            // 
            // label24
            // 
            this.label24.AutoSize = true;
            this.label24.Location = new System.Drawing.Point(270, 63);
            this.label24.Name = "label24";
            this.label24.Size = new System.Drawing.Size(19, 13);
            this.label24.TabIndex = 27;
            this.label24.Text = "0F";
            // 
            // label23
            // 
            this.label23.AutoSize = true;
            this.label23.Location = new System.Drawing.Point(252, 63);
            this.label23.Name = "label23";
            this.label23.Size = new System.Drawing.Size(20, 13);
            this.label23.TabIndex = 27;
            this.label23.Text = "0E";
            // 
            // label22
            // 
            this.label22.AutoSize = true;
            this.label22.Location = new System.Drawing.Point(235, 63);
            this.label22.Name = "label22";
            this.label22.Size = new System.Drawing.Size(21, 13);
            this.label22.TabIndex = 27;
            this.label22.Text = "0D";
            // 
            // label21
            // 
            this.label21.AutoSize = true;
            this.label21.Location = new System.Drawing.Point(217, 63);
            this.label21.Name = "label21";
            this.label21.Size = new System.Drawing.Size(20, 13);
            this.label21.TabIndex = 27;
            this.label21.Text = "0C";
            // 
            // label20
            // 
            this.label20.AutoSize = true;
            this.label20.Location = new System.Drawing.Point(200, 63);
            this.label20.Name = "label20";
            this.label20.Size = new System.Drawing.Size(20, 13);
            this.label20.TabIndex = 27;
            this.label20.Text = "0B";
            // 
            // label19
            // 
            this.label19.AutoSize = true;
            this.label19.Location = new System.Drawing.Point(183, 63);
            this.label19.Name = "label19";
            this.label19.Size = new System.Drawing.Size(20, 13);
            this.label19.TabIndex = 27;
            this.label19.Text = "0A";
            // 
            // label18
            // 
            this.label18.AutoSize = true;
            this.label18.Location = new System.Drawing.Point(165, 63);
            this.label18.Name = "label18";
            this.label18.Size = new System.Drawing.Size(19, 13);
            this.label18.TabIndex = 27;
            this.label18.Text = "09";
            // 
            // label17
            // 
            this.label17.AutoSize = true;
            this.label17.Location = new System.Drawing.Point(147, 63);
            this.label17.Name = "label17";
            this.label17.Size = new System.Drawing.Size(19, 13);
            this.label17.TabIndex = 27;
            this.label17.Text = "08";
            // 
            // label16
            // 
            this.label16.AutoSize = true;
            this.label16.Location = new System.Drawing.Point(130, 63);
            this.label16.Name = "label16";
            this.label16.Size = new System.Drawing.Size(19, 13);
            this.label16.TabIndex = 27;
            this.label16.Text = "07";
            // 
            // label15
            // 
            this.label15.AutoSize = true;
            this.label15.Location = new System.Drawing.Point(113, 63);
            this.label15.Name = "label15";
            this.label15.Size = new System.Drawing.Size(19, 13);
            this.label15.TabIndex = 27;
            this.label15.Text = "06";
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Location = new System.Drawing.Point(95, 63);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(19, 13);
            this.label14.TabIndex = 27;
            this.label14.Text = "05";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(78, 63);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(19, 13);
            this.label11.TabIndex = 27;
            this.label11.Text = "04";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(61, 63);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(19, 13);
            this.label7.TabIndex = 27;
            this.label7.Text = "03";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(45, 63);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(19, 13);
            this.label6.TabIndex = 27;
            this.label6.Text = "02";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(27, 63);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(19, 13);
            this.label5.TabIndex = 27;
            this.label5.Text = "01";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(11, 63);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(19, 13);
            this.label2.TabIndex = 27;
            this.label2.Text = "00";
            // 
            // comboBox_Temp
            // 
            this.comboBox_Temp.FormattingEnabled = true;
            this.comboBox_Temp.Items.AddRange(new object[] {
            "Front Left Temp",
            "Front Right Temp"});
            this.comboBox_Temp.Location = new System.Drawing.Point(592, 32);
            this.comboBox_Temp.Name = "comboBox_Temp";
            this.comboBox_Temp.Size = new System.Drawing.Size(108, 21);
            this.comboBox_Temp.TabIndex = 1;
            // 
            // Bar_Temp
            // 
            this.Bar_Temp.LargeChange = 1;
            this.Bar_Temp.Location = new System.Drawing.Point(6, 30);
            this.Bar_Temp.Maximum = 32;
            this.Bar_Temp.Name = "Bar_Temp";
            this.Bar_Temp.Size = new System.Drawing.Size(580, 45);
            this.Bar_Temp.TabIndex = 0;
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.checkBox_Front_AirInlet);
            this.groupBox4.Controls.Add(this.checkBox_Front_ACStatus);
            this.groupBox4.Controls.Add(this.checkBox_Front_RightSetTemp);
            this.groupBox4.Controls.Add(this.checkBox_Front_LeftSetTemp);
            this.groupBox4.Controls.Add(this.checkBox_Front_FanSpeed);
            this.groupBox4.Controls.Add(this.checkBox_Front_BlowerMode);
            this.groupBox4.Controls.Add(this.label4);
            this.groupBox4.Location = new System.Drawing.Point(747, 18);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(207, 261);
            this.groupBox4.TabIndex = 8;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "HVAC ODIIndications";
            // 
            // checkBox_Front_AirInlet
            // 
            this.checkBox_Front_AirInlet.AutoSize = true;
            this.checkBox_Front_AirInlet.Location = new System.Drawing.Point(32, 211);
            this.checkBox_Front_AirInlet.Name = "checkBox_Front_AirInlet";
            this.checkBox_Front_AirInlet.Size = new System.Drawing.Size(102, 17);
            this.checkBox_Front_AirInlet.TabIndex = 7;
            this.checkBox_Front_AirInlet.Text = "Front_AirInletOn";
            this.checkBox_Front_AirInlet.UseVisualStyleBackColor = true;
            // 
            // checkBox_Front_ACStatus
            // 
            this.checkBox_Front_ACStatus.AutoSize = true;
            this.checkBox_Front_ACStatus.Location = new System.Drawing.Point(32, 168);
            this.checkBox_Front_ACStatus.Name = "checkBox_Front_ACStatus";
            this.checkBox_Front_ACStatus.Size = new System.Drawing.Size(114, 17);
            this.checkBox_Front_ACStatus.TabIndex = 6;
            this.checkBox_Front_ACStatus.Text = "Front_ACStatusOn";
            this.checkBox_Front_ACStatus.UseVisualStyleBackColor = true;
            // 
            // checkBox_Front_RightSetTemp
            // 
            this.checkBox_Front_RightSetTemp.AutoSize = true;
            this.checkBox_Front_RightSetTemp.Location = new System.Drawing.Point(32, 129);
            this.checkBox_Front_RightSetTemp.Name = "checkBox_Front_RightSetTemp";
            this.checkBox_Front_RightSetTemp.Size = new System.Drawing.Size(138, 17);
            this.checkBox_Front_RightSetTemp.TabIndex = 5;
            this.checkBox_Front_RightSetTemp.Text = "Front_RightSetTempOn";
            this.checkBox_Front_RightSetTemp.UseVisualStyleBackColor = true;
            // 
            // checkBox_Front_LeftSetTemp
            // 
            this.checkBox_Front_LeftSetTemp.AutoSize = true;
            this.checkBox_Front_LeftSetTemp.Location = new System.Drawing.Point(32, 94);
            this.checkBox_Front_LeftSetTemp.Name = "checkBox_Front_LeftSetTemp";
            this.checkBox_Front_LeftSetTemp.Size = new System.Drawing.Size(134, 17);
            this.checkBox_Front_LeftSetTemp.TabIndex = 4;
            this.checkBox_Front_LeftSetTemp.Text = " Front_LeftSetTempOn";
            this.checkBox_Front_LeftSetTemp.UseVisualStyleBackColor = true;
            // 
            // checkBox_Front_FanSpeed
            // 
            this.checkBox_Front_FanSpeed.AutoSize = true;
            this.checkBox_Front_FanSpeed.Location = new System.Drawing.Point(32, 59);
            this.checkBox_Front_FanSpeed.Name = "checkBox_Front_FanSpeed";
            this.checkBox_Front_FanSpeed.Size = new System.Drawing.Size(119, 17);
            this.checkBox_Front_FanSpeed.TabIndex = 3;
            this.checkBox_Front_FanSpeed.Text = "Front_FanSpeedOn";
            this.checkBox_Front_FanSpeed.UseVisualStyleBackColor = true;
            // 
            // checkBox_Front_BlowerMode
            // 
            this.checkBox_Front_BlowerMode.AutoSize = true;
            this.checkBox_Front_BlowerMode.Location = new System.Drawing.Point(32, 25);
            this.checkBox_Front_BlowerMode.Name = "checkBox_Front_BlowerMode";
            this.checkBox_Front_BlowerMode.Size = new System.Drawing.Size(135, 17);
            this.checkBox_Front_BlowerMode.TabIndex = 2;
            this.checkBox_Front_BlowerMode.Text = " Front_BlowerMode On";
            this.checkBox_Front_BlowerMode.UseVisualStyleBackColor = true;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(32, 33);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(0, 13);
            this.label4.TabIndex = 1;
            // 
            // Hvac
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.comboBox_AirCondition);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.comboBox_Zone);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.comboBox_AirInlet);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.comboBox_FrontBlower);
            this.Name = "Hvac";
            this.Size = new System.Drawing.Size(971, 302);
            this.Load += new System.EventHandler(this.Hvac_Load);
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.Bar_FanSpeed)).EndInit();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.Bar_Temp)).EndInit();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.GroupBox groupBox3;
        public System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.Label label4;
        public System.Windows.Forms.ComboBox comboBox_FrontBlower;
        public System.Windows.Forms.ComboBox comboBox_Zone;
        public System.Windows.Forms.TrackBar Bar_FanSpeed;
        private System.Windows.Forms.Label label33;
        private System.Windows.Forms.Label label37;
        private System.Windows.Forms.Label label36;
        private System.Windows.Forms.Label label35;
        private System.Windows.Forms.Label label34;
        private System.Windows.Forms.Label label32;
        public System.Windows.Forms.Label label31;
        public System.Windows.Forms.ComboBox comboBox_AirCondition;
        public System.Windows.Forms.ComboBox comboBox_AirInlet;
        public System.Windows.Forms.TrackBar Bar_Temp;
        public System.Windows.Forms.ComboBox comboBox_Temp;
        private System.Windows.Forms.Label label30;
        private System.Windows.Forms.Label label29;
        private System.Windows.Forms.Label label28;
        private System.Windows.Forms.Label label27;
        private System.Windows.Forms.Label label26;
        private System.Windows.Forms.Label label25;
        private System.Windows.Forms.Label label24;
        private System.Windows.Forms.Label label23;
        private System.Windows.Forms.Label label22;
        private System.Windows.Forms.Label label21;
        private System.Windows.Forms.Label label20;
        private System.Windows.Forms.Label label19;
        private System.Windows.Forms.Label label18;
        private System.Windows.Forms.Label label17;
        private System.Windows.Forms.Label label16;
        private System.Windows.Forms.Label label15;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label48;
        private System.Windows.Forms.Label label47;
        private System.Windows.Forms.Label label46;
        private System.Windows.Forms.Label label45;
        private System.Windows.Forms.Label label44;
        private System.Windows.Forms.Label label43;
        private System.Windows.Forms.Label label42;
        private System.Windows.Forms.Label label41;
        private System.Windows.Forms.Label label40;
        private System.Windows.Forms.Label label39;
        private System.Windows.Forms.Label label38;
        private System.Windows.Forms.Label label50;
        private System.Windows.Forms.Label label49;
        public System.Windows.Forms.CheckBox checkBox_Front_AirInlet;
        public System.Windows.Forms.CheckBox checkBox_Front_ACStatus;
        public System.Windows.Forms.CheckBox checkBox_Front_RightSetTemp;
        public System.Windows.Forms.CheckBox checkBox_Front_LeftSetTemp;
        public System.Windows.Forms.CheckBox checkBox_Front_FanSpeed;
        public System.Windows.Forms.CheckBox checkBox_Front_BlowerMode;
    }
}
