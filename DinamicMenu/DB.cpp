#include "pch.h"
#include "DB.h"

DB::DB() {
	this->connectionString = "datasource=localhost; username=root; password=""; database=db_jdbc;";
	this->conn = gcnew MySqlConnection(this->connectionString);
}


void DB::OpenCon() {
	this->conn->Open();
}

void DB::CloseCon() {
	this->conn->Close();
}

DataTable^ DB::getData() {
	String^ sql = "select nombre,edad,carrera from persona";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ table = gcnew DataTable();
	data->Fill(table);
	return table;
}

void DB::AddClient(String^ n, String^ e, String^ c) {
	String^ sql = "insert into persona(nombre,edad,carrera) values('"+n+"',"+e+",'"+c+"')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

Boolean^ DB::GetByName(String^ login, String^ pass) {
	String^ sql = "select * from users where name='"+login+"' and pswd='"+pass+"'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataReader^ dataReader;
	Boolean^ log = false;
	try
	{
		dataReader = cursor->ExecuteReader();
		if (dataReader->Read()) {
			log=true;
		}
		else {
			log=false;
		}

	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	return log;
}

void DB::Modificar(String^ n, String^ e, String^ c, String^ ref) {
	String^ sql = "update persona set nombre='"+n+"', edad="+e+", carrera='"+c+"' where nombre='" + ref + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Eliminar(String^ n) {
	String^ sql = "delete from persona where nombre='" + n + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		cursor->ExecuteNonQuery();
		MessageBox::Show(L"Eliminado correctamente");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}