#include "Relogio.h"
#include <iostream>
using namespace std;

int main(){
Relogio c1,c2,c3;
c1.setHorario(12,13,14);
c2.setHorario(23,58,59);
c3.setHorario(11,59,59);

cout<<"Relogio 1 -> "<<c1.getHoras()<<":"<<c1.getMinutos()<<":"<<c1.getSegundos()<<endl;
c1.avancarHorario();
cout<<"Novo Relogio 1 -> "<<c1.getHoras()<<":"<<c1.getMinutos()<<":"<<c1.getSegundos()<<endl;
c2.avancarHorario();
c2.avancarHorario();
cout<<"Relogio 2 -> "<<c2.getHoras()<<":"<<c2.getMinutos()<<":"<<c2.getSegundos()<<endl;
c3.avancarHorario();
cout<<"Relogio 3 -> "<<c3.getHoras()<<":"<<c3.getMinutos()<<":"<<c3.getSegundos()<<endl;
return 0;
}
