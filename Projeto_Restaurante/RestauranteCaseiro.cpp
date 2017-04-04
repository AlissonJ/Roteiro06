#include "RestauranteCaseiro.h"
#include<vector>
using namespace std;

void RestauranteCaseiro::adicionaAoPedido(int numMesa,int numPedido,string descricao,int qnt,float preco){
    MesaDeRestaurante mesa;
    mesa.setNumMesa(numMesa);
    mesa.adicionaAoPedido(numPedido,descricao,qnt,preco);
    listaMesas.push_back(mesa);
}


float RestauranteCaseiro::calculaTotalRestaurante(){
    float totalRestaurante=0;
    for(int i=0;i<listaMesas.size();i++){
        float totalParcial = listaMesas[i].calculaTotal();
        totalRestaurante = totalRestaurante + totalParcial;
    }
    return totalRestaurante;
}
void RestauranteCaseiro::zeraRestaurante(){
    listaMesas[0].zeraPedidos();
    listaMesas.clear();
}
