/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;
 
 void number(int q[], int w){
    for (int i=0; i <w ; i++)
    {
     for (int j=2; j <= q[i]/2; j++)
     {
    if (q[i]%j == 0 && q[i] != j)
       {
     q[i] = 0;
      break;
        }
        }
        if (q[i] != 0)
        {
        cout << q[i] << " ";
        }
}
}
 int main(int argc, char * argv [])
{
    int e = 15;
    int *r = new int[e];
    
    for(int i = 0; i<e; i++){
        r[i] = rand()%25;
    }
    for(int i = 0; i<e; i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    
    number(r, e);
}