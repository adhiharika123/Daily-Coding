#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    //PUSH AT REAR
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);
    q.emplace(5);
    cout<<"The last element is: "<<q.back()<<endl;
    q.back()+=5;
    cout<<"The last element is: "<<q.back()<<endl;
    //FRONT
    cout<<"The front element is: "<<q.front()<<endl;
    //POP AT FRONT
    q.pop();
    cout<<"The front element after pop is: "<<q.front()<<endl;
    //SIZE
    cout<<"The size of Queue is: "<<q.size()<<endl;
    //IS Empty OR NOT
    cout<<"Is Queue is Empty or Not: "<<q.empty()<<endl;
    //PRINTING ALL ELEMENTS
    cout<<"The Elements are: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    //IS Empty OR NOT
    cout<<"Is Queue is Empty or Not: "<<q.empty()<<endl;
    //SWAP
    queue<int> q1,q2;
    //PUSH TO SWAP
    q1.push(10);
    q1.push(20);
    //SWAPPING q1 to q2
    q1.swap(q2);
    //PRINTING q2 ELEMENTS
    cout<<"The q2 Elements are :";
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
}

int main(){
    explainQueue();
    return 0;
}

##OUTPUT
The last element is: 5
The last element is: 10
The front element is: 1
The front element after pop is: 2
The size of Queue is: 4
Is Queue is Empty or Not: 0
The Elements are: 2 3 4 10
Is Queue is Empty or Not: 1
The q2 Elements are :10 20

Process returned 0 (0x0)   execution time : 0.114 s

