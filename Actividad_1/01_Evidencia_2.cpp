/*
	<--> Pedir los datos al usuario
	
	* Referencia del calzado. -> int
	* Descripcion del producto de calzado. -> string
	* Talla del producto de calzado. -> int
	* Disponibilidad del producto para la venta (si = S, no = N). -> string
	* Costo del producto de calzado. -> int
	* Precio de venta del producto de calzado. -> int
	
	<--> Mostrar los datos ingresados.
	
	* Los Datos registrados son los siguientes
	* Referencia: 55555
	* Descripcion: Botines clasicos en cuero animal.
	* Talla: 40
	* Disponibilidad: S or N
	* Costo: 100 usd
	* Precio venta: 110 usd
	
	<--> By Jose David Carranza Angarita
*/

#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Miembros variables declarados sin inicializar su valor.
	int referencia, talla, costo_compra, precio_venta;
	string descripcion, disponibilidad;
	
	//Banner
	cout << endl << "---------------------------------------------------";
	cout << endl << "	Bienvenidos a Zapateria Nuevo Sol";
	cout << endl << "---------------------------------------------------"<< endl;
	
	
	cout << endl << "Ingrese la referencia del zapato: ";
	cin >> referencia;
	
	//Ignorar el bufer de ejecucion de entrada
	cin.ignore();
	cout << endl << "Ingrese la descripcion del zapato: ";
	getline(cin,descripcion); //Obtenemos toda la entrada de la linea
	
	cout << endl << "Ingrese la talla del zapato: ";
	cin >> talla;
	
	cout << endl << "Ingrese la disponibilidad del zapato (si = s , no = n): ";
	cin >> disponibilidad;
	
	cout << endl << "Ingrese el costo de compra del zapato: ";
	cin >> costo_compra;
	
	cout << endl << "Ingrese el precio de venta del zapato: ";
	cin >> precio_venta;
	
	
	cout << endl << "---------------------------------------------------";
	cout << endl << "		Datos del zapato";
	cout << endl << "---------------------------------------------------"<< endl;
	
	cout << endl << "La referencia del zapato es: "<< referencia << endl;
	cout << endl << "La descripcion del zapato es: "<< descripcion << endl;
	cout << endl << "La talla del zapato es: "<< talla << endl;
	cout << endl << "La disponibilidad del zapato es: "<< disponibilidad << endl;
	cout << endl << "El costo de compra del zapato es: "<< costo_compra << " USD" << endl;
	cout << endl << "El precio de venta del zapato es: "<< precio_venta << " USD" << endl;

	
	return 0;
}
