#include "Televisao.h"
#include <iostream>
using namespace std;

int main(){
Televisao tv1,tv2;
tv1.setTv(10,10);
tv2.setTv(10,10);
tv1.setCanal("aumentar");
tv1.setVolume("diminuir");
tv2.setCanal("trocar");
tv2.setVolume("diminuir");
cout<<"Tv1 Canal: "<<tv1.getCanal()<<" Volume: "<<tv1.getVolume()<<endl;
cout<<"Tv2 Canal: "<<tv2.getCanal()<<" Volume: "<<tv2.getVolume()<<endl;



return 0;

}
