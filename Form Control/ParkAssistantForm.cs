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
    public partial class ParkAssistantForm : UserControl
    {
        public ParkAssistantForm()
        {
            InitializeComponent();
            Initialize();
        }

        private void Initialize()
        {
            Box_PrkAstRrSysStat.Items.Add("Disabled");
            Box_PrkAstRrSysStat.Items.Add("Enabled");
            Box_PrkAstRrSysStat.Items.Add("Inhibited");
            Box_PrkAstRrSysStat.Items.Add("Failed");
            Box_PrkAstRrSysStat.SelectedIndex = 0;

            Box_PARrRgn1ObjStat.Items.Add("No Object");
            Box_PARrRgn1ObjStat.Items.Add("Zone 1");
            Box_PARrRgn1ObjStat.Items.Add("Zone 2");
            Box_PARrRgn1ObjStat.Items.Add("Zone 3");
            Box_PARrRgn1ObjStat.Items.Add("Zone 4");
            Box_PARrRgn1ObjStat.Items.Add("Zone 5");
            Box_PARrRgn1ObjStat.Items.Add("Zone 6");
            Box_PARrRgn1ObjStat.Items.Add("Zone 7");
            Box_PARrRgn1ObjStat.Items.Add("Zone 8");
            Box_PARrRgn1ObjStat.Items.Add("Zone 9");
            Box_PARrRgn1ObjStat.Items.Add("Zone 10");
            Box_PARrRgn1ObjStat.Items.Add("Zone 11");
            Box_PARrRgn1ObjStat.Items.Add("Zone 12");
            Box_PARrRgn1ObjStat.Items.Add("Zone 13");
            Box_PARrRgn1ObjStat.Items.Add("Zone 14");
            Box_PARrRgn1ObjStat.Items.Add("Zone 15");
            Box_PARrRgn1ObjStat.SelectedIndex = 0;

            Box_PARrRgn2ObjStat.Items.Add("No Object");
            Box_PARrRgn2ObjStat.Items.Add("Zone 1");
            Box_PARrRgn2ObjStat.Items.Add("Zone 2");
            Box_PARrRgn2ObjStat.Items.Add("Zone 3");
            Box_PARrRgn2ObjStat.Items.Add("Zone 4");
            Box_PARrRgn2ObjStat.Items.Add("Zone 5");
            Box_PARrRgn2ObjStat.Items.Add("Zone 6");
            Box_PARrRgn2ObjStat.Items.Add("Zone 7");
            Box_PARrRgn2ObjStat.Items.Add("Zone 8");
            Box_PARrRgn2ObjStat.Items.Add("Zone 9");
            Box_PARrRgn2ObjStat.Items.Add("Zone 10");
            Box_PARrRgn2ObjStat.Items.Add("Zone 11");
            Box_PARrRgn2ObjStat.Items.Add("Zone 12");
            Box_PARrRgn2ObjStat.Items.Add("Zone 13");
            Box_PARrRgn2ObjStat.Items.Add("Zone 14");
            Box_PARrRgn2ObjStat.Items.Add("Zone 15");
            Box_PARrRgn2ObjStat.SelectedIndex = 0;

            Box_PARrRgn3ObjStat.Items.Add("No Object");
            Box_PARrRgn3ObjStat.Items.Add("Zone 1");
            Box_PARrRgn3ObjStat.Items.Add("Zone 2");
            Box_PARrRgn3ObjStat.Items.Add("Zone 3");
            Box_PARrRgn3ObjStat.Items.Add("Zone 4");
            Box_PARrRgn3ObjStat.Items.Add("Zone 5");
            Box_PARrRgn3ObjStat.Items.Add("Zone 6");
            Box_PARrRgn3ObjStat.Items.Add("Zone 7");
            Box_PARrRgn3ObjStat.Items.Add("Zone 8");
            Box_PARrRgn3ObjStat.Items.Add("Zone 9");
            Box_PARrRgn3ObjStat.Items.Add("Zone 10");
            Box_PARrRgn3ObjStat.Items.Add("Zone 11");
            Box_PARrRgn3ObjStat.Items.Add("Zone 12");
            Box_PARrRgn3ObjStat.Items.Add("Zone 13");
            Box_PARrRgn3ObjStat.Items.Add("Zone 14");
            Box_PARrRgn3ObjStat.Items.Add("Zone 15");
            Box_PARrRgn3ObjStat.SelectedIndex = 0;

            Box_PARrRgn4ObjStat.Items.Add("No Object");
            Box_PARrRgn4ObjStat.Items.Add("Zone 1");
            Box_PARrRgn4ObjStat.Items.Add("Zone 2");
            Box_PARrRgn4ObjStat.Items.Add("Zone 3");
            Box_PARrRgn4ObjStat.Items.Add("Zone 4");
            Box_PARrRgn4ObjStat.Items.Add("Zone 5");
            Box_PARrRgn4ObjStat.Items.Add("Zone 6");
            Box_PARrRgn4ObjStat.Items.Add("Zone 7");
            Box_PARrRgn4ObjStat.Items.Add("Zone 8");
            Box_PARrRgn4ObjStat.Items.Add("Zone 9");
            Box_PARrRgn4ObjStat.Items.Add("Zone 10");
            Box_PARrRgn4ObjStat.Items.Add("Zone 11");
            Box_PARrRgn4ObjStat.Items.Add("Zone 12");
            Box_PARrRgn4ObjStat.Items.Add("Zone 13");
            Box_PARrRgn4ObjStat.Items.Add("Zone 14");
            Box_PARrRgn4ObjStat.Items.Add("Zone 15");
            Box_PARrRgn4ObjStat.SelectedIndex = 0;
        }

        private void Box_PrkAsstRrExtdDist_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_PrkAsstRrExtdDist.Value = Box_PrkAsstRrExtdDist_FAKE.Value * 100;
        }
    }
}
