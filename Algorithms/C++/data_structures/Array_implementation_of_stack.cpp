#include<bits/stdc++.h>
using namespace std;


class Stack{
    private:
    int top;
    int a[100];
    public:
    Stack() : top(-1){}
    bool push(int x);
    int pop();
    int peek();
    bool isempty();  
};

bool Stack::push(int x){
    if(top>99){
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else{
        top++;
        a[top]=x;
        cout<<x<<" pushed into stack"<<endl;
        return true;
    }
}
int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else{
        int num=a[top];
        top--;
        return num;
    }
}
int Stack::peek(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else{
        int n=a[top];
        return n;
    }
}
bool Stack::isempty(){
    if(top<0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    Stack s;
    s.push(10);
    s.push(25);
    s.push(33);
    s.push(40);
    cout<<s.pop()<<" popped from stack"<<endl;
    cout<<"Element at top "<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<"Element at top "<<s.peek()<<endl;
    return 0;
}