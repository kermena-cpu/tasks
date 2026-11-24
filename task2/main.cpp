#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string n1, n2, n3;

    cin>>n1>>n2>>n3;
    ofstream fruit("fruit.txt");
    fruit<<n1<<endl;
fruit<<n2<<endl;
    fruit<<n3<<endl;
    fruit.close();
    ofstream t("fruit.txt", ios::app);
    t<<"Fresh Fruits";

    t.close();

    return 0;
}
