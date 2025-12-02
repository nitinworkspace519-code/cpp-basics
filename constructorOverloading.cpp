#include<iostream>
using namespace std;
class Salary{
    double amount;
  public:
  
    Salary() : amount(1000.0) {
        
        cout << "Default constructor, Base amount = " << amount << "\n";
    }
  
    Salary(double basic) : amount(1000.0 + basic) {
        cout << "Constructor with basic salary called. Basic = " << basic
             << ", Amount = " << amount << "\n";
    }

  
    Salary(double allowances, double deductions, bool ) {
        
        amount = 1000.0 + allowances - deductions;
        cout << "Constructor with allowances & deductions called.\n"
             << "Allowances = " << allowances << ", Deductions = " << deductions
             << ", Amount = " << amount << "\n";
    }
  void display() const {
        cout << "Amount: " << amount << "\n";
    }
};

int main() {
    
    Salary sDefault;
    sDefault.display();
    cout << "\n";

    
    Salary sBasic(2000.0);  
    sBasic.display();
    cout << "\n";

    
    Salary sAll(500.50, 100.25, true); 
    sAll.display();
    cout << "\n";
    return 0;
}
