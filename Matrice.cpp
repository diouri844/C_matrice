#include"Matrice.hpp"
#include<stdio.h>
#include<stdlib.h>

Matrice::Matrice(int r,int column)
{
    this->row = r;
    this->column = column;
    // allocation : 
    this->data =(float**)malloc(this->row*sizeof(float*));
    for(int i=0;i<row;i++){
        this->data[i] = (float*)malloc(this->column*sizeof(float));
        for(int j=0;j<this->column;j++){
            //initialise a 0.0:
            this->data[i][j] = 0.0;
        }
    }
}

Matrice::Matrice(int r,int column,float base)
{
    this->row = r;
    this->column = column;
    // allocation : 
    this->data =(float**)malloc(this->row*sizeof(float*));
    for(int i=0;i<row;i++){
        this->data[i] = (float*)malloc(this->column*sizeof(float));
        for(int j=0;j<this->column;j++){
            //initialise a base :
            this->data[i][j] = base;
        }
    }
}

void Matrice::show()
{
    for(int i=0;i<row;i++){
        printf("\n ");
        for(int j=0;j<this->column;j++){
            printf("\t %.2f  ",this->data[i][j]);
        }
    }
}