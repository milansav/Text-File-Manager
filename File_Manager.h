#pragma once
#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <string>

bool load(std::string arg);
std::string read(int lineNum);
int getLength();
bool createFile(std::string arg);
bool write(std::string arg);
bool closeFile();

#endif