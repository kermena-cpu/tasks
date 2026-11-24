#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    vector<string> data;
    string name;

    for (int i = 0; i < 4; i++)
    {
        getline(cin, name);
        data.push_back(name);
    }

    sort(data.begin(), data.end());

    ofstream output("sorted_names.txt");

    for (int i = 0; i < data.size(); i++)
        output << data[i] << endl;

    output.close();

    return 0;
}
