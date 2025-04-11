#include <bits/stdc++.h>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    Calculator(double num1, double num2,string op) {
        a = num1;
        b = num2;
        operation = op;
    }

    void calculate() {
        if (operation == "add") {
           cout << "Result: " << (a + b) << std::endl;
        } else if (operation == "subtract") {
            cout << "Result: " << (a - b) << std::endl;
        } else if (operation == "multiply") {
        cout << "Result: " << (a * b) << std::endl;
        } else if (operation == "divide") {
            if (b != 0)
            cout << "Result: " << (a / b) << std::endl;
            else
            cout << "Error: Division by zero!" << std::endl;
        } else {
        cout << "Invalid operation type!" << std::endl;
        }
    }
};


int main() {
    double a, b;
    string op;

    cout << "Enter first number: ";
     cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (add / subtract / multiply / divide): ";
      cin >> op;

    Calculator calc(a, b, op);
    calc.calculate();

    return 0;
}
