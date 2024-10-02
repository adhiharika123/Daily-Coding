#include<bits/stdc++.h>
using namespace std;
//PASS BY VALUE-IT TAKES ONLY COPY OF IT
void Addition(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
//PASS BY REFERENCE-IT TAKES WITH ACTUAL ADDRESS
void Add(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
//ARRAY-BY DEFAULT IT TAKES ACTUAL VALUE ONLY
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout<<"Value Inside Function :"<< arr[0]<<endl;
}
int main(){
    int num=10;
    Addition(num);
    cout<<"The number is:"<<num<<endl;
    Add(num);
    cout<<"The number is:"<<num<<endl;
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    doSomething(arr,n);
    cout<<"Value Outside Function :"<< arr[0]<<endl;
    return 0;
}
