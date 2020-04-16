


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
