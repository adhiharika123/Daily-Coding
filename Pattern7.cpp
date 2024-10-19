#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for(int i=0;i<n;i++){
            //space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            //star
            for(int j=0;j<(2*i)+1;j++){
                cout<<"*";
            }
            //space
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
        print7(n);

    }
}
