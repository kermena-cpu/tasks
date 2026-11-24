
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream k("student.txt");
    string name;
    int id, grade;

    getline(cin, name);
    cin>>id>>grade;

k<<name<<endl;
 k<<id<<endl;
 k<<grade;

    k.close();

    return 0;
}
