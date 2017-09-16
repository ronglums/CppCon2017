#include <iostream>

using namespace std;

class Calculator
{
public:
    int Calculate (int, int, char);
};

int main()
{
    int x, y, result;
    char oper;
    cout << "Hello, I'm a calculator!" << endl;
    cout << "Please enter 'num1 operator num2' to get the result:" << endl;
    cin >> x >> oper >> y;
    Calculator c;
    result = c.Calculate (x,y,oper);
    cout << "Result is: " << result;
    cin.ignore(); 
    cin.get();
    return 0;
}

int Calculator::Calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        cout << "\nIncorrect operation! Try again: ";
        cin >> x >> oper >> y;
        Calculate(x, y, oper);
    }
}