#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

// clase de la base de datos
ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB(); //constructor
	DataTable^ getData(); //metodos
	void AbrirConexion();
	void CerrarConexion();
};

