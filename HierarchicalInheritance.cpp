#include<iostream>
using namespace std;

class A{
public:
    A(){}
    void showA(){
        cout<<"This is Class A function\n";
    }
};

class B: public A{
public:
    void showB(){
        cout<<"This is Class B function\n";
    }
};

class C: public A{
public:
    void showC(){
        cout<<"This is Class C function\n";
    }
};

int main(){
    cout<<"--- Now Working With Class B Object ---\n";
    B obj1;
    cout<<"Calling Class B function:\n";
    obj1.showB();
    cout<<"Now calling inherited Class A function from B:\n";
    obj1.showA();

    cout<<"\n--- Now Working With Class C Object ---\n";
    C obj2;
    cout<<"Calling Class C function:\n";
    obj2.showC();
    cout<<"Now calling inherited Class A function from C:\n";
    obj2.showA();
}
