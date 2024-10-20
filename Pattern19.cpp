#include<bits/stdc++.h>
using namespace std;

void print_19(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void print19(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(2*n)-(2*i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
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
        print_19(n);
        print19(n);
    }
}
