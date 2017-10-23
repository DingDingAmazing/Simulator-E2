using System;
using System.Windows.Forms;
using System.Data;

namespace Form_Control
{
    public partial class ChimeForm : UserControl
    {
        public static string Location;
        public static DataTable ATS_Table;

        public ChimeForm()
        {
            InitializeComponent();
            Initialize();
        }

        private void Initialize()
        {
            Box_CanID.Items.Add("APA_HS");
            Box_CanID.Items.Add("BCM");
            Box_CanID.Items.Add("IPC");
            Box_CanID.Items.Add("Onstar");
            Box_CanID.Items.Add("RadioHead");
            Box_CanID.Items.Add("SDM");
            Box_CanID.SelectedIndex = 4;

            Box_ChmVolSt.Items.Add("Normal");
            Box_ChmVolSt.Items.Add("Load");
            Box_ChmVolSt.SelectedIndex = 0;
        }

        private void radioButton0_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 0;
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 1;
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 2;
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 3;
        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 4;
        }

        private void radioButton5_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 5;
        }

        private void radioButton6_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 6;
        }

        private void radioButton7_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 7;
        }

        private void radioButton8_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 8;
        }

        private void radioButton9_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 9;
        }

        private void radioButton10_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 10;
        }

        private void radioButton11_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 11;
        }

        private void radioButton12_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 12;
        }

        private void radioButton13_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 13;
        }

        private void radioButton14_CheckedChanged(object sender, EventArgs e)
        {
            Box_SC_SndTne.Value = 14;
        }

        private void Box_SC_SndDutCyc_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_SC_SndDutCyc.Value = (int)Box_SC_SndDutCyc_FAKE.Value * 255 / 100;
        }

        private void Btn_Auto_Click(object sender, EventArgs e)
        {
            //Btn_Auto.Enabled = false;
            DialogResult Return = MessageBox.Show("Do you Need Load The Test Script?", "Load Script?", MessageBoxButtons.YesNo);
            if (Return == DialogResult.Yes)
            {
                Btn_Load_Click(null,null);
            }

        }

        private void Btn_Load_Click(object sender, EventArgs e)
        {
            OpenFileDialog OpenDlg = new OpenFileDialog();
            OpenDlg.Title = "Select The Test Script";
            OpenDlg.Filter = "Auto Test Script|*.ats";
            if (OpenDlg.ShowDialog() == DialogResult.OK)
            {
                Location = OpenDlg.FileName.ToString();
                Function_Get_ATS(Location);
                Btn_Run.Enabled = true;
            }
        }

        private void Btn_Save_Click(object sender, EventArgs e)
        {
            SaveFileDialog SaveDlg = new SaveFileDialog();
            SaveDlg.Title = "Save The Test Script";
            SaveDlg.Filter = "Auto Test Script|*.ats";
            //SaveDlg.RestoreDirectory = true;
            if (SaveDlg.ShowDialog() == DialogResult.OK)
            {
                Location = SaveDlg.FileName.ToString();
                AccessOperation.CreatAccessDatabase(Location);
                for (int i = 0; i < Box_ATS.RowCount - 1; i++)
                {
                    int[] Chime_Info = Function_Get_ChimeInfo(i);
                    AccessOperation.ExecuteInsert(Chime_Info);
                }

            }
            Box_ATS.AllowUserToAddRows = false;
            Btn_Modify.Enabled = true;
            Btn_Save.Enabled = false;
            Btn_Delete.Enabled = false;
            Btn_Run.Enabled = true;
            Btn_Load.Enabled = true;
        }

        private int[] Function_Get_ChimeInfo(int i)
        {
            int[] Chime_Info = new int[10];
            if (Box_ATS.Rows[i].Cells[0].Value != null)
            {
                if (Box_ATS.Rows[i].Cells[0].Value.ToString() == "True")
                {
                    Chime_Info[0] = 1;
                }
                else
                {
                    Chime_Info[0] = 0;
                }
            }
            else
            {
                Chime_Info[0] = 0;
            }
            if (Box_ATS.Rows[i].Cells[1].Value != null)
            {
                if (Box_ATS.Rows[i].Cells[1].Value.ToString() == "True")
                {
                    Chime_Info[1] = 1;
                }
                else
                {
                    Chime_Info[1] = 0;
                }
            }
            else
            {
                Chime_Info[1] = 0;
            }
            if (Box_ATS.Rows[i].Cells[2].Value != null)
            {
                if (Box_ATS.Rows[i].Cells[2].Value.ToString() == "True")
                {
                    Chime_Info[2] = 1;
                }
                else
                {
                    Chime_Info[2] = 0;
                }
            }
            else
            {
                Chime_Info[2] = 0;
            }
            if (Box_ATS.Rows[i].Cells[3].Value != null)
            {
                if (Box_ATS.Rows[i].Cells[3].Value.ToString() == "True")
                {
                    Chime_Info[3] = 1;
                }
                else
                {
                    Chime_Info[3] = 0;
                }
            }
            else
            {
                Chime_Info[3] = 0;
            }
            if (Box_ATS.Rows[i].Cells[4].Value != null)
            {
                Chime_Info[4] = Convert.ToInt32(Box_ATS.Rows[i].Cells[4].Value.ToString());
            }
            else
            {
                Chime_Info[4] = 0;
            }
            if (Box_ATS.Rows[i].Cells[5].Value != null)
            {
                Chime_Info[5] = Convert.ToInt32(Box_ATS.Rows[i].Cells[5].Value.ToString());
            }
            else
            {
                Chime_Info[5] = 0;
            }
            if (Box_ATS.Rows[i].Cells[6].Value != null)
            {
                Chime_Info[6] = Convert.ToInt32(Box_ATS.Rows[i].Cells[6].Value.ToString());
            }
            else
            {
                Chime_Info[6] = 0;
            }
            if (Box_ATS.Rows[i].Cells[7].Value != null)
            {
                Chime_Info[7] = Convert.ToInt32(Box_ATS.Rows[i].Cells[7].Value.ToString());
            }
            else
            {
                Chime_Info[7] = 0;
            }
            if (Box_ATS.Rows[i].Cells[8].Value != null)
            {
                Chime_Info[8] = this.Tone.Items.IndexOf(Box_ATS.Rows[i].Cells[8].Value);
            }
            else
            {
                Chime_Info[8] = 0;
            }
            if (Box_ATS.Rows[i].Cells[9].Value != null)
            {
                Chime_Info[9] = Convert.ToInt32(Box_ATS.Rows[i].Cells[9].Value.ToString());
            }
            else
            {
                Chime_Info[9] = 0;
            }
            return Chime_Info;
        }

        private void Function_Get_ATS(string Location)
        {
            int[] RowValue = new int[10];
            int Row_Count = 0;
            string sql = "select * from Auto_Test_Script";
           // ATS_Table.Rows.Clear();
            Box_ATS.Rows.Clear();
            DataTable dt = (DataTable)Box_ATS.DataSource;
            ATS_Table = AccessOperation.ExecuteQuery(sql, Location).Tables[0];

            foreach (DataRow row in ATS_Table.Rows)
            {
                Box_ATS.Rows.Add();
                DataGridViewRow box_row = Box_ATS.Rows[Row_Count];
                if (Convert.ToInt32(row["Drive_Front"].ToString()) == 0)
                {
                    box_row.Cells[0].Value = false;
                }
                else
                {
                    box_row.Cells[0].Value = true;
                }
                if (Convert.ToInt32(row["Passenger_Front"].ToString()) == 0)
                {
                    box_row.Cells[1].Value = false;
                }
                else
                {
                    box_row.Cells[1].Value = true;
                }
                if (Convert.ToInt32(row["Left_Rear"].ToString()) == 0)
                {
                    box_row.Cells[2].Value = false;
                }
                else
                {
                    box_row.Cells[2].Value = true;
                }
                if (Convert.ToInt32(row["Right_Rear"].ToString()) == 0)
                {
                    box_row.Cells[3].Value = false;
                }
                else
                {
                    box_row.Cells[3].Value = true;
                }
                box_row.Cells[4].Value = row["Sound_Priority"].ToString();
                box_row.Cells[5].Value = row["Sound_Duty_Cycle"].ToString();
                box_row.Cells[6].Value = row["Sound_Cadence_Period"].ToString();
                box_row.Cells[7].Value = row["Number_of_Repetitions"].ToString();
                box_row.Cells[8].Value = this.Tone.Items[Convert.ToInt32(row["Sound_Tone"].ToString())];
                box_row.Cells[9].Value = row["Sleep"].ToString();
                Row_Count++;
            }
            Box_ATS.DataSource = dt;
        }

        private void Btn_Delete_Click(object sender, EventArgs e)
        {
            Box_ATS.Rows.RemoveAt(Box_ATS.SelectedRows[0].Index);
        }

        private void Btn_Modify_Click(object sender, EventArgs e)
        {
            Box_ATS.AllowUserToAddRows = true;
            Btn_Save.Enabled = false;
            Btn_Delete.Enabled = true;
            Btn_Save.Enabled = true;
            Btn_Run.Enabled = false;
            Btn_Load.Enabled = false;
            Btn_Run.Enabled = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        public void Function_Value_Assign(int row)
        {
            int[] Chime_Info = Function_Get_ChimeInfo(row);
            #region local
            if (Chime_Info[0] == 0)
            {
                Box_SndLocDrFr.Checked = false;
            }
            else
            {
                Box_SndLocDrFr.Checked = true;
            }
            if (Chime_Info[1] == 0)
            {

                Box_SndLocPasFr.Checked = false;
            }
            else
            {
                Box_SndLocPasFr.Checked = true;
            }
            if (Chime_Info[2] == 0)
            {

                Box_SndLocLftRr.Checked = false;
            }
            else
            {
                Box_SndLocLftRr.Checked = true;
            }
            if (Chime_Info[3] == 0)
            {

                Box_SndLocRtRr.Checked = false;
            }
            else
            {
                Box_SndLocRtRr.Checked = true;
            }
            #endregion
            Box_SndPriority.Value = Chime_Info[4];
            Box_SC_SndDutCyc.Value = Chime_Info[5];
            Box_SC_SndCdnPrd.Value = Chime_Info[6];
            Box_SC_NmofRp.Value = Chime_Info[7];
            Box_SC_SndTne.Value = Chime_Info[8];
        }
    }
}
