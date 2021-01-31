#ifndef MIPSCODER_H
#define MIPSCODER_H

#include "global.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

using namespace std;



class MipsCoder{



vector<string>cPlusCode;
map<string, int> curFunctionMapping;

//determines the number of variables in function
int countVarFunc();
public:

MipsCoder(vector<string> code);

void startTranslating();

int createFunctionCode();

void arithmeticCode();

void ifStatementCode();

void takeInputCode();

void displayOutputCode();

void callFunctionCode();

void createVarCode();

}; 
#endif