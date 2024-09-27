#include <iostream>
using namespace std;

void resizeTable(int *tablica,int newSize)
{
    tablica = (int *)realloc(tablica, newSize * sizeof(int));
}

int main()
{
    long long stotysiency = 100;
    int *tablica = (int *)malloc(stotysiency * sizeof(int));
    for (int i = 0; i < stotysiency; i++)
    {
        tablica[i] = i;
    }

    resizeTable(tablica,200);
    for (int i = 0; i < 200; i++)
    {
        cout << tablica[i] <<",";
    }
    
    free(tablica);
}