#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    
    ifstream file;

    file.open("salary.txt");

    int lineCount = 0;
    string line;

    while (getline(file, line)) {
        lineCount++;
    }

    file.close();

    cout << lineCount << endl;
    
    return 0;
}
