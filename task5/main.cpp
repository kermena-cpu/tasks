#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("students.txt");

    string name;
    int id;
    float grade;
    char choice;

    do
    {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);

        cout << "Enter Student ID: ";
        cin >> id;

        cout << "Enter Student Grade: ";
        cin >> grade;

        file << name << ", " << id << ", " << grade << " $";

        cout << "\nDo you want to add another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    file.close();

    cout << "\nRecords saved successfully.";

    return 0;
}
