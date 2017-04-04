#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED
#include<string>
using namespace std;

class Pedido{

    private:
        int numero;
        string descricao;
        int quantidade;
        float preco;

    public:
        Pedido(int n,string d,int q,float p);
        int getNumero();
        void setNumero(int n);
        string getDescricao();
        void setDescricao(string d);
        int getQuantidade();
        void setQuantidade(int q);
        float getPreco();
        void setPreco(float p);


};

#endif // PEDIDO_H_INCLUDED
