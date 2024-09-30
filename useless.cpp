#include<cmath>
#include<ctype.h>
#include<iostream>
#include<cstring>
using namespace std;

#define size 20

struct stack{
    int data[size];
    int top = -1;
};

stack s;

void push(float item){
    s.data[++s.top]=item;
}

float pop(){
    return s.data[s.top--];
}

float operate(float op1,float op2, char symbol){
    switch(symbol){
        case '+': return op1+op2;
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/': return op1/op2;
        case '^': return pow(op1,op2);
    }
}

float eval(const char* prefix){
    float minians;
    int lenght = strlen(prefix);
    for(int i = lenght-1;i>=0;i--){
        char symbol = prefix[i];
        if(isdigit(symbol)){
            push(symbol-'0');
        }
        else{
            float op1 = pop();
            float op2 = pop();
            minians = operate(op1,op2,symbol);
            push(minians);
        }
    }
    return pop();
}

int main(){
    char prefix[size];
    cout<<"Enter the prefix expression:";
    cin>>prefix;
    float ans = eval(prefix);
    cout<<"Ans = "<<ans<<endl;
    return 0;
}

