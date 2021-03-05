//Calcular los números pares del 1 al 100 
// Incluir librerias a utilizar
#include <iostream>
#include <cmath>
//declaracion
//main function
void print_even (int nmin, int nmax); //declaro la funcion print even para que me imprima los pares que estan desde un parametro nmin hasta un parametro nmax
int main(void) //void obliga a la funcion a retornar un entero
{
  const int m = 1, n = 15; //Estamos pidiendo que nos reserven el espacio para un entero en la memoria (4 bytes)
  print_even (m,n); //llamo a la funcion main
  
   return 0;
}

void print_even (int nmin, int nmax) //implementacion
{
    for (int ii = nmin ; ii <= nmax ; ii = ii+1){
    //si el número es par entonces imprimir
    if (ii%2 == 0){
      std::cout << ii << " ";
    }
  
}
    std::cout << "\n";
    
}