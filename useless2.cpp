#include <cstdlib>
#include <cstring>
#include <cctype>
#include <iostream>
#include <stack>  // Use STL stack
using namespace std;

#define size 20

float eval(const char* prefix) {
    stack<float> operands; // Use STL stack to hold operands

    // Get the length of the prefix expression
    int length = strlen(prefix);

    // Iterate over the prefix expression from right to left
    for (int i = length - 1; i >= 0; i--) {
        char symbol = prefix[i];

        // If the symbol is an operand (digit), push it to the stack
        if (isdigit(symbol)) {
            operands.push(symbol - '0'); // Convert char to int and push
        } else {
            // Operator: pop two operands from the stack
            float op1 = operands.top(); operands.pop();
            float op2 = operands.top(); operands.pop();

            // Perform the operation based on the operator
            switch (symbol) {
                case '+':
                    operands.push(op1 + op2);
                    break;
                case '-':
                    operands.push(op1 - op2);
                    break;
                case '*':
                    operands.push(op1 * op2);
                    break;
                case '/':
                    operands.push(op1 / op2);
                    break;
                default:
                    cerr << "Unknown operator: " << symbol << endl;
                    return 0;
            }
        }
    }

    // The final result is the last remaining value in the stack
    return operands.top();
}

int main() {
    char prefix[size];
    cout << "Enter the prefix expression: ";
    cin >> prefix; // Read prefix expression from the user

    float ans = eval(prefix);
    cout << "Ans = " << ans << endl;

    return 0;
}
    