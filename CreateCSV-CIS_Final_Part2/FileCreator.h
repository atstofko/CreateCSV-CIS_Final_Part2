#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class FileCreator
{
private:
	ofstream myfile;
public:
	FileCreator(string);
	void WriteFile(string, double, double, int, double);
	void WriteHeader();
	void CloseFile();
};