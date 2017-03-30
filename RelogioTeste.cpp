#include "Relogio.cpp"
#include <iostream>
using namespace std;

int main(){
Relogio priRelogio(22,15,25);
Relogio segRelogio(23,58,59);
Relogio terRelogio(11,59,59);

cout<<"Relogio 1 -> "<<priRelogio.getHoras()<<":"<<priRelogio.getMinutos()<<":"<<priRelogio.getSegundos()<<endl;
priRelogio.avancarHorario();
cout<<"Novo Relogio 1 -> "<<priRelogio.getHoras()<<":"<<priRelogio.getMinutos()<<":"<<priRelogio.getSegundos()<<endl;
segRelogio.avancarHorario();
segRelogio.avancarHorario();
cout<<"Relogio 2 -> "<<segRelogio.getHoras()<<":"<<segRelogio.getMinutos()<<":"<<segRelogio.getSegundos()<<endl;
terRelogio.avancarHorario();
cout<<"Relogio 3 -> "<<terRelogio.getHoras()<<":"<<terRelogio.getMinutos()<<":"<<terRelogio.getSegundos()<<endl;
return 0;
}
