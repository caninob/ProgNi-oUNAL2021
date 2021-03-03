//Calcular los números pares del 1 al 100 
// Incluir librerias a utilizar
#include <iostream>
#include <cmath>
//declaracion
//main function
int main(void) //void obliga a la funcion a retornar un entero
{
  const int m = 1, n = 100; //Estamos pidiendo que nos reseren el espacio para un entero en la memoria (4 bytes)
  std::cout << "m: " << m << "\n";
  std::cout << "n: " << n << "\n";
  
  for (int ii = m ; ii <= n ; ii = ii+1){
    //si el número es par entonces imprimir
    if (ii%2 == 0){
      std::cout << ii << "\n";
    } 

  }
  
  
  return 0;
}