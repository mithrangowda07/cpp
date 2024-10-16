#include<stdlib.h>
#include<cstring>
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

void reverse_string(char *prefix){
    int n = strlen(prefix);
    int s=0,e=n-1;
    while(s<e){
        swap(prefix[s],prefix[e]);
        s++;
        e--;
    }
}

void infixtoprefix(char infix[]){
    char prefix[20];
    int i = strlen(infix);
    int j=0;
    for(i-1;i>-1;i--){
        char symbol = infix[i];
        if(isalnum(symbol)){
            prefix[j++]=symbol;
        }
        else{
            if(symbol==')'){
                push(symbol);
            }
            else if(symbol=='('){
                char temp = pop();
                while(temp!=')'){
                    prefix[j++]=temp;
                    temp = pop();
                }
            }
            else{
                if(top==-1 || stack[top]=='('){
                    push(symbol);
                }
                else{
                    while(preced(stack[top]) >= preced(symbol) && top != -1 && stack[top]!=')'){
                        prefix[j++]=pop();
                    }
                    push(symbol);
                }
            }
        }
    }

    while(top!=-1){
        prefix[j++]=pop();
    }
    
    reverse_string(prefix);
    
    cout<<"The prefix expression is:"<<prefix<<endl;
}

int main(){
    char infix[20];
    cout<<"Enter the infix expression:";
    cin>>infix;
    infixtoprefix(infix);
    return 0;
}
