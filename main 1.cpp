



#include <iostream>
#include <math.h>
using namespace std;

int number(int q[], int w, int e){
    for(int i = 0; i<w; i++){
        if(q[i]==e){
            return i;
           }
           }
    return -1;
           }

int main()
{
    int w = 10;
    int *q = new int[w];
  for(int i = 0; i<w; i++){
        q[i] = rand()%10;
          }
    for(int i = 0; i<w; i++){
        cout<<q[i]<<" ";
          }
    cout<<endl;
    
    cout<<"number: "<<number(q, w, 2);
    
}
