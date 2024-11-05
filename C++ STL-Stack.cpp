#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    st.emplace(5);
    //TOP
    cout<<"The top element is: "<<st.top();
    cout<<endl;
    //POP
    st.pop();
    cout<<"The top element after popping is: "<<st.top()<<endl;
    //SIZE
    cout<<"The size of Stack is: "<<st.size()<<endl;
    //IS EMPTY OR NOT
    cout<<"Is Stack Empty or Not: "<<st.empty()<<endl;
    //PRINTING ALL ELEMENTS
    cout<<"The Elements in Stack are: ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    //IS EMPTY OR NOT
    cout<<"Is Stack Empty or Not: "<<st.empty()<<endl;
}

int main(){
    explainStack();
    return 0;
}
