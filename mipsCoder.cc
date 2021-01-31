#include <iostream>
#include "mipsCoder.h"
#include <vector>
#include <vector>

int MipsCoder::countVarFunc()
{
}

MipsCoder::MipsCoder(vector<string> code) : cPlusCode{code} {}

void MipsCoder::startTranslating()
{
    for (auto line : cPlusCode)
    {
        curLine = 0;
        //analyze the line of code
        istringstream iss(line);

        string tempStr;
        iss >> tempStr;
        //variable or function declaration
        if ((tempStr == INT) || (tempStr == VOID) || (tempStr == CHAR))
        {
            //name or star
            iss >> tempStr;
            if (tempStr[0] == STAR)
                iss >> tempStr;
            //part we are interested that will allow to indentity type
            if (tempStr[tempStr.length() - 1] == ';')
            { //variable declaration
                createVarCode();
            }
            else
            { //function declaration

                createFunctionCode();
            }
        }
        else if (tempStr == "if" || tempStr.substr(0,3) == "if(")
        {
            ifStatementCode();
        }
        else if (tempStr == CIN || (tempStr.substr(0,5) == (CIN + ">>")) )
        {
            takeInputCode();
        }
        else if (tempStr == COUT || (tempStr.substr(0,6) == (COUT + "<<")))
        {
            displayOutputCode();
        }
        else
        {
            bool arithmetic = 0;
            //determine if there is an equal sign anywhere
            for (auto c : line)
            {
                if (c == '=')
                {
                    arithmeticCode();
                    arithmetic = 1;
                    break;
                }
            }
            if (arithmetic == 0)
            {
                callFunctionCode();
            }
        }
        curLine++;
    }
}

int MipsCoder::createFunctionCode(){
    //update 
    cout<<"create function"<<endl;

}

void MipsCoder::arithmeticCode(){
cout<<"arithmetic"<<endl;
//find in map what variable correponds to what register
//if you find a number then add it
//add two digits at a time

}

void MipsCoder::ifStatementCode(){

cout<<"if"<<endl;
}

void MipsCoder::takeInputCode(){
cout<<"cin"<<endl;
}

void MipsCoder::displayOutputCode(){

cout<<"cout"<<endl;
}

void MipsCoder::callFunctionCode(){
cout<<"function"<<endl;
}

void MipsCoder::createVarCode(){
cout<<"create variable"<<endl;
}