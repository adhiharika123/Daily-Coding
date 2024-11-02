#include<bits/stdc++.h>
using namespace std;

void print22(int n){
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int left=j;
                int right=(2*n -2)-j;
                int bottom=(2*n -2)-i;
                cout<<(n- min(min(top,bottom),min(left,right)));
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
        print22(n);

    }
}
