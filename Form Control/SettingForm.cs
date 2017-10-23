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
    public partial class SettingForm : UserControl
    {
        public SettingForm()
        {
            InitializeComponent();
            Initialize();
        }

        private void Initialize()
        {
            Box_DispMeasSysExt.Items.Add("Metric");
            Box_DispMeasSysExt.Items.Add("US");
            Box_DispMeasSysExt.Items.Add("Imperial");
            Box_DispMeasSysExt.SelectedIndex = 0;

            Box_DDAjrSwAtvM.Items.Add("Don't Use Data");
            Box_DDAjrSwAtvM.Items.Add("Use Data");
            Box_DDAjrSwAtvM.SelectedIndex = 0;

            Box_StrgWhlUnit1SwStat.Items.Add("No Activation");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #1");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #2");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #3");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #4");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #5");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #6");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #7");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #8");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #9");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #A");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #B");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #C");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #D");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #E");
            Box_StrgWhlUnit1SwStat.Items.Add("Function #F");
            Box_StrgWhlUnit1SwStat.SelectedIndex = 0;

            Box_StrgWhlUnit2SwStat.Items.Add("No Activation");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #1");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #2");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #3");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #4");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #5");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #6");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #7");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #8");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #9");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #A");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #B");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #C");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #D");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #E");
            Box_StrgWhlUnit2SwStat.Items.Add("Function #F");
            Box_StrgWhlUnit2SwStat.SelectedIndex = 0;
        }

        #region VIN Code

        private void Box_Vin_Digits_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (char.IsDigit(e.KeyChar))
            {
                e.Handled = false;
            }
            else if (e.KeyChar >= 'a' && e.KeyChar <= 'f')
            {
                e.Handled = false;
            }
            else
            {
                e.Handled = true;
            }
        }

        private void Box_Vin_Digits_2_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_2.Text.Length >= 2)
            {
                Box_Vin_Digits_3.Focus();
            }
        }

        private void Box_Vin_Digits_3_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_3.Text.Length >= 2)
            {
                Box_Vin_Digits_4.Focus();
            }
        }

        private void Box_Vin_Digits_4_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_4.Text.Length >= 2)
            {
                Box_Vin_Digits_5.Focus();
            }
        }

        private void Box_Vin_Digits_5_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_5.Text.Length >= 2)
            {
                Box_Vin_Digits_6.Focus();
            }
        }

        private void Box_Vin_Digits_6_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_6.Text.Length >= 2)
            {
                Box_Vin_Digits_7.Focus();
            }
        }

        private void Box_Vin_Digits_7_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_7.Text.Length >= 2)
            {
                Box_Vin_Digits_8.Focus();
            }
        }

        private void Box_Vin_Digits_8_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_8.Text.Length >= 2)
            {
                Box_Vin_Digits_9.Focus();
            }
        }

        private void Box_Vin_Digits_9_TextChanged(object sender, EventArgs e)
        {
            if (Box_Vin_Digits_9.Text.Length >= 2)
            {
                Box_Vin_Digits_2.Focus();
            }
        }

        private void Box_Vin_Digits_2_MouseClick(object sender, MouseEventArgs e)
        {
            Box_Vin_Digits_2.Focus();
            Box_Vin_Digits_2.SelectAll();
        }

        private void Box_Vin_Digits_2_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_2.SelectAll();
        }

        private void Box_Vin_Digits_3_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_3.SelectAll();
        }

        private void Box_Vin_Digits_3_Click(object sender, EventArgs e)
        {
            Box_Vin_Digits_3.Focus();
            Box_Vin_Digits_3.SelectAll();
        }

        private void Box_Vin_Digits_4_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_4.SelectAll();
        }

        private void Box_Vin_Digits_4_Click(object sender, EventArgs e)
        {
            Box_Vin_Digits_4.Focus();
            Box_Vin_Digits_4.SelectAll();
        }

        private void Box_Vin_Digits_5_Click(object sender, EventArgs e)
        {
            Box_Vin_Digits_5.Focus();
            Box_Vin_Digits_5.SelectAll();
        }

        private void Box_Vin_Digits_5_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_5.SelectAll();
        }

        private void Box_Vin_Digits_6_Click(object sender, EventArgs e)
        {
            Box_Vin_Digits_6.Focus();
            Box_Vin_Digits_6.SelectAll();
        }

        private void Box_Vin_Digits_6_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_6.SelectAll();
        }

        private void Box_Vin_Digits_7_Click(object sender, EventArgs e)
        {
            Box_Vin_Digits_7.Focus();
            Box_Vin_Digits_7.SelectAll();
        }

        private void Box_Vin_Digits_7_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_7.SelectAll();
        }

        private void Box_Vin_Digits_8_Click(object sender, EventArgs e)
        {
            Box_Vin_Digits_8.Focus();
            Box_Vin_Digits_8.SelectAll();
        }

        private void Box_Vin_Digits_8_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_8.SelectAll();
        }

        private void Box_Vin_Digits_9_Click(object sender, EventArgs e)
        {
            Box_Vin_Digits_9.Focus();
            Box_Vin_Digits_9.SelectAll();
        }

        private void Box_Vin_Digits_9_Enter(object sender, EventArgs e)
        {
            Box_Vin_Digits_9.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_10_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_10.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_11.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_11_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_11.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_12.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_12_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_12.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_13.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_13_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_13.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_14.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_14_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_14.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_15.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_15_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_15.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_16.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_16_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_16.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_17.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_17_TextChanged(object sender, EventArgs e)
        {
            if (Box_PPEI_VIN_Digits_17.Text.Length >= 2)
            {
                Box_PPEI_VIN_Digits_10.Focus();
            }
        }

        private void Box_PPEI_VIN_Digits_10_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_10.Focus();
            Box_PPEI_VIN_Digits_10.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_10_Enter(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_10.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_11_Enter(object sender, EventArgs e)
        {

            Box_PPEI_VIN_Digits_11.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_11_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_11.Focus();
            Box_PPEI_VIN_Digits_11.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_12_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_12.Focus();
            Box_PPEI_VIN_Digits_12.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_12_Enter(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_12.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_13_Enter(object sender, EventArgs e)
        {

            Box_PPEI_VIN_Digits_13.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_13_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_13.Focus();
            Box_PPEI_VIN_Digits_13.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_14_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_14.Focus();
            Box_PPEI_VIN_Digits_14.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_14_Enter(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_14.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_15_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_15.Focus();
            Box_PPEI_VIN_Digits_15.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_15_Enter(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_15.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_16_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_16.Focus();
            Box_PPEI_VIN_Digits_16.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_16_Enter(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_16.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_17_Click(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_17.Focus();
            Box_PPEI_VIN_Digits_17.SelectAll();
        }

        private void Box_PPEI_VIN_Digits_17_Enter(object sender, EventArgs e)
        {
            Box_PPEI_VIN_Digits_17.SelectAll();
        }

        #endregion
    }
}
