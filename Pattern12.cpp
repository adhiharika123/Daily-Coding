#include<bits/stdc++.h>
using namespace std;

void print12(int n){
    for(int i=1;i<=n;i++){
        int space=(2*n)-(2*i);
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
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
        print12(n);
    }

}
