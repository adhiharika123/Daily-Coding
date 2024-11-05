#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int> dq;
    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);
    cout<<"The elements are:";
    for(int num: dq){
        cout<<num<<" ";
    }
    cout<<endl;
    //POP OPERATION
    dq.pop_back();
    cout<<"The elements are after pop back:";
    for(int num: dq){
        cout<<num<<" ";
    }
    cout<<endl;
    dq.pop_front();
    cout<<"The elements are after pop front:";
    for(int num: dq){
        cout<<num<<" ";
    }
    cout<<endl;
    //RETRIVING LAST AND FRONT ELEMENT
    dq.back();
    cout << "Last element: " << dq.back() << endl;
    dq.front();
    cout << "Front element: " << dq.front() << endl;
    //PRINTING
    cout<<"The Elements are: ";
    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //ERASE OR DELETE
    dq.erase(dq.begin());
    cout<<"The elements after delete: ";
    for(int num: dq){
        cout<<num<<" ";
    }
    cout<<endl;
    //INSERT OR ADD
    dq.insert(dq.begin(),2);
    cout<<"The elements after inserting: ";
    for(int num: dq){
        cout<<num<<" ";
    }
    cout<<endl;
    dq.insert(dq.begin(),1);
    cout<<"The elements after inserting: ";
    for(int num: dq){
        cout<<num<<" ";
    }
    cout<<endl;
    //SIZE
    cout<<"The size is:"<<dq.size();

}

int main(){
    explainDeque();
    return 0;
}

##OUTPUT
The elements are:1 2 3 4
The elements are after pop back:1 2 3
The elements are after pop front:2 3
Last element: 3
Front element: 2
The Elements are: 2 3
The elements after delete: 3
The elements after inserting: 2 3
The elements after inserting: 1 2 3
The size is:3
Process returned 0 (0x0)   execution time : 0.188 s
