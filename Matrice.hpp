class Matrice
{
private:
    /* data */
    int row;
    int column;
    float** data;
public:
    Matrice(int nbr);
    // constructeur initialise tous les elements a 0.0:
    Matrice(int r,int column);
    // surcharge du constructeur :
    Matrice(int r,int column,float base);
    // methodes : 
    void  show();
    float max();
    float min();
    float get(int row,int column);
    void set(int row,int column,float value);
    // surcharge methodes:
    void show(int row,int column);
    float max(int row);
    float min(int row);
};


