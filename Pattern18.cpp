#include<bits/stdc++.h>
using namespace std;

void print18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch;
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
        print18(n);
    }
}
