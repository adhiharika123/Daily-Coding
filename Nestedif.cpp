#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age<18){
        cout<<"Not eligible for age.";
    }
    else {
        cout<<"Eligible for job.";
        if(age>= 55){
                if(age<57){
                    cout<<" ,but retirement soon.";
                }
                else{
                    cout<<" retirement soon.";
                }
        }
    }
}
