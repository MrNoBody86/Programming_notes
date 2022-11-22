#include <iostream>
#include <string>
using namespace std;

int main(){
    //If we know the exact times we are gonna execute the code we use for loop.
    //syntax
    /*
    for(statement 1; statement 2; statement 3){
        //code block to be executed
    }
    Statement 1 is executed (one time) before the execution of the code block.
    Statement 2 defines the condition for executing the code block.
    Statement 3 is executed (every time) after the code block has been executed.
    */
    for (int i=0;i<5;i++){
        cout<<i<<endl;
    }

    for (int j=0;j<10;j=j+2){
        cout<<j<<endl;
    }

    //Nested loops
    for(int x=0;x<=2;++x){               //outer loop
        cout<<"outer :"<<x<<endl;

        for(int y=0;y<=3;++y){           //inner loop
            cout<<"inner :"<<y<<endl;
        }
    }

    //foreach loop
    //for looping in an array
    //syntax
    /*
    for(type variableName : arrayName){
        //code block to be executed
    }
    */
    
    int myNumbers[5] = {3,6,9,11,13};
    for (int i : myNumbers){
        cout<<i<<endl;
    }
    return 0;
}