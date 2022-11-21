#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstname="Aryan",lastname="Chouksey";
    //string concatenation
    string fullname=firstname+" "+lastname;
    //append
    string fullname1=firstname.append(lastname);
    cout<<fullname<<endl<<fullname1<<endl;
    //String length
    cout<<"the length of my name is "<<fullname.length()<<endl;
    cout<<"without space it is "<<fullname1.size()<<endl;
    //Access Strings
    cout<<fullname1[8]<<endl;
    //replace string
    fullname[5]='_';
    cout<<fullname<<endl;
    //special charecters
    /*
    \'  --> '
    \"  --> "
    \\  --> \
    \n  --> new line
    \t  --> tab
    */

    // user input strings
    string firstname2 , fullname2;
    cout <<"Type your first name:"<<endl;
    cin>> firstname2;
    cout <<"your firstname is :"<<firstname2<<endl;
    cout<<"Type your fullname :"<<endl;
    getline(cin,fullname2);
    getline(cin,fullname2);
    cout<<"your fullname is :"<<fullname2<<endl;
    return 0;
}