#include <iostream>
#include <stdlib.h> // uso la libreria para poder usar atof
void primos(int x, int y);//declaro a la funcion primos

int main (int argc, char *argv[])//hago que el programa lea valores desde la línea de comando
{
  int x = std::atoi(argv[1]);//le digo que me convierta el string de la linea de comando a una vbariable int por medio de atoi
  int y = std::atoi(argv[2]);
  primos(x,y);//llamo a la función primos
}

void primos (int nmin, int nmax) //implementacion de la funcion primos
{
  int suma = 0; //declaro la variable suma donde guardaré la cantidad de números primos hallada
  int y = 0; // es una variable que usaré para iindicarle al computador cuándo hacer algo sobre la variable suma
  for (int ii = nmin; ii <= nmax; ii = ii + 1) //inicio un loop para que analice todos los números dentro del intervalo deseado
  {
    for (int x=2; x <= ii-1 ; x = x +1) //establezco una variable x que será el divisor de ii, hago este loop para poder hacer que x sean todos los números desde 2 hasta ii - 1, además le indico de una condición especial para que salga del loop al detectar que el número que se está analizando no es primo
    {
      y = 0;
      if ( ii%x == 0) //si el residuo de la operación es 0, dar la condición para finalizar el loop
      {
        x = ii;
      }
      else 
      {
        y = y+1; // si el residuo no es 0 
      }

    }
    if (y!=0) //si y es distinto de 0 quiere decir que no se encontraron x tales que ii/x tuviera residuo 0, por lo tanto es un primo y le sumaremos 1 a la variable suma
    {
      suma = suma+1;
    }
  }
  std::cout << suma << "\n";
}