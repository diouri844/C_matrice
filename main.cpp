#include"Matrice.hpp"
#include<stdio.h>
#include<stdlib.h>

int main(){
    Matrice M1(4,4);
    M1.set(0,0,5.0);
    M1.set(0,1,4.0);
    M1.set(0,2,3.0);
    M1.set(0,3,2.0);
    M1.set(1,1,6.0);
    M1.set(1,2,4.0);
    M1.set(1,3,7.0);
    M1.set(2,2,7.0);
    M1.set(2,1,1.0);
    M1.set(2,3,4.0);
    M1.set(3,3,8.0);
    M1.set(3,1,6.0);
    M1.set(3,2,5.0);
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
    M1.sort();
    M1.show();
    // extract 1 row with 3 column :
    printf("\n \n extract som rows :    ");
    Matrice extract = M1.extract(1,3);
    extract.show();
    printf("\n \n etxract sum  :   %.2f ",extract.sum());
    return 0;
}