#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>

const string INT = "int";
const string VOID = "void";
const string CHAR = "char";
const char STAR = '*';

using namespace std;

//each function can have max 3 args  $1-$3
//$4 will be return register for function
//pointers should be type space * ie. int * ptr, not int* ptr;

int main()
{
    vector<string> html;
    vector<string> search;
    map<string, int> varToReg;

    string s1;

    while (getline(cin, s1))
    {
        html.push_back(s1);
    }

    for (auto line : html)
    {
        //anaylze the line of code
     istringstream iss(line);

do
{
    string tempStr;
    iss>>tempStr;
    //variable or function declaration
   if((tempStr == INT) || (tempStr == VOID) || (tempStr == CHAR)) {
       //name or star
    iss>>tempStr;
    if(tempStr[0] == STAR) iss>>tempStr;

    //part we are interested that will allow to indentity type
    iss>>tempStr;
    if(tempStr[tempStr.length()-1] == ';'){ //variabla declaration
createVarCode();
    } else{ //function declaration

createFunctionCode();
    }
break;
   } else if (tempStr == "if"){
       ifStatementCode();
   }



} while (iss);
    }



//determines the number of variables in function
int countVarFunc(){

}


int createVarCode(){

}


int createFunctionCode(){

}

void arithmeticCode(){

}


void ifStatementCode(){

}

void takeInputCode(){

}


void displayOutputCode(){

}


void callFunctionCode(){

}
