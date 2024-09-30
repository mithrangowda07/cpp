#include<stdlib.h>
#include<ctype.h>
#include<iostream>
using namespace std;

#define size 20
int stack[size];
int top = -1;

void push(char symbol){
    if(top==size-1)
        cout<<"Overflow";
    else
        stack[++top]=symbol;
}

char pop(){
    return stack[top--];
}

int preced(char symbol){
    switch(symbol){
        case '^': return 3;
        case '*': return 2;
        case '/': return 2;
        case '+': return 1;
        case '-': return 1;
        default: return -1;
    }
}

void infixtopostfix(char infix[]){
    char postfix[20];
    int i,j=0;
    for(i=0;infix[i]!='\0';i++){
        char symbol = infix[i];
        if(isalnum(symbol)){
            postfix[j++]=symbol;
        }
        else{
            if(symbol=='('){
                push(symbol);
            }
            else if(symbol==')'){
                char temp = pop();
                while(temp!='('){
                    postfix[j++]=temp;
                    temp = pop();
                }
            }
            else{
                if(top==-1 || stack[top]=='('){
                    push(symbol);
                }
                else{
                    while(preced(stack[top]) >= preced(symbol) && top != -1 && stack[top]!='('){
                        postfix[j++]=pop();
                    }
                    push(symbol);
                }
            }
        }
    }

    while(top!=-1){
        postfix[j++]=pop();
    }
    postfix[j]='\0';

    cout<<postfix<<endl;
}

int main(){
    char infix[20];
    cout<<"Enter the infix expression:";
    cin>>infix;
    infixtopostfix(infix);
    return 0;
}