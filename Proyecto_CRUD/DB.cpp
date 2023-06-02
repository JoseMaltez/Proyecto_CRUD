#include "pch.h"
#include "DB.h"
//se aplican los metodos de la clase
DB::DB()//se llama al metodo constructor
{
	this->connectionString= "datasource=localhost; username=root; password=localhost; database=proyectocrud;"; //colocamos parametros para conectar base de datos
	this->conn = gcnew MySqlConnection(this->connectionString); //creando la conexion con MySql
}	

void DB::AbrirConexion() //metodo que abre la conexion
{
	this->conn->Open();
}

void DB::CerrarConexion()//metodo para cerrar la conexion
{
	this->conn->Close();
}

DataTable^ DB::getData() //metodo para obtener la informacion
{
	String^ sql = "select * from registro_de_ventas"; //seleccionamos todo de la tabla registro de ventas
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor); //adaptador de los datos para lo que necesitamos
	DataTable^ tabla = gcnew DataTable(); //creamos una tabla de datos
	data->Fill(tabla); //hacemos que la tabla se llene con la informacion
	return tabla; //retornamos la tabla
}