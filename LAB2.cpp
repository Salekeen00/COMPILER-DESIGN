#include <iostream>
#include <string>
#include <fstream>

using namespace std ;


bool isValid(const string& myText)
{

    if (isdigit(myText[0]))
        return false;

    string reservedKeywords[] = {"int", "float", "double", "string", "static", "public", "private"};

    int numKeywords = sizeof(reservedKeywords) / sizeof(reservedKeywords[0]);

    for (int i = 0; i < numKeywords; i++)
    {
        if (myText == reservedKeywords[i])
            return false;
    }

    for (int i = 0; i < myText.length(); i++)
    {
        char c = myText[i];
        if (!isalnum(c) && c != '_')
            return false;
    }

    return true;
}


int main ()

{
    string myText ;

    ifstream MyReadFile("sourcefile.txt");

    while (getline (MyReadFile, myText))
        {
            cout << "Given variable name is : " << myText << endl ;
        }

    MyReadFile.close() ;


    if (isValid(myText))
    {
        cout << "It's a valid name." << endl;
    }
    else
    {
        cout << "It's a invalid name." << endl;
    }

return 0;
}

