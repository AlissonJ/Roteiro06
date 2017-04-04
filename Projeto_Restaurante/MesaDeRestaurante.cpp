#include "MesaDeRestaurante.h"
#include <vector>
using namespace std;


void MesaDeRestaurante::adicionaAoPedido(int n,string d,int q, float p){
    listaPedidos.push_back(Pedido(n,d,q,p));
}


void MesaDeRestaurante::zeraPedidos(){
    listaPedidos.clear();
}
float MesaDeRestaurante::calculaTotal(){
    float precoTotal= 0;
    for(int j=0;j<listaPedidos.size();j++){
        int qnt = listaPedidos[j].getQuantidade();
        float precoParcial = (qnt * listaPedidos[j].getPreco() );
        precoTotal = (precoTotal + precoParcial);
    }
    return precoTotal;
}
int MesaDeRestaurante::getNumMesa(){
    return NumMesa;
}

void MesaDeRestaurante::setNumMesa(int num){
    NumMesa = num;
}

