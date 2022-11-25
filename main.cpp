#include <iostream>
using namespace std;

int main() {
  cout << "Enter the month number and press enter." << "\n";
  int numberOfMonths;
  cin >> numberOfMonths;
  
  switch(numberOfMonths){
    case 1: cout << "The entered value corresponds to the month: January" << "\n";
          break;
    case 2: cout << "The entered value corresponds to the month: February" << "\n";
          break;
    case 3: cout << "The entered value corresponds to the month: March" << "\n";
          break;
    case 4: cout << "The entered value corresponds to the month: April" << "\n";
          break;
    case 5: cout << "The entered value corresponds to the month: May" << "\n";
          break;
    case 6: cout << "The entered value corresponds to the month: June" << "\n";
          break;
    case 7: cout << "The entered value corresponds to the month: July" << "\n";
          break;
    case 8: cout << "The entered value corresponds to the month: August" << "\n";
          break;
    case 9: cout << "The entered value corresponds to the month: September" << "\n";
          break;
    case 10: cout << "The entered value corresponds to the month: October" << "\n";
          break;
    case 11: cout << "The entered value corresponds to the month: November" << "\n";
          break;
    case 12: cout << "The entered value corresponds to the month: December" << "\n";
          break;
    default: cout << "You made a mistake. Month numbers start with 1 and end with 12." << "\n";
  }
}