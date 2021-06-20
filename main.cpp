#include <iostream>
#include "circuito.cpp"
using namespace std;
using namespace funcao;
int main() {
  tCircuito circuito1;

  circuito1.recebevalores(200,300,20);
  circuito1.calculo();
}