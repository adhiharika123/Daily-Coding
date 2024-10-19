#include<bits/stdc++.h>
using namespace std;
void print5(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
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
        print5(n);
    }
}
