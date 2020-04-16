/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

using namespace std;

void frame(int q, int w, int e){
    for(int i = 0; i<w; i++){
        for(int s = 0; s<q; s++){
            cout<<"*";
            for(int a = 0; a<e; a++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    frame(4, 2, 3);
}