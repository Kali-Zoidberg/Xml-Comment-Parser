// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "XmlParse.h"
#include <ctime>
using namespace std;

int main()
{
	int start_time = 0;
	int stop_time = 0;

	
	XmlParse parser;
	string file_name = " ";
	string write_name = " ";

	do {
		cout << "Please enter the source file. \n";
		getline(cin, file_name);
	} while (!parser.setFileName(file_name)); //Loops until a valid file is found.
		start_time = clock();

		parser.openFile();
		parser.print();
		stop_time = clock();
		cout << "Operation complete. Run time: " << stop_time - start_time << endl;
		cout << "file name to write: " << endl;
		cin >> write_name;
		parser.writeToFile(write_name);
	return 0;
}

