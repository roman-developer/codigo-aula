// C++ is an object-oriented programming language (OOP).
// Everything in C++ is associated with classes and objects, along with its attributes and methods.

/**  This is a OOP example, using the class ArithmeticOperations:
 * Private:
 *  - op1: first operator
 *  - op2: second operator
 * Public:
 * + constructor
 * + sumOp: implement addition 
 * + subsOp: implement substraction 
 * + multiplyOp: implement multiplication 
 * + divideOp: implement division 
*/

#include <iostream>
using namespace std;

class ArithmeticOperations{
  private:
    int op1, op2;
  public:
    ArithmeticOperations(int op1, int op2);
    int sumOp(int op1, int op2);
    int subsOp(int op1, int op2);
    int multiplyOp(int op1, int op2);
    double divideOp(int op1, int op2);
};

ArithmeticOperations::ArithmeticOperations(int num1, int num2){
  op1 = num1;
  op2 = num2;
}

int ArithmeticOperations::sumOp(int op1, int op2){
  return op1 + op2;
}

int ArithmeticOperations::subsOp(int op1, int op2){
  return op1 - op2;
}

int ArithmeticOperations::multiplyOp(int op1, int op2){
  return op1 * op2;
}

double ArithmeticOperations::divideOp(int op1, int op2){
  if(op2 == 0){
    cout << "ERROR: can not divide zero" << endl;
    return 0.0;
  }
  return op1 / op2;
}