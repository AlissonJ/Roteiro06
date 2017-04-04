#include "Pedido.h"
using namespace std;

Pedido::Pedido(int n,string d,int q, float p){
    Pedido::numero = n;
    Pedido::descricao = d;
    Pedido::quantidade = q;
    Pedido::preco = p;
}

int Pedido::getNumero(){
    return Pedido::numero;
}

void Pedido::setNumero(int n){
    Pedido::numero = n;
}

string Pedido::getDescricao(){
    return Pedido::descricao;
}

void Pedido::setDescricao(string d){
    Pedido::descricao = d;
}

int Pedido::getQuantidade(){
    return Pedido::quantidade;
}

void Pedido::setQuantidade(int q){
    Pedido::quantidade = q;
}

float Pedido::getPreco(){
    return Pedido::preco;
}

void Pedido::setPreco(float p){
    Pedido::preco = p;
}
