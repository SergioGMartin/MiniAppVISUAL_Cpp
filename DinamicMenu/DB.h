#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	DataTable^ getData();
	void OpenCon();
	void CloseCon();
	void AddClient(String^, String^, String^);
	Boolean^ GetByName(String^, String^);
	void Modificar(String^, String^, String^, String^);
	void Eliminar(String^);
	void AddUser(String^, String^);
};

