#include<bits/stdc++.h>
using namespace std;

void print10(int n){
    for(int i=0;i<=(2*n)-1;i++){
        int stars=i;
        if (i>n){
        stars=(2*n-i);
        }
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int n;
        cin>>n;
        print10(n);
    }
}
