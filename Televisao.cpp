#include "Televisao.h"
#include<string>
#include <iostream>
using namespace std;

void Televisao::setTv(int v,int c){
    Televisao::volume= v;
    Televisao::canal= c;
}

void Televisao::setVolume(string v){
    if(v=="aumentar"){
        Televisao::volume++;
    }
    if(v=="diminuir"){
        Televisao::volume--;
    }
}
void Televisao::setCanal(string c){
    if(c=="aumentar"){
        Televisao::canal++;
    }
    if(c=="diminuir"){
        Televisao::canal--;
    }
    if(c=="trocar"){
        int num;
        cout<<"Informe o numero do canal: ";
        cin>>num;
        Televisao::canal=num;
    }
}
int Televisao::getVolume(){
    return Televisao::volume;
}
int Televisao::getCanal(){
    return Televisao::canal;
}


