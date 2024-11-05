#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(1);
    ls.emplace_front(3);
    cout<<"Display elements as: ";
    for(int num:ls){
        cout<<num<<" ";
    }
    cout<<endl;
    //Printing all elements
    //auto->list<int>::iterator
    cout<<"The entire elements are:";
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //ERASE OR DELETE
    ls.erase(ls.begin());
    cout<<"After erasing ";
    for(int num:ls){
        cout<<num<<" ";
    }
    cout<<endl;
    //INSERT OR ADD
    ls.insert(ls.begin(),3);
    cout<<"After adding ";
    for(int num:ls){
        cout<<num<<" ";
    }
    cout<<endl;
    ls.reverse();
    cout<<"The reversed elements are :";
    for(int num:ls){
        cout<<num<<" ";
    }
    cout<<endl;
}
int main(){
    explainList();
    return 0;
}

##OUTPUT
Display elements as: 3 1 2 4
The entire elements are:3 1 2 4
After erasing 1 2 4
After adding 3 1 2 4
The reversed elements are :4 2 1 3

Process returned 0 (0x0)   execution time : 0.094 s
