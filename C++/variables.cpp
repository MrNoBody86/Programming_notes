#include <iostream>
using namespace std;
//without including string 
int main(){
    int a = 69;
    a = 11;
    double b;
    b = 6.9;
    char c;
    c='s';
    string d;
    d = "come onnn";
    bool isit = true ;
    cout<< a << endl <<b <<endl <<c <<endl <<d <<endl << isit;
    int myAge=19;
    cout <<endl <<"I am " <<myAge << " years old"<<endl;
    int l = 5;
    int k = 6;
    int sum = l+k;
    cout << sum <<endl;
    //declare many variables
    int x = 6, y =9 , z=54;
    cout<< x + y +z<<endl ;  
    //one value many variables
    int x1,x2,x3;
    x1=x2=x3=23;
    cout<<x1+x2+x3<<endl;
    //identifiers
    //Good
    int minutesPerHour =60;
    //Ok, but not easy to understand what m actually is 
    int m =60;
    //constants
    const int myNum =69;
    //Data types
    float f1=35e3;
    double d1=12E4;
    cout<<f1<<endl<<d1<<endl;
    char p=65,q=66,r=67;
    cout<<p<<q<<r;
    return 0;
}