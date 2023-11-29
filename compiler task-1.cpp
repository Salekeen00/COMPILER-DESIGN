#include <iostream>
#include <string>
using namespace std ;

int main ()
{
    string exp ;

    cout << "Enter An Expression : ";
    cin >> exp ;

    cout << "The Arithmetic Operators Are   : ";

    for (char op : exp)
    {
        if (op=='+'
        || op=='-'
        || op=='*'
        || op=='/'
        || op=='%'
        || op=='=')
        {
            cout << op << " ";
        }
    }
    cout << endl;
return 0;
}

