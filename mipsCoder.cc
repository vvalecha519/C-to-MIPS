#include <iostream>
#include "mipsCoder.h"
#include <vector>
#include <vector>



int MipsCoder::countVarFunc(){

}

MipsCoder::MipsCoder(vector<string> code):cPlusCode{code} {}

void MipsCoder::startTranslating(){
    for (auto line : cPlusCode)
    {
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
        else if (tempStr == "if")
        {
            ifStatementCode();
        }
        else if (tempStr == CIN)
        {
            takeInputCode();
        }
        else if (tempStr == COUT)
        {
            displayOutputCode();
        }
        else if (tempStr == COUT)
        {
            takeInputCode();
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
    }

}

int MipsCoder::createFunctionCode(){

}

void MipsCoder::arithmeticCode(){

}

void MipsCoder::ifStatementCode(){

}

void MipsCoder::takeInputCode(){

}

void MipsCoder::displayOutputCode(){

}

void MipsCoder::callFunctionCode(){

}

void MipsCoder::createVarCode(){

}