#include <iostream>
#include <string>
using namespace std;

int main(){
    //Conditional Statemants
    //if statement
    //only when specified condition is true
    //syntax
    /*if (condition) {
    // block of code to be executed if the condition is true
    }*/
    int x =20, y=10;
    if (x>y){
        cout<<"x is greater than y"<<endl;
    } 

    //else statement
    //only when specified condition is false
    //syntax
    /*if (condition) {
        // block of code to be executed if the condition is true
      } else {
        // block of code to be executed if the condition is false
      }
    */
    int time=20;
    if (time<18){
      cout<<"Good Day";
    }
    else{
      cout<<"Good evening"<<endl;
    }

    //else if statement
    //to specify condition when first condition is false 
    //syntax
    /* if (condition1) {
    // block of code to be executed if condition1 is true
    } else if (condition2) {
    // block of code to be executed if the condition1 is false and condition2 is true
    } else {
    // block of code to be executed if the condition1 is false and condition2 is false
    } */
    int time1=22;
    if (time1<10){
        cout<<"Good Morning";
    }
    else if(time1>20){
        cout<<"Good Day"<<endl;
    }
    else {
        cout<<"Good evening";
    }

    //short hand if else
    //ternary operator(consists of three oprands)
    //syntax
    /*
    variable = (condition) ? expresionTrue : expresionFalse;
    */
   int time2=20;
   string result= (time<10) ? "good day" : "good evening";
   cout<<result;

    return 0;

}
