/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"the value from 1 to "<<n<<endl;
    int i=1;
    
    for (;;)
    if(i<=n)
    {
    cout<<i++<<endl;
    }
    else{
        break;
    }
    
    return 0;
    
}
