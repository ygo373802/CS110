#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   int a,add,l,s;
   double n = 1.0,av;
   if(cin >> a)
   {
   add = a;
   l = a;
   s = a;
   }
   while(cin >> a)
   {
    add = add + a;
    if(a < s)
    s = a;
    if(a > l)
    l = a;
    n++;
   }
   av = add / n;
   int d = l - s;
   cout << av << " " << l << " " << s << " " << d;


    return 0;
}