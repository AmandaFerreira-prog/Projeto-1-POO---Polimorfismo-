#include <iostream>
#include <vector>
#include "fila.h"
using namespace std;

int main() {
cout<<"--------------------------------"<<endl;cout<<"Teste 1: Fila de inteiros"<<endl;
cout<<"--------------------------------"<<endl;
Fila <int,5> teste;
teste.inserir(65);
teste.inserir(75);
teste.inserir(85);
teste.inserir(95);
teste.inserir(15);
teste.exibirFila();
teste.remover();
teste.exibirFila();
cout<<"--------------------------------"<<endl;
cout<<"Teste 2: Fila de floats"<<endl;
cout<<"--------------------------------"<<endl;

Fila <float,4> test2;
test2.inserir(15.5);
test2.inserir(25.6);
test2.inserir(30.1);
test2.inserir(50.0);
test2.inserir(98.3);
test2.exibirFila();
test2.remover();
test2.remover();
test2.exibirFila();
cout<<"--------------------------------"<<endl;
cout<<"Teste 3:"<<endl;
cout<<"--------------------------------"<<endl;
Fila <float,3> test3;
test3.remover();
test3.exibirFila();

return 0;

}
