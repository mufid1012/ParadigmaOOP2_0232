#include <iostream>
using namespace std;

class Orang
{
public:
    int umur;

    Orang(int pUmur) :
        umur(pUmur)
    {
        cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
    }
};