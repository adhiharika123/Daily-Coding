#include<bits/stdc++.h>
using namespace std;
//Functions are set of code which performs something for you
//Functions increases readability
//Functions are used to modularise the code

void sum(int n1,int n2){
    int n3=n1+n2;
    cout<<"The sum is:"<<n3;
}
void sub(int n1,int n2){
    int n3=n1-n2;
    cout<<"  The difference is:"<<n3;
}
void mul(int n1,int n2){
    int n3=n1*n2;
    cout<<"  The multiplication is:"<<n3;
}
void division(int n1,int n2){
    int n3=n1/n2;
    cout<<"  The division is:"<<n3;
}
void modulo(int n1,int n2){
    int n3=n1%n2;
    cout<<"  The modulo is:"<<n3;
}



int main()
{
    int num1,num2;
    cin>>num1>>num2;
    sum(num1,num2);
    sub(num1,num2);
    mul(num1,num2);
    division(num1,num2);
    modulo(num1,num2);
    return 0;
}

