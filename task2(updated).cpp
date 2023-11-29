#include <iostream>
#include <string>
using namespace std;

bool checkNumeric(string input)
{
    for (char c : input)
    //for (int i=0 ; i<input.length() ; i++)

    {
        if (c<'0' || c>'9')
        {
            if (c!='.' || input.find('.') != input.rfind('.'))
            {
                return false ;
            }
        }
    }
    return true ;
}

int main ()
{
    string input ;

    cout << "Enter your input : ";
    cin >> input ;

    if (checkNumeric(input))
    {
        cout << "The input is NUMERIC";
    }
    else
    {
        cout << "The input is NON-NUMERIC";
    }

return 0;
}


