#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "File_Manager.h"

using namespace std;


ifstream ifile;
ofstream ofile;
list<string> lines;
int length = 0;

bool load(string arg) 
{
	ifile.open(arg);
	if (ifile.is_open()) 
	{
		string temp_line;
		while (getline(ifile, temp_line)) 
		{
			length++;
			lines.push_back(temp_line);
			temp_line = "";
		}
		return true;
	}
	else
	{
		return false;
	}
	ifile.close();
}

string read(int lineNum)
{

	list<string>::iterator it;
	int num = 0;

	for (it = lines.begin(); it != lines.end(); ++it)
	{

		if (num == lineNum)
		{
			return it->c_str();
		}

		num++;
	}

	return "";
}

int getLength() 
{
	return length;
}

bool createFile(string arg)
{
	ofile = ofstream(arg);

	if (ofile.is_open()) 
	{
		return true;
	}

	return false;
}

bool write(string arg) 
{
	ofile << arg;
	return true;
}

bool closeFile() 
{
	ofile.close();
	if (ofile.is_open()) 
	{
		return false;
	}
		return true;
}