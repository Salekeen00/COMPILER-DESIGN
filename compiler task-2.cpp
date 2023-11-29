#include <iostream>
using namespace std;
bool check_number(string num)
{

   for (int i = 0; i < num.length(); i++)

   if (num[i] == false)

      return false;

      return true;

}
int main() {

   string num;
   cout << "Enter a num: ";

   cin >> num;
   if (check_number(num))

      cout << "This is a Numeric " ;

   else

      cout << "This is not a Numeric "

      << endl;

      return 0;
}

