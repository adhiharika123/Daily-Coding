//VECTOR
//Vector is a container, which is dynamic in nature that means it is a dynamic array that can resize itself automatically when an element is added or removed


#include<bits/stdc++.h>
using namespace std;

void print(){
    //Declaring a vector
    vector<int> v;
    //Adding
    v.push_back(1); //Places a copy at end
    v.emplace_back(2);//Avoiding extra copy
    v.push_back(3);
    //Printing elements in vector
    cout<<"The elements are:";
    for(int num : v ){
        cout<<num<<" ";
    }
    cout<<endl;

    //Declaring a pair
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout<<"The Pair Elements are:";
    for(const auto& p: vec){
        cout<<"("<<p.first<<","<<p.second<<")";
    }
    cout<<endl;

    //Adding 100 for 5 times
    vector<int> v1(5,100);
    cout<<"The elements are:";
    for(int num:v1){
        cout<<num<<" ";
    }
    cout<<endl;

    //Adding 0 for 5 times
    vector<int> v11(5);
    cout<<"The elements are:";
    for(int num:v11){
        cout<<num<<" ";
    }
    cout<<endl;

    //Copying from V1 to V2
    vector<int> V1(5,20);
    vector<int> V2(V1);
    cout<<"The elements are copied from V1 to V2 are:";
    for(int num:V2){
        cout<<num<<" ";
    }
    cout<<endl;

    //Printing values
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it=it+1;
    cout<<*(it)<<" ";

    cout<<v[0];
    cout<<endl;

    //Printing entire elements
    //auto-> vector<int>::iterator
    cout<<"The entire elements are:";
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //END and REVERSE
    vector<int>::iterator it1=v.end();
    cout<<*(it1)<<" ";

    cout<<endl;

    //Erase or Delete element
    v.erase(v.begin()+1);
    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;
    //Inserting Element
    v.insert(v.begin()+1,2);
    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+3,4);
    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;
    //Erase or Delete elements
    v.erase(v.begin()+1,v.begin()+2);
    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;
    //Inserting Elements
    v.insert(v.begin()+1,2,5);
    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;





}

int main(){
    print();
    return 0;
}
