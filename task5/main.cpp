#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt", ios::app);
    char name[20];
    int id;
    float grade;
    char choice;
    do {
    cout<<"Enter student name: ";
        cin.ignore();
    cin.getline(name, 20);
    cout<<"Enter student ID: ";
  cin>>id;
    cout<<"Enter student grade: ";
cin>>grade;
        file<<name<< ", " <<id<< ", " <<grade<< " . ";
cout<<"Add another student? (y/n): ";
        cin >> choice;
    } while(choice=='y'||choice=='Y');
    file.close();
    return 0;
}
