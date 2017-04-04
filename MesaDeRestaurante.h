#ifndef MESADERESTAURANTE_H_INCLUDED
#define MESADERESTAURANTE_H_INCLUDED

class MesaDeRestaurante{

    private:
        vector Pedidos listaPedidos;//conjunto de pedidos
    public:
        void adicionaAoPedido();
        void zeraPedidos();
        float calculaTotal();


};


#endif // MESADERESTAURANTE_H_INCLUDED
