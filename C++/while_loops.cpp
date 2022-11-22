#include <iostream>
#include <string>
using namespace std;

int main(){
    //loops execute a block of code as long as specified condition is reached. 
    //loops are handy because they save time , reduce errors , and they make code more readable.
    //While loop

    //while loops execute a block of code as long as specified condition is true.
    //syntax
    /*
    while(condition){
        //code block to be executed
    }
    */
    int i =0;
    while(i<5){
        cout<<i<<endl;
        i++;
    }

    //Do-While
    
    //It executes a block of code once then execute it again if the given condition is true.
    //A code will be executed even if the condition is false 
    //syntax
    /*
    do{
        //code block to be executed
    }
    while(condition);
    */
    int j=5;
    do{
        cout<<j<<"\n";
        j++;
    }while(j<11);

    //Do not forget to increase the variable in the condition, otherwise the loop will never end!

    return 0;
}
