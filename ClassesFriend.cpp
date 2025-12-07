#include<iostream>
using namespace std;
class two;
class one{
    int data1;
    public:
    void setvalue(int x){
        data1 = x;
    }
    friend int add_both(one a, two b);

};
class two{
    int data2;
    public:
    void setvalue(int y){
        data2 = y;
    }
    friend int add_both(one a, two b);
};

int add_both(one a, two b){
    return (a.data1 + b.data2);
}
int main(){
    one a;
    two b;
    a.setvalue(5);
    b.setvalue(10);
    cout<<"Adding one and two: "<<add_both(a,b);
}
