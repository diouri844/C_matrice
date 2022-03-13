#include"Matrice.hpp"
#include<stdio.h>

int main(){
    Matrice M1(4,4);
    M1.show();
    M1.set(0,0,5.0);
    M1.set(1,1,6.0);
    M1.set(2,2,7.0);
    M1.set(3,3,8.0);
    M1.show();
    return 0;
}