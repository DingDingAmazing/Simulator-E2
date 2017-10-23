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
    public partial class MemoryCheck : UserControl
    {
        string[] Item = { "K0R", "MTD0", "MTD1", "MTD3", "MTD4", "MTD5", "MTD6", "MTD9", "P0", "P1", "P2", "P3", "P4", "P5" };
        //97
        string[,] PITS = {
                            {"0C0001","Manufacturing_Data"},
                            {"050004","Bluetooth device address"},
                            {"050005","Bluetooth crystal alignment value"},
                            {"050006","WiFi Client MAC address"},
                            {"050008","WiFi crystal alignment value"},
                            {"05000A","IR Touch Calibration"},
                            {"080001","DTC ECU_HW_PERF_GENERAL"},
                            {"080002","DTC ECU_HW_PERF_INTERNAL_COMM_Reserved"},
                            {"080003","DTC ECU_SW_PERF_SW_Reserved"},
                            {"080004","DTC AUDIO_OUTPUT_LF_BAT_SHORT"},
                            {"080005","DTC AUDIO_OUTPUT_LF_GND_SHORT"},
                            {"080006","DTC AUDIO_OUTPUT_LF_OPEN"},
                            {"080007","DTC AUDIO_OUTPUT_RF_BAT_SHORT"},
                            {"080008","DTC AUDIO_OUTPUT_RF_GND_SHORT"},
                            {"080009","DTC AUDIO_OUTPUT_RF_OPEN"},
                            {"08000A","DTC AUDIO_OUTPUT_LR_BAT_SHORT"},
                            {"08000B","DTC AUDIO_OUTPUT_LR_GND_SHORT"},
                            {"08000C","DTC AUDIO_OUTPUT_LR_OPEN"},
                            {"08000D","DTC AUDIO_OUTPUT_RR_BAT_SHORT"},
                            {"08000E","DTC AUDIO_OUTPUT_RR_GND_SHORT"},
                            {"08000F","DTC AUDIO_OUTPUT_RR_OPEN"},
                            {"080012","DTC ANTENNA1_GND_SHORT"},
                            {"080013","DTC ANTENNA1_OPEN"},
                            {"080014","DTC ANTENNA1_CURRENT_ABOVE"},
                            {"080016","DTC GPS_ANT_GND_SHORT_B"},
                            {"080017","DTC GPS_ANT_OPEN"},
                            {"080047","DTC AMP_Control_BAT_SHORT"},
                            {"080048","DTC AMP_Control_GND_SHORT"},
                            {"08001F","DTC THEFTLOCKED"},
                            {"080033","DTC PWR_VOLT_BELOW_THRES"},
                            {"080034","DTC PWR_VOLT_ABOVE_THRES_B"},
                            {"080035","DTC LOW_SPD_CAN_BUS_PERFORMANCE"},
                            {"080038","DTC CONTROL_MODULE_COMM_BUS_OFF"},
                            {"080039","DTC LOSS_OF_COMM_BCM"},
                            {"08003A","DTC LOSS_OF_COMM_IPC"},
                            {"08003B","DTC LOSS_OF_COMM_UPA"},
                            {"08003C","DTC LOSS_OF_COMM_HVAC"},
                            {"08003E","DTC LOSS_OF_COMM_ONS_UHP"},
                            {"080042","DTC LOSS_OF_COMM_ICS"},
                            {"080043","DTC LOSS_OF_COMM_CAMERA"},
                            {"080044","DTC LIN_COMM_FAILURE_Reserved"},
                            {"080045","DTC LIN_COMM_WITH_INFOTMT_LIN_MSTR_Reserved"},
                            {"080046","DTC LIN_COMM_WITH_CENTER_FACEPLATE_Reserved"},
                            {"030001","Tone Control Setting_EQ"},
                            {"030002","Audio Cue volume level_Reserved"},
                            {"030003","Balance setting"},
                            {"030004","Bass setting"},
                            {"030005","Chime volume level"},
                            {"030006","Emergency phone volume level"},
                            {"030007","Fade setting"},
                            {"030008","Main volume level"},
                            {"030009","Maximum startup volume"},
                            {"03000A","Midrange setting"},
                            {"03000B","Mute status"},
                            {"03000C","Phone volume level"},
                            {"03000D","Prompt volume level"},
                            {"030018","Ringtone volume level"},
                            {"030019","Speed compensated volume level"},
                            {"03001B","Treble setting"},
                            {"03001F","Last source (part 1)"},
                            {"030020","Last source (part 2)_Reserved"},
                            {"040001","Number of favorites pages available_Reserved"},
                            {"040002","Active favorites page number_Reserved"},
                            {"040003","Number of favorites pages shown_Reserved"},
                            {"050007","Language selection value_DID $70"},
                            {"050001","Logistics mode status flag"},
                            {"050002","Valet mode status flag"},
                            {"090001","VIN digits byte 1"},
                            {"090002","VIN digits byte 2"},
                            {"090003","VIN digits byte 3"},
                            {"090004","VIN digits byte 4"},
                            {"090005","VIN digits byte 5"},
                            {"090006","VIN digits byte 6"},
                            {"090007","VIN digits byte 7"},
                            {"090008","VIN digits byte 8"},
                            {"090009","VIN digits byte 9"},
                            {"09000A","VIN digits byte 10"},
                            {"09000B","VIN digits byte 11"},
                            {"09000C","VIN digits byte 12"},
                            {"09000D","VIN digits byte 13"},
                            {"09000E","VIN digits byte 14"},
                            {"09000F","VIN digits byte 15"},
                            {"090010","VIN digits byte 16"},
                            {"090011","VIN digits byte 17"},
                            {"050009","DID $A0 - MEC"},
                            {"060001","DID $CC - Base model part number"},
                            {"060002","DID $DC - Base model DLS"},
                            {"060003","DID $CB - End model part number"},
                            {"060004","DID $DB - End model DLS"},
                            {"060005","DID $5- DTC IgnitionCyclesToClear Counter"},
                            {"060006","DID $99 - HW Production date (Year/Month/Day)"},
                            {"060007","DID $B4 - MTC Comp ID"},
                            {"060008","DID $B4 - MTC Part number / Broadcast code"},
                            {"060009","DID $B4 - MTC Supplier code"},
                            {"06000C","DID $B4 - MTC Year (Julian Day)"},
                            {"06000D","DID $B4 - MTC ECU serial number"},
                            {"06000E","Delphi PN"},
                         };
        string[] Value = new string[14];
        string Value_Buff = "";
        public MemoryCheck()
        {
            InitializeComponent();
        }

        public string Function_Get_SWID(int item)
        {
            return PITS[item, 0];
        }

        private void Btn_Read_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < 14; i++)
            {
                Value[i] = "";
            }
            while (this.Box_MemoryList.Rows.Count != 0)
            {
                this.Box_MemoryList.Rows.RemoveAt(0);
            }
        }

        public void Function_MC_AddInfo(string value, int item)
        {
            String[] Rows = new String[2];
            Rows[0] = Item[item];
            Rows[1] = value;
            Value_Buff = "";
            Box_MemoryList.Rows.Add(Rows);

        }

        public void Function_MC_AddInfo(int item)
        {
            String[] Rows = new String[2];
            Rows[0] = Item[item];
            Rows[1] = Value_Buff;
            Value_Buff = "";
            Box_MemoryList.Rows.Add(Rows);
        }

        public void Function_MC_ValueBuild(string value)
        {
            Value_Buff += value;
        }

        private void Box_MemoryList_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            
        }

        public void Function_PITS_AddInfo(string value, int length,int item)
        {
            String[] Rows = new String[4];
            Rows[0] = PITS[item, 1];
            Rows[1] = PITS[item, 0];
            Rows[2] = length.ToString();
            Rows[3] = value;
            Value_Buff = "";
            Box_PITsList.Rows.Add(Rows);
        }

        private void Btn_Get_Click(object sender, EventArgs e)
        {
            while (this.Box_PITsList.Rows.Count != 0)
            {
                this.Box_PITsList.Rows.RemoveAt(0);
            }
        }
    }
}
