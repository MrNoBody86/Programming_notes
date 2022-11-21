#include <iostream>

int main(){
    std::cout<<"Hello world!"<<std::endl;
    int a = 69;
    a = 11;
    double b;
    b = 6.9;
    char c;
    c='s';
    std::string d;
    d = "come onnn";
    bool isit = true ;
    std::cout<< a << std::endl <<b <<std::endl <<c <<std::endl <<d <<std::endl << isit;
    int myAge=19;
    std::cout <<std::endl <<"I am " <<myAge << " years old"<<std::endl;
    int l = 5;
    int k = 6;
    int sum = l+k;
    std::cout << sum <<std::endl;
    //declare many variables
    int x = 6, y =9 , z=54;
    std::cout<< x + y +z<<std::endl ;  
    //one value many variables
    int x1,x2,x3;
    x1=x2=x3=23;
    std::cout<<x1+x2+x3<<std::endl;
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
    std::cout<<f1<<std::endl<<d1<<std::endl;
    char p=65,q=66,r=67;
    std::cout<<p<<q<<r;
    return 0;
}