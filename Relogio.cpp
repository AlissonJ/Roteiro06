#include "Relogio.h"
using namespace std;

void Relogio::setHorario(int h,int m,int s){
    Relogio::horas= h;
    Relogio::minutos= m;
    Relogio::segundos= s;
}
int Relogio::getHoras(){
    return Relogio::horas;
}
int Relogio::getMinutos(){
    return Relogio::minutos;
}
int Relogio::getSegundos(){
    return Relogio::segundos;
}
void Relogio::avancarHorario(){
    segundos++;
    if(segundos > 59){
        minutos++;
        segundos = 0;
    }
    if(minutos > 59){
        horas++;
        minutos = 0;
    }
    if(horas > 23){
        horas = 0;
    }
}



