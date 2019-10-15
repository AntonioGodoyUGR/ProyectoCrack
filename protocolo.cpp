#include<iostream>

using namespace std;

int funcion_suma (int n) {
  // En este caso veremos como funcionan las funciones/métodos y veremos el tipo de paso de parámetros
  return (n + 8) ;
}

bool funcion_booleana_requerida (bool b) {
  return !b ;
}

int funcion_aprobadas () {
  return 0 ;
}

int bool_to_int(boolean bool){
 if(bool){
   return 0;
 }
  return 1;
}
int main(){

  bool chocobollo=true;

  cout << "Como primer ejemplo, vamos a hacer el Hello World!" << endl;

  cout << "Hello World" << endl;

  // Hemos usado una función incluida en la biblioteca iostream y usado el namespace std

  // A continuación definiremos una variable para cada tipo básico de dato

  int numero = 7 ;
  cout << "numero = " << numero << endl;

  char caracter = 'C';
  cout << "caracter = " << caracter << endl ;
  
  string palabra = "null";
  cout << "Palabra String = " << palabra << endl;
  
  //Hacemos la llamada a la función
  cout << "numero tras la funcion = " << funcion_suma(numero) << endl;

  // Volvamos a los booleanos
  cout << chocobollo << endl ;
  cout << funcion_booleana_requerida(chocobollo) << endl;





}
