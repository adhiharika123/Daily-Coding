#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    if(marks<25){
        cout<<"Grade is F";
    }
    else if(marks >=25 && marks <=44){
        cout<<"Grade is E";
    }
    else if(marks >=45 && marks <=49){
        cout<<"Grade is D";
    }
    else if(marks >=50 && marks <=59){
        cout<<"Grade is C";
    }
    else if(marks >=60 && marks <=79){
        cout<<"Grade is B";
    }
    else if(marks >=80 && marks <=100){
        cout<<"Grade is A";
    }
}
