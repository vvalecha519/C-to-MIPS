#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include "mipsCoder.h"

const string INT = "int";
const string VOID = "void";
const string CHAR = "char";
const string CIN = "CIN";
const string COUT = "COUT";
const char STAR = '*';

using namespace std;

//each function can have max 3 args  $1-$3
//$4 will be return register for function
//pointers should be type space * ie. int * ptr, not int* ptr;
//arithmetic requires equal sign no a++;

int main()
{
    vector<string> code;

    string s1;

    while (getline(cin, s1))
    {
        code.push_back(s1);
    }
    MipsCoder translate{code};
    translate.startTranslating();

    //program done !!!!!
}

