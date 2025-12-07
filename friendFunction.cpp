#include<iostream>
using namespace std;
class A{
    protected:
    int value;

    public:
    friend void setValue(A &obj, int v);
    void get(){
        cout<<"Value: "<<value;
    }
};

void setValue(A &obj, int v) {
    obj.value = v;   
}

int main(){
    A obj;
    setValue(obj, 10);
    obj.get();
}
