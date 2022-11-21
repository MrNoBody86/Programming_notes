#include <iostream>
#include <string>
using namespace std;

int main(){
    // use switch statement when one of many code blocks is to  be executed.
    //syntax
    /*
    switch(expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
    }
    */
   int day =4;
   switch(day){
        case1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default :
        cout<<"";

   }
    return 0;

}
