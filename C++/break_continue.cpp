#include <iostream>
#include <string>
using namespace std;

int main(){
    //Break
    //"jumps out"
    //can be used to jump out of a loop
    for (int i = 0;i<10;++i){
        if(i == 4){
            break;
        }
        cout<<i <<endl;
    }

    int x =0;
    while(x<10){
        cout <<x <<endl;
        x++;
        if (x==4){
            break;
        }
    }

    //continue
    //skips the specified condition and continue executing the code.

    for (int j =0;j<10;++j){
        if(j %2 ==0){
            continue;
        }
        cout<<j<<endl;
    }
    int y=0;
    while(y<10){
        if (y==4){
            y++;
            continue;
        }
        cout <<y <<endl;
        y++;
        
    }
    return 0;
}