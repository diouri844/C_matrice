#include"Matrice.hpp"
#include<stdio.h>
#include<stdlib.h>


Matrice::Matrice(int nbr)
{
    this->row = nbr;
    this->column = nbr;
    // allocation : 
    this->data =(float**)malloc(this->row*sizeof(float*));
    for(int i=0;i<row;i++){
        this->data[i] = (float*)malloc(this->column*sizeof(float));
        printf("\n ");
        for(int j=0;j<this->column;j++){
            printf("\t tab[%d][%d] :   ",i,j);
            scanf("%f",&this->data[i][j]);
        }
    }
}

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
    for(int i=0;i<this->row;i++){
        printf("\n ");
        for(int j=0;j<this->column;j++){
            printf("\t %.2f  ",this->data[i][j]);
        }
    }
}

void Matrice::show(int row,int column)
{   if(row<=this->row && column<=this->column)
    {   
        for(int i=0;i<row;i++)
        {
            printf("\n ");
            for(int j=0;j<column;j++)
            {
                printf("\t %.2f  ",this->data[i][j]);
            }
        }
    }
}

float Matrice::max()
{
    float max = 0.0;
    for(int i=0;i<this->row;i++)
    {
        for(int j=0;j<this->column;j++)
        {
            if(this->data[i][j] > max)
            {
                max = this->data[i][j];
            }
        }
    }
    return max;
}

float Matrice::min()
{
    float min = this->max();
    for(int i=0;i<this->row;i++)
    {
        for(int j=0;j<this->column;j++)
        {
            if(this->data[i][j] < min)
            {
                min = this->data[i][j];
            }
        }
    }
    return min;
}

float Matrice::max(int row)
{
    if(row <= this->row)
    {
        float max = 0.0;
        for(int j=0;j<this->column;j++)
        {
            if(this->data[row][j]> max)
            {
                max = this->data[row][j];
            }
        }
        return max;
    }
}

float Matrice::min(int row)
{
    if(row <= this->row)
    {
        float min = this->max();
        for(int j=0;j<this->column;j++)
        {
            if(this->data[row][j]<min)
            {
               min= this->data[row][j]; 
            }
        }
        return min;
    }
}

float Matrice::get(int row,int column)
{   
    if(row <= this->row && column <= this->column)
    {   
        return this->data[row][column];
    }
}

void Matrice::set(int row,int column,float value)
{
    if(row <= this->row && column <= this->column)
    {   
        this->data[row][column] = value;
    }
}

float* Matrice::get(int row){
    if(row <= this->row){
        float* resultat = (float*)malloc(this->column*sizeof(float));
        for(int i=0;i<this->row;i++){
            resultat[i] = this->data[row][i];
        }
        return resultat;
    }
}

float* Matrice::get_column(int column){
    if(column <= this->column){
        float* resultat = (float*)malloc(this->column*sizeof(float));
        for(int i =0;i<row;i++){
            resultat[i] = this->data[i][column];
        }
        return resultat;
    }

}

