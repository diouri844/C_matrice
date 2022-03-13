class Matrice
{
private:
    /* data */
    int row;
    int column;
    float** data;
public:
    // constructeur initialise tous les elements a 0.0:
    Matrice(int r,int column);
    // surcharge du constructeur :
    Matrice(int r,int column,float base);
    // methodes : 
    void  show();
};


