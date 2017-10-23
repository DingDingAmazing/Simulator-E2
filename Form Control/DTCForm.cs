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
    public partial class DTCForm : UserControl
    {
        #region Code and Type
        String[,] Code_Type = /*new String[35]*/{ {"0x901D","0x00"},
                                             {"0x901D","0x31"},
                                             {"0x901D","0x39"},
                                             {"0x9025","0x01"},
                                             {"0x9025","0x02"},
                                             {"0x9025","0x04"},
                                             {"0x9035","0x01"},
                                             {"0x9035","0x02"},
                                             {"0x9035","0x04"},
                                             {"0x9045","0x01"},
                                             {"0x9045","0x02"},
                                             {"0x9045","0x04"},
                                             {"0x9055","0x01"},
                                             {"0x9055","0x02"},
                                             {"0x9055","0x04"},
                                             {"0x925A","0x02"},
                                             {"0x925A","0x04"},
                                             {"0x925A","0x0B"},
                                             {"0x925C","0x04"},
                                             {"0x9271","0x00"},
                                             {"0x9287","0x01"},
                                             {"0x9287","0x02"},
                                             {"0x9287","0x04"},
                                             {"0x9325","0x03"},
                                             {"0x9325","0x07"},
                                             {"0xA462","0x01"},
                                             {"0xA462","0x02"},
                                             {"0xA462","0x04"},
                                             {"0xC073","0x00"},
                                             {"0xC074","0x00"},
                                             {"0xC020","0x00"},
                                             {"0xC140","0x00"},
                                             {"0xC155","0x00"},
                                             {"0xC164","0x00"},
                                             {"0xC256","0x00"},
                                          };
        #endregion

        #region DTC and Error Text
        string[,] DTC_ErrorTxt = {
                                    {"B101D","ECU Hardware Performance - no additional information"},
                                    {"B101D","Electronic Control Unit (ECU) Hardware Performance Flash Failure"},
                                    {"B101D","ECU Hardware Performance, Internal Electronic Failure"},
                                    {"B1025","Audio Output 1 Circuit Short to Battery"},
                                    {"B1025","Audio Output 1 Circuit Short to Ground"},
                                    {"B1025","Audio Output #1 (LF) Open Circuit"},
                                    {"B1035","Audio Output 2 Circuit Short to Battery"},
                                    {"B1035","Audio Output 2 Circuit Short to Ground"},
                                    {"B1035","Audio Output #2 (RF) Open Circuit"},
                                    {"B1045","Audio Output 3 Circuit Short to Battery"},
                                    {"B1045","Audio Output 3 Circuit Short to Ground"},
                                    {"B1045","Audio Output #3 (LR) Open Circuit"},
                                    {"B1055","Audio Output 4 Circuit Short to Battery"},
                                    {"B1055","Audio Output 4 Circuit Short to Ground"},
                                    {"B1055","Audio Output #4 (RR) Open Circuit"},
                                    {"B125A","Antenna 1 Circuit, Shorted to ground"},
                                    {"B125A","Antenna 1 Circuit Open"},
                                    {"B125A","Antenna 1 Circuit Current above threshold"},
                                    {"B125C","Satellite Antenna 1 Circuit Open"},
                                    {"B1271","Theft Locked"},
                                    {"B1287","Amplifier Control Signal Circuit Short to Battery"},
                                    {"B1287","Amplifier Control Signal Circuit Short to Ground"},
                                    {"B1287","Amplifier Control Signal Circuit Open"},
                                    {"B1325","Device Power, under voltage"},
                                    {"B1325","Device Power, Voltage above threshold"},
                                    {"B2462","Global Positioning System (GPS) Signal Short to Battery"},
                                    {"B2462","Global Positioning System (GPS) Signal Short to Ground"},
                                    {"B2462","Global Positioning System (GPS) Signal Open"},
                                    {"U0073","Control Module Communication Bus A Off"},
                                    {"U0074","Control Module Communication Bus B Off"},
                                    {"U0020","High Speed CAN Comm. Bus Performance"},
                                    {"U0140","Lost Communication with Body Control Module"},
                                    {"U0155","Lost Communication with Instrument Panel Cluster (IPC) Control Module"},
                                    {"U0164","Lost Communication with ECC"},
                                    {"U0256","Lost Communication with Info Faceplate"},
                                };
        #endregion

        int[,] Hex_Value = new int[35, 2];

        public DTCForm()
        {
            InitializeComponent();
        }

        public void Function_Add_DTC_Infor_Function(string Code, string Type, int Hex, int Status)
        {
            int Location = 99;
            for (int i = 0; i < 35; i++)
            {
                if (Code == Code_Type[i, 0] && Type == Code_Type[i, 1])
                {
                    Location = i;
                    break;
                }
            }
            if (Location != 99)
            {
                this.Hex_Value[Location, 0] = Hex;
                if (GetBit(Hex, 0) == 1)
                {
                    this.Hex_Value[Location, 1] = 1;
                }
                if (GetBit(Hex, 1) == 1)
                {
                    this.Hex_Value[Location, 1] = 2;
                }
                else if (GetBit(Hex, 1) == 0 && GetBit(Hex, 4) == 1)
                {
                    this.Hex_Value[Location, 1] = 3;
                }
                
                Location = 99;
            }
        }

        public void Function_Add_DTC_Function()
        {
            String[] Rows = new String[6];
            for (int i = 0; i < 35; i++)
            {
                if (Hex_Value[i, 1] != 0)
                {
                    Rows[0] = Code_Type[i, 0];
                    Rows[1] = DTC_ErrorTxt[i, 0];
                    Rows[2] = Code_Type[i, 1];
                    Rows[3] = DTC_ErrorTxt[i, 1];
                    Rows[4] = Hex_Value[i, 0].ToString("X2");
                    if (Hex_Value[i, 1] == 1)
                    {
                        Rows[5] = "Support";
                    }
                    else if (Hex_Value[i, 1] == 2)
                    {
                        Rows[5] = "Current";
                    }
                    else if (Hex_Value[i, 1] == 3)
                    {
                        Rows[5] = "History";
                    }
                    else
                    {
                        Rows[5] = "Not Support";
                    }
                    Box_DTC.Rows.Add(Rows);
                }
            }
        }

        private void Btn_ClearDTC_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < 35; i++)
            {
                Hex_Value[i, 0] = 0;
                Hex_Value[i, 1] = 0;
            }
            while (this.Box_DTC.Rows.Count != 0)
            {
                this.Box_DTC.Rows.RemoveAt(0);
            }
        }

        private void Box_DTC_RowsAdded(object sender, DataGridViewRowsAddedEventArgs e)
        {
            if(Box_DTC.Rows[Box_DTC.Rows.Count - 1].Cells[5].Value.ToString() == "Current")
            {
                Box_DTC.Rows[Box_DTC.Rows.Count - 1].Cells[5].Style.BackColor = System.Drawing.Color.Yellow;
            }
            else if (Box_DTC.Rows[Box_DTC.Rows.Count - 1].Cells[5].Value.ToString() == "History")
            {
                Box_DTC.Rows[Box_DTC.Rows.Count - 1].Cells[5].Style.BackColor = System.Drawing.Color.Red;
            }
            else if (Box_DTC.Rows[Box_DTC.Rows.Count - 1].Cells[5].Value.ToString() == "Support")
            {
                Box_DTC.Rows[Box_DTC.Rows.Count - 1].Cells[5].Style.BackColor = System.Drawing.Color.Green;
            }
        }

        private void Btn_ReadDTC_Click(object sender, EventArgs e)
        {
            Btn_ClearDTC_Click(null, null);
        }

        private int GetBit(int value, int Bit)
        {
            if (Bit > 0)
            {
                value = GetBit(value/2, Bit - 1);
            }
            else
            {
                value = value % 2;
            }
            return value;
        }
    }
}
