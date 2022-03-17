#include"Matrice.hpp"
#include<stdio.h>
#include<stdlib.h>

int main(){
    Matrice M1(4,4);
    M1.set(0,0,5.0);
    M1.set(0,1,5.0);
    M1.set(0,2,5.0);
    M1.set(0,3,5.0);
    M1.set(1,1,6.0);
    M1.set(2,2,7.0);
    M1.set(3,3,8.0);
    M1.show();
    float* row_1 = M1.get(0);
    float* column_1 = M1.get_column(2);
    for(int i=0;i<sizeof(row_1);i++){
        printf("\n ---> %.2f",row_1[i]);
    }
    printf("\n");
    for(int i=0;i<sizeof(column_1);i++){
        printf("\n ---> %.2f",column_1[i]);
    }
    return 0;
}