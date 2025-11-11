#include <iostream>
#include "arithmetic_operations.h"

using namespace std;

int exitProgram(int codOut){
  // if output code is 0, everything was OK, else, there is an error.
  if(codOut)
    cout << "ERROR: something was wrong!" << endl;
  else
    cout << "Exiting program..." << endl;
  
  return codOut;
};

int main(){
  int outProg = 0;
  const int MENU_OPTIONS = 4; // Number of options in the main menu
  int option=0;
  int op1, op2;

  cout << "WELCOME to the MATHAPP" << endl << "*--------------------*" << endl << endl;

  do{
    cout << "MENU app:" << endl;
    cout << "0 - EXIT" << endl;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cout << "  Select an option: " << endl;
    cin >> option;
  }while(option > MENU_OPTIONS);

  if(option <= 0){
    outProg = exitProgram(0);
  }else{
    cout << "Add first operator: " << endl;
    cin >> op1;
    cout << "Add second operator: " << endl;
    cin >> op2;

    ArithmeticOperations operation(op1, op2);

    switch (option) {
      case 1:
        cout << "Addition = " << operation.sumOp(op1, op2) << endl;
        break;
      case 2:
        cout << "Subtraction = " << operation.subsOp(op1, op2) << endl;
        break;
      case 3:
        cout << "Multiplication = " << operation.multiplyOp(op1, op2) << endl;
        break;
      case 4:
        cout << "Division = " << operation.divideOp(op1, op2) << endl;
        break;
      default:
        outProg = exitProgram(1);
    };
  }

  return outProg;
};