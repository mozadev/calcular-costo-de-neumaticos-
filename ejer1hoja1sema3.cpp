//ejercicio 1 de la hoja 1 semana 3
/*

Pimentel Hermanos, empresa dedicada a vender neum�ticos, est� realizando la siguiente
oferta:
Si el cliente decide comprar menos de 3 neum�ticos paga por cada uno de ellos S/. 145, si
en cambio compra entre 3 y 5 neum�ticos paga, por cada uno, S/. 138, y si compra m�s de
5 paga S/. 135 por cada uno.
Realice una aplicaci�n en C++ que teniendo como dato el n�mero de neum�ticos que un
cliente va a comprar, muestre el monto total que pagar� por los mismos.


*/



#include<iostream>
#include<conio.h>


using namespace std;

float calculacosto(int neum)//declaro la variable de entrada como parametro
{
	
//declaro la variable salida
float costo;
//proceso
costo=(neum>1 &&neum<3)?neum*145:(neum>=3 &&neum<=5)?
neum*138:neum*135;
return costo;//el valor de salida retorna a la variable de salida

}

	
int main()
{
	//declaro la variable entrada en la funcion principal
	int c;
	//ingreso de datos 
	cout<<"ingrese cantidad de neumaticos: ";cin>>c;
	cout<<calculacosto(c);//salida de informacion
	
	_getch();
	
	
	
	
}





	
		
		
		
		
		
		
		

