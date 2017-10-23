using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using ADOX;
using System.Data.OleDb;
using System.Data;

namespace Form_Control
{
    class AccessOperation
    {
        private static string root;
        private static string S_AccessConnection_1 = "Provider = Microsoft.Jet.OLEDB.4.0; Data Source = ";
        private static string S_AccessConnection_2 = "; Jet OLEDB:Engine Type = 5;";

        public static void CreatAccessDatabase(string Address)
        {
            root = S_AccessConnection_1 + Address + S_AccessConnection_2;
            ADOX.CatalogClass catalog = new ADOX.CatalogClass();
            try
            {
                #region Create Access Database
                //Creat Access

                if (System.IO.File.Exists(@Address))
                {
                    System.IO.File.Delete(Address);
                }
                catalog.Create(S_AccessConnection_1 + Address + S_AccessConnection_2);
                #region Create Stock Table for Access Database

                TableClass Test_Script = new TableClass();
                Test_Script.ParentCatalog = catalog;
                Test_Script.Name = "Auto_Test_Script";

                #region Create & Add Member in this Table

                Column st_column = new ADOX.Column();
                st_column.ParentCatalog = catalog;
                st_column.Name = "Record_ID";
                st_column.Type = DataTypeEnum.adInteger;
                st_column.DefinedSize = 9;
                st_column.Properties["AutoIncrement"].Value = true;
                Test_Script.Columns.Append(st_column, DataTypeEnum.adInteger, 9);
                Test_Script.Keys.Append("PrimaryKey", KeyTypeEnum.adKeyPrimary, st_column, null, null);

                Column st_column1 = new Column();
                st_column1.ParentCatalog = catalog;
                st_column1.Name = "Drive_Front";
                st_column1.Type = DataTypeEnum.adInteger;
                st_column1.DefinedSize = 9;
                Test_Script.Columns.Append(st_column1, DataTypeEnum.adInteger, 9);

                Column st_column2 = new Column();
                st_column2.ParentCatalog = catalog;
                st_column2.Name = "Passenger_Front";
                st_column2.Type = DataTypeEnum.adInteger;
                st_column2.DefinedSize = 9;
                Test_Script.Columns.Append(st_column2, DataTypeEnum.adInteger, 9);

                Column st_column3 = new Column();
                st_column3.ParentCatalog = catalog;
                st_column3.Name = "Left_Rear";
                st_column3.Type = DataTypeEnum.adInteger;
                st_column3.DefinedSize = 9;
                Test_Script.Columns.Append(st_column3, DataTypeEnum.adInteger, 9);

                Column st_column4 = new Column();
                st_column4.ParentCatalog = catalog;
                st_column4.Name = "Right_Rear";
                st_column4.Type = DataTypeEnum.adInteger;
                st_column4.DefinedSize = 9;
                Test_Script.Columns.Append(st_column4, DataTypeEnum.adInteger, 9);

                Column st_column5 = new Column();
                st_column5.ParentCatalog = catalog;
                st_column5.Name = "Sound_Priority";
                st_column5.Type = DataTypeEnum.adInteger;
                st_column5.DefinedSize = 9;
                Test_Script.Columns.Append(st_column5, DataTypeEnum.adInteger, 9);

                Column st_column6 = new Column();
                st_column6.ParentCatalog = catalog;
                st_column6.Name = "Sound_Duty_Cycle";
                st_column6.Type = DataTypeEnum.adInteger;
                st_column6.DefinedSize = 9;
                Test_Script.Columns.Append(st_column6, DataTypeEnum.adInteger, 9);

                Column st_column7 = new Column();
                st_column7.ParentCatalog = catalog;
                st_column7.Name = "Sound_Cadence_Period";
                st_column7.Type = DataTypeEnum.adInteger;
                st_column7.DefinedSize = 9;
                Test_Script.Columns.Append(st_column7, DataTypeEnum.adInteger, 9);

                Column st_column8 = new Column();
                st_column8.ParentCatalog = catalog;
                st_column8.Name = "Number_of_Repetitions";
                st_column8.Type = DataTypeEnum.adInteger;
                st_column8.DefinedSize = 9;
                Test_Script.Columns.Append(st_column8, DataTypeEnum.adInteger, 9);

                Column st_column9 = new Column();
                st_column9.ParentCatalog = catalog;
                st_column9.Name = "Sound_Tone";
                st_column9.Type = DataTypeEnum.adInteger;
                st_column9.DefinedSize = 9;
                Test_Script.Columns.Append(st_column9, DataTypeEnum.adInteger, 9);

                Column st_column10 = new Column();
                st_column10.ParentCatalog = catalog;
                st_column10.Name = "Sleep";
                st_column10.Type = DataTypeEnum.adInteger;
                st_column10.DefinedSize = 9;
                Test_Script.Columns.Append(st_column10, DataTypeEnum.adInteger, 9);

                #endregion

                catalog.Tables.Append(Test_Script);

                #endregion

                //Release

                System.Runtime.InteropServices.Marshal.ReleaseComObject(Test_Script);

                Test_Script = null;
                #endregion
            }
            finally
            {
                System.Runtime.InteropServices.Marshal.FinalReleaseComObject(catalog.ActiveConnection);
                System.Runtime.InteropServices.Marshal.FinalReleaseComObject(catalog);
                catalog = null;
                System.GC.WaitForPendingFinalizers();
                System.GC.Collect();
            }
        }

        public static void ExecuteOperation(string sql, OleDbParameter[] parameters)
        {

            using (OleDbConnection connection = new OleDbConnection(root))
            {
                OleDbCommand cmd = new OleDbCommand(sql, connection);
                try
                {
                    connection.Open();
                    if (parameters != null)
                    {
                        cmd.Parameters.AddRange(parameters);
                    }
                    cmd.ExecuteNonQuery();
                }
                finally
                {
                    connection.Close();
                }
            }

        }

        public static void ExecuteOperation(string sql)
        {
            ExecuteOperation(sql, null);
        }

        public static void ExecuteInsert(int[] Chime_Info)
        {
            string sql;
            OleDbParameter[] parameters;

            sql = "insert into Auto_Test_Script(Drive_Front,Passenger_Front,Left_Rear,Right_Rear,Sound_Priority,Sound_Duty_Cycle,Sound_Cadence_Period,Number_of_Repetitions,Sound_Tone,Sleep)values(?,?,?,?,?,?,?,?,?,?);";
            parameters = new OleDbParameter[10];
            parameters[0] = new OleDbParameter("@Drive_Front", OleDbType.Integer);
            parameters[0].Value = Chime_Info[0];
            parameters[1] = new OleDbParameter("@Passenger_Front", OleDbType.Integer);
            parameters[1].Value = Chime_Info[1];
            parameters[2] = new OleDbParameter("@Left_Rear", OleDbType.Integer);
            parameters[2].Value = Chime_Info[2];
            parameters[3] = new OleDbParameter("@Right_Rear", OleDbType.Integer);
            parameters[3].Value = Chime_Info[3];
            parameters[4] = new OleDbParameter("@Sound_Priority", OleDbType.Integer);
            parameters[4].Value = Chime_Info[4];
            parameters[5] = new OleDbParameter("@Sound_Duty_Cycle", OleDbType.Integer);
            parameters[5].Value = Chime_Info[5];
            parameters[6] = new OleDbParameter("@Sound_Cadence_Period", OleDbType.Integer);
            parameters[6].Value = Chime_Info[6];
            parameters[7] = new OleDbParameter("@Number_of_Repetitions", OleDbType.Integer);
            parameters[7].Value = Chime_Info[7];
            parameters[8] = new OleDbParameter("@Sound_Tone", OleDbType.Integer);
            parameters[8].Value = Chime_Info[8];
            parameters[9] = new OleDbParameter("@Sleep", OleDbType.Integer);
            parameters[9].Value = Chime_Info[9];
            ExecuteOperation(sql, parameters);

        }

        public static DataSet ExecuteQuery(string sql, OleDbParameter[] parameters,string Address)
        {
            root = S_AccessConnection_1 + Address + S_AccessConnection_2;

            using (OleDbConnection connection = new OleDbConnection(root))
            {
                DataSet DSet = new DataSet();
                try
                {
                    connection.Open();
                    OleDbDataAdapter adapter = new OleDbDataAdapter(sql, connection);
                    if (parameters != null)
                    {
                        adapter.SelectCommand.Parameters.AddRange(parameters);
                    }
                    adapter.Fill(DSet);
                    return DSet;
                }
                catch (Exception ex)
                {
                    return DSet;
                }
                finally
                {
                    connection.Close();
                }
            }
        }

        public static DataSet ExecuteQuery(string sql, string Address)
        {
            return ExecuteQuery(sql, null, Address);
        }
    }
}
