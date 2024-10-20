#include<bits/stdc++.h>
using namespace std;

void print11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        //int start=(i%2==0)?1:0; we can aslo use ternary operator
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for( int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start; //FLIP 0-1 AND 1-0
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
        print11(n);
    }
}
