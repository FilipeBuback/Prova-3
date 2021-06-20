#include<iostream>

using namespace std;
namespace funcao{


  struct tCircuito{
    float r1;
    float r2;
    float v1;
    float serie;
    float corrente_serie;
    float potencia_serie;
    float paralelo;
    float corrente_paralelo;
    float potencia_paralelo;
    void recebevalores(float R1,float R2, float V1){
      r1=R1;
      r2=R2;
      v1=V1;

    }
    void calculo(){
      serie=r1+r2;
      corrente_serie=v1/serie;
      potencia_serie=v1*corrente_serie;
      paralelo=((r1+r2)/(r1*r2));
      corrente_paralelo=v1/paralelo;
      potencia_paralelo=v1*corrente_paralelo;
      cout<< "Resultado da resistência em série" << serie << endl;
      cout<< "Resultado da corrente em série" << corrente_serie << endl;
      cout<< "Resultado da potência em série" << potencia_serie << endl;
      cout<< "Resultado da resistência em paralelo" << paralelo << endl;
      cout<< "Resultado da corrente em série" << corrente_paralelo << endl;
      cout<< "Resultado da potência em série" << potencia_paralelo << endl;
  }
 }
}