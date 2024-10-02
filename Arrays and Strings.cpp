#include<bits/stdc++.h>
using namespace std;
int main(){
    //1D Array
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    cout<<a[3];
    //2D Array
    int arr[2][2];
    cin>>arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];
    cout<<arr[0][1]<<"\n";
    //Strings
    string str="HELLO ALL";
    cout<<str[3]<<"\n";
    int len=str.size();
    cout<<"Length of string:"<<len<<"\n";
    str[len-1]='S';
    cout<<str[len-1];

}
