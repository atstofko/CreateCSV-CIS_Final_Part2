#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "FileCreator.h"
#include <windows.h>
using namespace std;

int main()
{
    double MiletoDrive, GasPrice, TravelExpense;
    int MPG;
    string CityName[] = { "Washington DC","Miami","Dallas","Maria Houston","Indianapolis" };
    string fileName;
    cout << "Enter the file name (include .csv at the end): ";
    getline(cin, fileName);
    FileCreator f1(fileName);
    f1.WriteHeader();
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter sale data for the " << CityName[i] << " trip:\n\n";
        cout << "Enter the Miles you will drive: ";
        cin >> MiletoDrive;
        cout << "Enter the current Gas Price: ";
        cin >> GasPrice;
        cout << "Enter the Mile Per Gallon your car gets: ";
        cin >> MPG;
        TravelExpense = ((MPG+MiletoDrive)/GasPrice);
        f1.WriteFile(CityName[i], MiletoDrive, GasPrice, MPG, TravelExpense);
    }
    f1.CloseFile();
}