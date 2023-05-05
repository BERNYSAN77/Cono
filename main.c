/*Realice un programa que permita calcular el area y el volumen de un cono. Tiene como dato las coordenadas del radio y de la 
distancia entre dos puntos = √((x2-x1)²+(y2-y1)²)
área = PI*radio*generatriz + PI *(radio)²
generatriz = √(radio)²+(altura)²
Volumen = 1/3 (PI *(radio)²*altura)

  */
#include <stdio.h>
#include <math.h>


int main(void) {
  float x1,y1,x2,y2,x3,y3;
  float radio,altura;
  /*Radio*/
  x1 = ingresarCoordenada();
  y1 = ingresarCoordenada();
  x2 = ingresarCoordenada();
  y2 = ingresarCoordenada();
  /*Altura*/
  x3 = ingresarCoordenada();
  y3 = ingresarCoordenada();

  radio = distanciaPunto(x1,y1,x2,y2);
  altura = distanciaPunto(x1,y1,x3,y3);
  
  

  printf("\nEl volumen del del triangulo es %f: ",volumen(radio,altura));
  area(radio,altura);
  
  return 0;
}