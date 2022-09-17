#include <iostream>
#include <vector>
using namespace std;

template<class Tipo,int tamanho>
class Fila{
  public:
    void inserir(Tipo n);
    bool remover();
    void exibirFila();
  private:
    vector <Tipo> fila;
};

template<class Tipo,int tamanho>
void Fila<Tipo,tamanho>::inserir(Tipo n){
  if (fila.size()==tamanho){
    cout<<"fila lotada!"<<endl;
  }
  else {
    if (n>60 && not fila.empty()){
      if (fila.front()<60){
        fila.insert(fila.begin(),n);
        cout<<n<<" inserido na fila!"<<endl;}
      else{
        for (int i=0;i<fila.size();i++){
          if(fila[i]>=60 && fila[i+1]<60){
            fila.insert(fila.begin()+i+1,n);
            cout<<n<<" inserido na fila!"<<endl;
            break;}
        }
      }
    } 
    else{
      fila.push_back(n);
      cout<<n<<" inserido na fila!"<<endl;}
  }
  
}

template<class Tipo,int tamanho>
bool Fila<Tipo,tamanho>::remover(){
  if(fila.empty()){
    cout<<"Fila vazia!"<<endl;
  }
  else{
    fila.erase(fila.begin());
    return true;
  }
  return false;
}

template<class Tipo,int tamanho>
void Fila<Tipo,tamanho>::exibirFila(){
  if(fila.empty()){
    cout<<"Fila vazia!"<<endl;
  }
  else{
    for (int i=0;i<fila.size();i++){
      cout<<fila[i]<<" ";
    }
    cout<<endl;
  }
}
