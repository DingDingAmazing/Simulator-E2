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
    public partial class VehicleInfoForm : UserControl
    {
        public VehicleInfoForm()
        {
            InitializeComponent();
            Initialize();
        }

        private void Initialize()
        {
            Box_OtsdAmbtLtLvlStat.Items.Add("Unknown");
            Box_OtsdAmbtLtLvlStat.Items.Add("Night");
            Box_OtsdAmbtLtLvlStat.Items.Add("Day");
            Box_OtsdAmbtLtLvlStat.SelectedIndex = 0;

            Box_OtsdAmbtLtLvlStatV.Items.Add("Valid");
            Box_OtsdAmbtLtLvlStatV.Items.Add("Invalid");
            Box_OtsdAmbtLtLvlStatV.SelectedIndex = 0;

            Box_OtsAirTmpCrValMsk.Items.Add("Don't Use Data");
            Box_OtsAirTmpCrValMsk.Items.Add("Use Data");
            Box_OtsAirTmpCrValMsk.SelectedIndex = 0;
        }

        private void Box_BatVlt_FATE_ValueChanged(object sender, EventArgs e)
        {
            Box_BatVlt.Value = Box_BatVlt_FATE.Value * 10;
        }

        private void Box_IntDimDspLvlPlt_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_IntDimDspLvlPlt.Value = Box_IntDimDspLvlPlt_FAKE.Value * 255 / 100;
        }

        private void Box_IntDimLvl_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_IntDimLvl.Value = Box_IntDimLvl_FAKE.Value * 255 / 100;
        }

        private void Box_FlLvlPct_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_FlLvlPct.Value = Box_FlLvlPct_FAKE.Value * 255 / 100;
        }
    }
}
