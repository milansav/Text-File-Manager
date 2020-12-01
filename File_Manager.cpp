#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "File_Manager.h"


std::ifstream ifile;
std::ofstream ofile;
std::vector<std::string> lines;
int length = 0;

bool load(std::string arg) 
{
	ifile.open(arg);
	if (ifile.is_open()) 
	{
		std::string temp_line;
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

std::string read(int lineNum)
{

	if(!ifile.is_open()) return "";

	if(lineNum > lines.size()) std::cout << "Line number is out of bounds!" << std::endl;

	for (int i = 0; i < lines.size(); i++)
	{
		if(i == lineNum) return lines[i];
	}

	return "";
}

int getLength() 
{
	return length;
}

bool createFile(std::string arg)
{
	ofile = std::ofstream(arg);

	if (ofile.is_open()) return true;

	return false;
}

bool write(std::string arg) 
{
	ofile << arg;
	return true;
}

bool closeFile(char c) 
{
	if(c == 'i')
	{
		ifile.close();
		if(ifile.is_open()) return false;
		return true;
	}
	if(c == 'o')
	{
		ofile.close();
		if(ofile.is_open()) return false;
		return true;
	}
}