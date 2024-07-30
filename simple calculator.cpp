# include <iostream>
using namespace std;

int main()
{
  double num1,num2;
  char op;

  cout<< "Enter the two numbers one by one :";
  cin >> num1 >> num2;

  cout<< "Enter the operator ( + - * / ) :";
  cin >> op;

  switch (op)
  {
  case '+':
    cout<< num1 << op << num2 << "=" << num1 + num2 <<endl;
    break;

  case '-':
    cout<< num1 << op << num2 << "=" << num1 - num2 <<endl;
    break;

  case '*':
    cout<< num1 << op << num2 << "=" << num1 * num2 <<endl;
    break;

  case '/':
    cout<< num1 << op << num2 << "=" <<  num1 / num2 <<endl;
    break;

  default:
    cout<< "Invalid Operator" << endl;

  }
}
