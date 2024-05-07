#include "FileCreator.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

FileCreator::FileCreator(string cityname)
{
	myfile.open(cityname);
}
void FileCreator::WriteFile(string CityName, double MiletoDrive, double GasPrice, int MPG, double TravelExpense)
{
	myfile << (CityName) << "," << MiletoDrive << "," << GasPrice << "," << MPG << "," << TravelExpense << endl;
}
void FileCreator::WriteHeader()
{
	myfile << "CityName, MiletoDrive, GasPrice, MPG, TravelExpense" << endl;
}
void FileCreator::CloseFile()
{
	myfile.close();
}