#include<bits/stdc++.h>
using namespace std;
//Functions are set of code which performs something for you
//Functions increases readability
//Functions are used to modularise the code

void sum(int n1,int n2){
    int n3=n1+n2;
    cout<<"The sum is:"<<n3;
}
int sub(int n1,int n2){
    int n3=n1-n2;
    return n3;
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    sum(num1,num2);
    int res=sub(num1,num2);
    cout<<"  The difference is:"<<res;
    return 0;
}

