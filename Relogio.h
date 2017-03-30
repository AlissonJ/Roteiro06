#ifndef Relogio_H
#define Relogio_H

class Relogio{

    private:
        int horas,minutos,segundos;
    public:
        void setHorario(int h,int m,int s);
        int getHoras();
        int getMinutos();
        int getSegundos();
        void avancarHorario();
};



#endif // Relogio_H
