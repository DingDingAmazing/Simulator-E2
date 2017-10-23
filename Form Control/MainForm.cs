using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Form_Control
{
    public partial class MainForm : UserControl
    {
        public MainForm()
        {
            InitializeComponent();
            Initialize();
        }

        private void Initialize()
        {
            if (Bar_VehSpdAvgDrvn.Value == 0)
            {
                Lab_VehSpdAvgDrvn.Text = "Driven Speed";
                Bar_VehSpdAvgNDrvn.Enabled = true;
                Box_VehSpdAvgNDrvnV.Enabled = true;
            }
            else
            {
                Bar_VehSpdAvgNDrvn.Value = 0;
                Bar_VehSpdAvgNDrvn.Enabled = false;

                Box_VehSpdAvgNDrvnV.Checked = false;
                Box_VehSpdAvgNDrvnV.Enabled = false;
            }

            if (Bar_VehSpdAvgNDrvn.Value == 0)
            {
                Lab_VehSpdAvgNDrvn.Text = "No-Driven Speed";
                Bar_VehSpdAvgDrvn.Enabled = true;
                Box_VehSpdAvgDrvnV.Enabled = true;
            }
            else
            {
                Bar_VehSpdAvgDrvn.Value = 0;
                Bar_VehSpdAvgDrvn.Enabled = false;

                Box_VehSpdAvgDrvnV.Checked = false;
                Box_VehSpdAvgDrvnV.Enabled = false;
            }
        }

        private void Bar_VehSpdAvgDrvn_Scroll(object sender, EventArgs e)
        {
            if (Bar_VehSpdAvgDrvn.Value > 0)
            {
                Lab_VehSpdAvgDrvn.Text = "Driven Speed   " + (Convert.ToInt32((Bar_VehSpdAvgDrvn.Value / 64))).ToString() + "Km/s";

                Bar_VehSpdAvgNDrvn.Value = 0;
                Bar_VehSpdAvgNDrvn.Enabled = false;

                Box_VehSpdAvgNDrvnV.Checked = false;
                Box_VehSpdAvgNDrvnV.Enabled = false;
            }
            else
            {
                Lab_VehSpdAvgDrvn.Text = "Driven Speed";
                Bar_VehSpdAvgNDrvn.Enabled = true;
                Box_VehSpdAvgNDrvnV.Enabled = true;
            }
        }

        private void Bar_VehSpdAvgNDrvn_Scroll(object sender, EventArgs e)
        {
            if (Bar_VehSpdAvgNDrvn.Value > 0)
            {
                Lab_VehSpdAvgNDrvn.Text = "No-Driven Speed   " + (Convert.ToInt32((Bar_VehSpdAvgNDrvn.Value / 64))).ToString() + "Km/s";

                Bar_VehSpdAvgDrvn.Value = 0;
                Bar_VehSpdAvgDrvn.Enabled = false;

                Box_VehSpdAvgDrvnV.Checked = false;
                Box_VehSpdAvgDrvnV.Enabled = false;
            }
            else
            {
                Lab_VehSpdAvgNDrvn.Text = "No-Driven Speed";
                Bar_VehSpdAvgDrvn.Enabled = true;
                Box_VehSpdAvgDrvnV.Enabled = true;

            }
        }
    }
}
