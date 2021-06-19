#include<iostream>

using namespace std;

struct tCircuito{

float R1;
float R2;
float V1;
float serie;
float corrente_serie;
float potencia_serie;
float paralelo;
float corrente_paralelo;
float potencia_paralelo;

serie=R1+R2;
corrente_serie=V1/serie;
potencia_serie=V1*corrente_serie;
paralelo=((R1+R2)/(R1*R2));
corrente_paralelo=V1/paralelo;
potencia_paralelo=V1*corrente_paralelo

}