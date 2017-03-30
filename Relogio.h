#ifndef Relogio_H
#define Relogio_H
#include <iostream>
class Relogio{

    private:
        int horas,minutos,segundos;
    public:
        Relogio(int h,int m, int s);
        void setHorario(int h,int m,int s);
        int getHoras();
        int getMinutos();
        int getSegundos();
        void avancarHorario();
};
Relogio::Relogio(int h,int m,int s){
    horas= h;
    minutos= m;
    segundos= s;
}


#endif // Relogio_H
