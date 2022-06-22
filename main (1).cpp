/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int
main ()
{
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;
  int ans = 0;
  int i = 0;

  while (n != 0)
    {
      int bit = n & 1;
      ans = (bit * pow (10, i) + ans);
      n = n >> 1;
      i++;
    }
  cout << "answer is " << ans << endl;

  return ans;
}
