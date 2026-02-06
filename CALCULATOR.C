#include <iostream>
using namespace std;

int calculate(int a, int b, char op)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default:
            cout << "Invalid operator";
            return 0;
    }
}

int main()
{
    int a, b, result;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    result = calculate(a, b, op);

    cout << "Result is " << result;

    return 0;
}
