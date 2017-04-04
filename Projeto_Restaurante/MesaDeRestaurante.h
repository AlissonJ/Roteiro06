#ifndef MESADERESTAURANTE_H_INCLUDED
#define MESADERESTAURANTE_H_INCLUDED
#include <vector>
#include "Pedido.h"
using namespace std;

class MesaDeRestaurante{

    private:
        int NumMesa;
        vector <Pedido> listaPedidos;//conjunto de pedidos
    public:
        void adicionaAoPedido(int n,string d,int q, float p);
        void zeraPedidos();
        float calculaTotal();
        int getNumMesa();
        void setNumMesa(int num);


};


#endif // MESADERESTAURANTE_H_INCLUDED
