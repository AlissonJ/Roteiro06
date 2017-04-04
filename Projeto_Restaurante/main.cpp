#include <iostream>
#include"RestauranteCaseiro.h"
using namespace std;

int main()
{
RestauranteCaseiro res01;
res01.adicionaAoPedido(1,1,"Agua",2,1.50);
float total = res01.calculaTotalRestaurante();
cout.precision(2);
cout<<fixed<< total<<endl;

res01.zeraRestaurante();

total = res01.calculaTotalRestaurante();
cout.precision(2);
cout<<fixed<< total<<endl;





    return 0;
}
