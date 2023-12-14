#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    
    ifstream inputFile;
    ofstream outputFile;

    inputFile.open("salary.txt");
    outputFile.open("newSalary.txt");

    string lastName;
    string firstName;
    double salary;
    double salaryIncrease;

    while (inputFile >> lastName >> firstName >> salary >> salaryIncrease) {
        double updatedSalary = salary * (salaryIncrease / 100 + 1);

        outputFile << fixed << setprecision(2) << firstName << " " << lastName << " " << updatedSalary << endl;
    }


    inputFile.close();
    outputFile.close();

    cout << "Atlyginimai atnaujinti ir issaugoti newSalary.txt faile " << endl;

    return 0;
}
