#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   string a;
   char b;
   int n = 0;
   getline(cin,a);
   while(n < a.length())
   {
    b = a[n];
    b = tolower(b);
    if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')
    cout << n << " ";
    n++;
   }

    return 0;
}