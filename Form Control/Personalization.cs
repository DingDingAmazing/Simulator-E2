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
    public partial class Personalization : UserControl
    {
        public Personalization()
        {
            InitializeComponent();
        }

        private void Initialize()
        {
            Box_RemoteStartHeatedSeatSetting.Items.Add("Off");
            Box_RemoteStartHeatedSeatSetting.Items.Add("On");
            Box_RemoteStartHeatedSeatSetting.SelectedIndex = 0;

            Box_SetRemoteStartCooledSeatSetting.Items.Add("Off");
            Box_SetRemoteStartCooledSeatSetting.Items.Add("On");
            Box_SetRemoteStartCooledSeatSetting.SelectedIndex = 0;




        }
    }
}
