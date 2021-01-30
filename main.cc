#include <iostream>
#include <vector>
#include <string>
#include <map>

const string INT = "int";
const string VOID = "void";
const string CHAR = "char";
const string STAR = "*";

using namespace std;

//each function can have max 3 args  $1-$3
//$4 will be return register for function

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
        //new function
        if ()
        { // new function
        }
        else if ()
        { //variable
        }
        else if ()
        { //if statement
        }
        else if ()
        { // pointers
        }
        else if ()
        { //arithmetic
        }
        else if ()
        { //display to screen
        }
        else if ()
        { //take input
        }
        else if ()
        { //call function
        }
    }
}

//determines the number of variables in function
int countVarFunc(){

}


int createVarFunc(){

}


int createPointerVarFunc(){

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
