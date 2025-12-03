#include <iostream>
using namespace std;

class Number {
    int value;
public:
    void setValue(int x) {
        value = x;
    }

    void show() {
        cout << "Value = " << value << endl;
    }

    // Function that returns an object
    Number increase() {
        Number temp;
        temp.value = value + 5;   // add 5
        return temp;              // returning object
    }
};

int main() {
    Number n1, n2;

    n1.setValue(10);
    n2 = n1.increase();   // function returns an object

    n2.show();            // prints 15

    return 0;
}
