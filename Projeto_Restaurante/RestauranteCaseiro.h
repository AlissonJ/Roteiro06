#ifndef RESTAURANTECASEIRO_H_INCLUDED
#define RESTAURANTECASEIRO_H_INCLUDED
#include <vector>
#include "MesaDeRestaurante.h"
using namespace std;
class RestauranteCaseiro{

    private:

        vector <MesaDeRestaurante> listaMesas;
    public:
        void adicionaAoPedido(int numMesa,int numPedido,string descricao,int qnt,float preco);//add quantidade ao item, chama o metodo adicionaAoPedido da mesa
        float calculaTotalRestaurante();//soma dos pedidos de todas as mesas
        void zeraRestaurante();
};

#endif // RESTAURANTECASEIRO_H_INCLUDED
