#include <iostream>

#include <fstream>
using namespace std;

int main()
{
    string a, b, o;

    ifstream k("fruit.txt");

    k >> a;
    k>> b;
    k>> o;

    k.close();

    ofstream kk("fruit.txt", ios::app);

    kk << "\nFresh Fruits";

    kk.close();

    return 0;
}

