#include<iostream>
using namespace std;
int main()
{
    //number,float,double
    int x;
    float y;
    double z;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"x value:"<<x<<"\n";
    cout<<"y value:"<<y<<"\n";
    cout<<"z value:"<<z<<"\n";

    //string(get line), char
    string str;
    cin.ignore();
    cout<<"Enter a string:";
    getline(cin,str);
    cout<<"String is:"<<str;

    //character-single
    char a;
    cout<<"Enter a character:";
    cin>>a;
    cout<<"Character is:"<<a;


}
