#include<bits/stdc++.h>
using namespace std;

void explainPriority_Queue(){
    //MAX HEAP
    priority_queue<int> pq;
    //PUSH
    pq.push(2);
    pq.push(4);
    pq.push(1);
    pq.push(9);
    pq.emplace(3);
    //TOP
    cout<<"The top element is: "<<pq.top()<<endl;
    //POP
    pq.pop();
    cout<<"The top element after pop is: "<<pq.top()<<endl;
    //SIZE
    cout<<"The size of Queue is: "<<pq.size()<<endl;
    //IS EMPTY OR NOT
    cout<<"Is queue is Empty or Not: "<<pq.empty()<<endl;
    //PRINTING ALL ELEMENTS
    cout<<"The Elements Are: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    //IS EMPTY OR NOT
    cout<<"Is queue is Empty or Not: "<<pq.empty()<<endl;
    //SWAP
    priority_queue<int> pq1,pq2;
    //PUSH TO SWAP
    pq1.push(5);
    pq1.push(8);
    //SWAPPIG FROM pq1 TO pq2
    pq1.swap(pq2);
    cout<<"The elements in pq2 are: ";
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    cout<<endl;
    cout<<"---------------------------------------------------------";

    //MIN HEAP
    priority_queue<int, vector<int>, greater<int>> pq3;
    pq3.push(6);
    pq3.push(3);
    pq3.push(8);
    pq3.emplace(4);
    pq3.emplace(2);
    //TOP
    cout<<"The top element is: "<<pq3.top()<<endl;
    //POP
    pq3.pop();
    cout<<"The top element after pop is: "<<pq3.top()<<endl;
    //SIZE
    cout<<"The size of Queue is: "<<pq3.size()<<endl;
    //IS EMPTY OR NOT
    cout<<"Is queue is Empty or Not: "<<pq3.empty()<<endl;
    //PRINTING ALL ELEMENTS
    cout<<"The Elements Are: ";
    while(!pq3.empty()){
        cout<<pq3.top()<<" ";
        pq3.pop();
    }
    cout<<endl;
    //IS EMPTY OR NOT
    cout<<"Is queue is Empty or Not: "<<pq3.empty()<<endl;
    //SWAP
    priority_queue<int, vector<int>, greater<int>> pq31,pq32;
    //PUSH TO SWAP
    pq31.push(5);
    pq31.push(8);
    //SWAPPIG FROM pq1 TO pq2
    pq31.swap(pq32);
    cout<<"The elements in pq32 are: ";
    while(!pq32.empty()){
        cout<<pq32.top()<<" ";
        pq32.pop();
    }
    cout<<endl;
}



int main(){
    explainPriority_Queue();
    return 0;
}
