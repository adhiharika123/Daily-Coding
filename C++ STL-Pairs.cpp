#include<bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int,int> p = {1,3};
    cout<<"The Elements are:";
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int, pair<int,int>> p1 = {1,{2,3}};
    cout<<"The Nested Elements are:";
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first;
    cout<<endl;
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<"The Array Elements are:";
    cout<<arr[1].second;

}
int main(){
    pairs();
    return 0;
}

##OUTPUT
The Elements are:1 3
The Nested Elements are:1 3 2
The Array Elements are:4
