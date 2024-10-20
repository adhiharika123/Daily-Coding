#include<bits/stdc++.h>
using namespace std;

void print17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int break_point=(2*i+1)/2;
        for(int j=1;j<=(2*i)+1;j++){
            cout<<ch;
            if(j<=break_point){
                ch++;
            }else{
                ch--;
            }

        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int n;
        cin>>n;
        print17(n);
    }
}
