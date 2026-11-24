#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct dat {
    string name;
    int age;
};

int main() {
    int size, ma=0, mi=100000;
    cin>>size;
    string n1, n2;
    vector<dat> t(size);
    ofstream file("welcome.txt");
    for(int a=0; a<size; a++) {
        cin>>t[a].name;
        cin>>t[a].age;
        file<<t[a].name<<endl;
        file<<t[a].age<<endl;
    }



    file.close();
    ifstream f("welcome.txt");

    for(int a=0; a<size; a++) {
        f>>t[a].name;
        f>>t[a].age;
        if(ma<t[a].age) {
    ma=t[a].age;
        n1=t[a].name;
        }

        if(mi>t[a].age) {
            mi=t[a].age;
            n2=t[a].name;
        }
    }

    f.close();
    ofstream result("results.txt");
     result<<ma<<endl<<n1<<endl;
      result<<mi<<endl<<n2<<endl;
    result.close();
    return 0;
}
