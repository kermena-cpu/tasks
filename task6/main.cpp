#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main() {
 ofstream file("grades.txt");
    int grade;
    for(int i=0;i<5;i++) {
        cin>>grade;
        file<<grade<<endl;
    }
    file.close();
    ifstream in("grades.txt");
  cout << "Grades: ";
    while(in>>grade) {
        cout<<grade<<" ";
    }
    in.close();
 int x;
    cout<<"enter grade to delete: ";
   cin>>x;
    ifstream f("grades.txt");
    ofstream t("temp.txt");
    while(f>> grade) {
        if(grade!= x)
            t<<grade<<endl;
            }
    f.close();
    t.close();
    remove("grades.txt");
    rename("temp.txt", "grades.txt");
    cout<<"Deleted ";
    return 0;
}
