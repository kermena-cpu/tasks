#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("welcome.txt");

    f << "Hello Everybody";

    f.seekp(11, ios::beg);
    f<< "one ";
    f.close();

    return 0;
}
