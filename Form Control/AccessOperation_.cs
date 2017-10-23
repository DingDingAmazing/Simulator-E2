using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using ADOX;
using System.Data.OleDb;
using System.Data;

namespace Form_Control_1
{
    class AccessOperation_
    {
        //Connecte SQL Command
        private static string S_AccessConnection_1 = "Provider = Microsoft.Jet.OLEDB.4.0; Data Source = Management_Database.ats";
        private static string S_AccessConnection_2 = "; Jet OLEDB:Engine Type = 5;";
        //Create Access Database
        public static void CreatAccessDatabase(string Password)
        {
            ADOX.CatalogClass catalog = new ADOX.CatalogClass();
            try
            {
                #region Create Access Database
                //Creat Access
                catalog.Create(S_AccessConnection_1 + S_AccessConnection_2);

                #region Create Stock Table for Access Database
       
                TableClass Stock_Table = new TableClass();
                Stock_Table.ParentCatalog = catalog;
                Stock_Table.Name = "Script_Data";

                #region Create & Add Member in this Table

                Column st_column = new ADOX.Column();
                st_column.ParentCatalog = catalog;
                st_column.Name = "Record_ID";
                st_column.Type = DataTypeEnum.adInteger;
                st_column.DefinedSize = 9;
                st_column.Properties["AutoIncrement"].Value = true;
                Stock_Table.Columns.Append(st_column, DataTypeEnum.adInteger, 9);
                Stock_Table.Keys.Append("PrimaryKey", KeyTypeEnum.adKeyPrimary, st_column, null, null);

                Column st_column1 = new Column();
                st_column1.ParentCatalog = catalog;
                st_column1.Name = "Drive_Front";
                st_column1.Type = DataTypeEnum.adVarWChar;
                st_column1.DefinedSize = 255;
                st_column1.Properties["Jet OLEDB:Allow Zero Length"].Value = true;
                Stock_Table.Columns.Append(st_column1, DataTypeEnum.adVarWChar, 255);

                Column st_column2 = new Column();
                st_column2.ParentCatalog = catalog;
                st_column2.Name = "Passenger_Front";
                st_column2.Type = DataTypeEnum.adVarWChar;
                st_column2.DefinedSize = 255;
                st_column2.Properties["Jet OLEDB:Allow Zero Length"].Value = true;
                Stock_Table.Columns.Append(st_column2, DataTypeEnum.adVarWChar, 255);

                Column st_column3 = new Column();
                st_column3.ParentCatalog = catalog;
                st_column3.Name = "Left_Rear";
                st_column3.Type = DataTypeEnum.adVarWChar;
                st_column3.DefinedSize = 255;
                st_column3.Properties["Jet OLEDB:Allow Zero Length"].Value = true;
                Stock_Table.Columns.Append(st_column3, DataTypeEnum.adVarWChar, 255);

                Column st_column4 = new Column();
                st_column4.ParentCatalog = catalog;
                st_column4.Name = "Right_Rear";
                st_column4.Type = DataTypeEnum.adVarWChar;
                st_column4.DefinedSize = 255;
                st_column4.Properties["Jet OLEDB:Allow Zero Length"].Value = true;
                Stock_Table.Columns.Append(st_column4, DataTypeEnum.adVarWChar, 255);

                Column st_column5 = new Column();
                st_column5.ParentCatalog = catalog;
                st_column5.Name = "Sound_Priority";
                st_column5.Type = DataTypeEnum.adInteger;
                st_column5.DefinedSize = 9;
                Stock_Table.Columns.Append(st_column5, DataTypeEnum.adInteger, 9);

                Column st_column6 = new Column();
                st_column6.ParentCatalog = catalog;
                st_column6.Name = "Sound_Duty_Cycle";
                st_column6.Type = DataTypeEnum.adVarWChar;
                st_column6.DefinedSize = 255;
                st_column6.Properties["Jet OLEDB:Allow Zero Length"].Value = true;
                Stock_Table.Columns.Append(st_column6, DataTypeEnum.adVarWChar, 255);

                Column st_column7 = new Column();
                st_column7.ParentCatalog = catalog;
                st_column7.Name = "Sound_Cadence_Period";
                st_column7.Type = DataTypeEnum.adDouble;
                st_column7.DefinedSize = 9;
                Stock_Table.Columns.Append(st_column7, DataTypeEnum.adDouble, 9);

                Column st_column8 = new Column();
                st_column8.ParentCatalog = catalog;
                st_column8.Name = "Number_of_Repetitions";
                st_column8.Type = DataTypeEnum.adDouble;
                st_column8.DefinedSize = 9;
                Stock_Table.Columns.Append(st_column8, DataTypeEnum.adDouble, 9);

                Column st_column9 = new Column();
                st_column9.ParentCatalog = catalog;
                st_column9.Name = "Sound_Tone";
                st_column9.Type = DataTypeEnum.adDouble;
                st_column9.DefinedSize = 9;
                Stock_Table.Columns.Append(st_column9, DataTypeEnum.adDouble, 9);

                Column st_cloumn10 = new Column();
                st_cloumn10.ParentCatalog = catalog;
                st_cloumn10.Name = "Sleep";
                st_cloumn10.Type = DataTypeEnum.adVarWChar;
                st_cloumn10.DefinedSize = 255;
                st_cloumn10.Properties["Jet OLEDB:Allow Zero Length"].Value = true;
                Stock_Table.Columns.Append(st_cloumn10, DataTypeEnum.adVarWChar, 255);

                #endregion

                catalog.Tables.Append(Stock_Table);

                #endregion


                //Release

                System.Runtime.InteropServices.Marshal.ReleaseComObject(Stock_Table);

                Stock_Table = null;
                #endregion
            }
            catch (Exception ex)
            {
                //MainForm.Access_Result = ex.Message.ToString();
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

        public static void CheckAccessPassword(string Password)
        {
        }

        public static void ModifyAccessPassword(string NewPassword)
        {

        }

        //Get Item Function
        
        //#region Get Item Function

        //public static DataSet ExecuteQuery(string sql, OleDbParameter[] parameters)
        //{
        //    using (OleDbConnection connection = new OleDbConnection(S_AccessConnection_1 + MainForm.Password))
        //    {
        //        DataSet DSet = new DataSet();
        //        try
        //        {
        //            connection.Open();
        //            OleDbDataAdapter adapter = new OleDbDataAdapter(sql, connection);
        //            if (parameters != null)
        //            {
        //                adapter.SelectCommand.Parameters.AddRange(parameters);
        //            }
        //            adapter.Fill(DSet);
        //            return DSet;
        //        }
        //        catch (Exception ex)
        //        {
        //            MainForm.Access_Result = ex.Message.ToString();
        //            return DSet;
        //        }
        //        finally
        //        {
        //            connection.Close();
        //        }
        //    }
        //}

        //public static DataSet ExecuteQuery(string sql)
        //{
        //    return ExecuteQuery(sql, null);
        //}

        //public static DataSet ExecuteSearch(string sql)
        //{
        //    OleDbParameter[] parameters = new OleDbParameter[1];
        //    parameters[0] = new OleDbParameter("@Record_ID", OleDbType.Integer);
        //    parameters[0].Value = ProductNode.Record_ID;
        //    return ExecuteQuery(sql, parameters);
        //}

        //#endregion

        ////Get Count Function

        //#region Get Data Count

        //public static int ExecuteScalar(string sql, OleDbParameter[] parameters)
        //{
        //    using (OleDbConnection connection = new OleDbConnection(S_AccessConnection_1 + MainForm.Password))
        //    {
        //        OleDbCommand cmd = new OleDbCommand(sql, connection);
        //        try
        //        {
        //            connection.Open();
        //            if (parameters != null)
        //            {
        //                cmd.Parameters.AddRange(parameters);
        //            }
        //            int value = Int32.Parse(cmd.ExecuteScalar().ToString());
        //            return value;
        //        }
        //        catch (Exception ex)
        //        {
        //            MainForm.Access_Result = ex.Message.ToString();
        //            return 0;
        //        }
        //        finally
        //        {
        //            connection.Close();
        //        }
        //    }
        //}

        //public static int ExecuteScalar(string sql)
        //{
        //    return ExecuteScalar(sql, null);
        //}

        //public static int ExecuteCompare(string sql)
        //{
        //    OleDbParameter[] parameters = new OleDbParameter[1];
        //    parameters[0] = new OleDbParameter("@Product_ID", OleDbType.VarChar, 255);
        //    parameters[0].Value = ProductNode.Product_ID;
        //    return ExecuteScalar(sql, parameters);
        //}

        //#endregion

        //Database Operation

        #region Database Operation

        #region Basic Operation

        public static void ExecuteOperation(string sql, OleDbParameter[] parameters)
        {

            using (OleDbConnection connection = new OleDbConnection(S_AccessConnection_1 + S_AccessConnection_2))
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

        #endregion

        public static void ExecuteInsert(FunctionType Type)
        {
            string sql;
            OleDbParameter[] parameters;

            switch (Type)
            {
                #region Stock Data Item

                case FunctionType.Stock:
                    sql = "insert into Script_Data(Drive_Front,Passenger_Front,Left_Rear,Right_Rear,Sound_Priority,Sound_Duty_Cycle,Sound_Cadence_Period,Number_of_Repetitions,Sound_Tone,Sleep)values(?,?,?,?,?,?,?,?,?,?);";
                    parameters = new OleDbParameter[10];
                    parameters[0] = new OleDbParameter("@Drive_Front", OleDbType.VarChar, 255);
                    parameters[0].Value = "abc";//ProductNode.Product_ID;
                    parameters[1] = new OleDbParameter("@Passenger_Front", OleDbType.VarChar, 255);
                    parameters[1].Value = "cba";//ProductNode.Product_Name;
                    parameters[2] = new OleDbParameter("@Left_Rear", OleDbType.VarChar, 255);
                    parameters[2].Value = "123";//ProductNode.Production_Place;
                    parameters[3] = new OleDbParameter("@Right_Rear", OleDbType.VarChar, 255);
                    parameters[3].Value = "123";//ProductNode.Vehicle_Type;
                    parameters[4] = new OleDbParameter("@Sound_Priority", OleDbType.Integer);
                    parameters[4].Value = 12;//ProductNode.Stock_Quantity;
                    parameters[5] = new OleDbParameter("@Sound_Duty_Cycle", OleDbType.VarChar, 255);
                    parameters[5].Value = "123";//ProductNode.Product_Units;
                    parameters[6] = new OleDbParameter("@Sound_Cadence_Period", OleDbType.Double);
                    parameters[6].Value = 12.2;//ProductNode.Showed_Price;
                    parameters[7] = new OleDbParameter("@Number_of_Repetitions", OleDbType.Double);
                    parameters[7].Value = 12.2;//ProductNode.Sell_Price;
                    parameters[8] = new OleDbParameter("@Sound_Tone", OleDbType.Double);
                    parameters[8].Value = 12.2;//ProductNode.Purchase_Price;
                    parameters[9] = new OleDbParameter("@Sleep", OleDbType.VarChar, 255);
                    parameters[9].Value = "abc";//ProductNode.Remark;
                    ExecuteOperation(sql, parameters);
                    break;

                #endregion


            }
        }

        public static void ExecuteDelete(FunctionType Type)
        {
            string sql = "";
            OleDbParameter[] parameters = new OleDbParameter[1];
            switch (Type)
            {
                case FunctionType.Stock:
                    sql = "delete from Stock_Data where Record_ID = ?";
                    parameters[0] = new OleDbParameter("@Record_ID", OleDbType.Integer);
                    parameters[0].Value = ProductNode.Record_ID;
                    break;
                case FunctionType.Sell:
                    sql = "delete from Sold_Data where Record_ID = ?";
                    parameters[0] = new OleDbParameter("@Record_ID", OleDbType.Integer);
                    parameters[0].Value = ProductNode.Record_ID;
                    break;
            }

            ExecuteOperation(sql, parameters);
        }

        public static void ExecuteUpdate(FunctionType Type)
        {
            string sql = "";
            OleDbParameter[] parameters;
            switch (Type)
            {
                case FunctionType.SellStock_Modify:
                    sql = "update Stock_Data set Stock_Quantity = ? where Record_ID = ?";
                    parameters = new OleDbParameter[2];
                    parameters[0] = new OleDbParameter("@Stock_Quantity", OleDbType.Integer);
                    parameters[0].Value = ProductNode.Stock_Quantity - ProductNode.Sold_Quantity;
                    parameters[1] = new OleDbParameter("@Record_ID", OleDbType.Integer);
                    parameters[1].Value = ProductNode.Record_ID;
                    ExecuteOperation(sql, parameters);
                    break;
                case FunctionType.Stock:
                    sql = "update Stock_Data set Product_ID = ?,Product_Name = ?,Production_Place = ?,Vehicle_Type = ?,Stock_Quantity = ?,Product_Units = ?,Showed_Price = ?,Sell_Price = ?,Purchase_Price = ?,Remark = ? where Record_ID = ?";
                    parameters = new OleDbParameter[11];
                    parameters[0] = new OleDbParameter("@Product_ID", OleDbType.VarChar, 255);
                    parameters[0].Value = ProductNode.Product_ID;
                    parameters[1] = new OleDbParameter("@Product_Name", OleDbType.VarChar, 255);
                    parameters[1].Value = ProductNode.Product_Name;
                    parameters[2] = new OleDbParameter("@Production_Place", OleDbType.VarChar, 255);
                    parameters[2].Value = ProductNode.Production_Place;
                    parameters[3] = new OleDbParameter("@Vehicle_Type", OleDbType.VarChar, 255);
                    parameters[3].Value = ProductNode.Vehicle_Type;
                    parameters[4] = new OleDbParameter("@Stock_Quantity", OleDbType.Integer);
                    parameters[4].Value = ProductNode.Stock_Quantity;
                    parameters[5] = new OleDbParameter("@Product_Units", OleDbType.VarChar, 255);
                    parameters[5].Value = ProductNode.Product_Units;
                    parameters[6] = new OleDbParameter("@Showed_Price", OleDbType.Double);
                    parameters[6].Value = ProductNode.Showed_Price;
                    parameters[7] = new OleDbParameter("@Sell_Price", OleDbType.Double);
                    parameters[7].Value = ProductNode.Sell_Price;
                    parameters[8] = new OleDbParameter("@Purchase_Price", OleDbType.Double);
                    parameters[8].Value = ProductNode.Purchase_Price;
                    parameters[9] = new OleDbParameter("@Remark", OleDbType.VarChar, 255);
                    parameters[9].Value = ProductNode.Remark;
                    parameters[10] = new OleDbParameter("@Record_ID", OleDbType.Integer);
                    parameters[10].Value = ProductNode.Record_ID;
                    ExecuteOperation(sql, parameters);
                    break;
                case FunctionType.Purchase:
                    sql = "update Stock_Data set Stock_Quantity = ? where Product_ID = ?";
                    parameters = new OleDbParameter[2];
                    parameters[0] = new OleDbParameter("@Stock_Quantity", OleDbType.Integer);
                    parameters[0].Value = ProductNode.Stock_Quantity + ProductNode.Purchase_Quantity;
                    parameters[1] = new OleDbParameter("@Product_ID", OleDbType.VarChar, 255);
                    parameters[1].Value = ProductNode.Product_ID;
                    ExecuteOperation(sql, parameters);
                    break;
            }
        }

        #endregion
    }
}
