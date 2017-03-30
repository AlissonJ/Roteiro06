#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED
#include<string>
using namespace std;
class Televisao{

    private:
        int volume;
        int canal;

    public:
        void setTv(int v,int c);
        void setVolume(string v);
        void setCanal(string c);
        int getVolume();
        int getCanal();


};


#endif // TELEVISAO_H_INCLUDED
