#include<iostream>
using namespace std;
class Cals{
int x,y;
public:
Cals() {
    x = 0;
    y = 0;
}

void Cal(int a, int b){
    x = a;
    y = b;
    int add = x + y;
    cout<<"After Adding: "<<add<<endl; 
}
void Cal(int a, double b){
    x = a;
    //y = b;
    double sub = x-b;
    cout<<"After Substrating: "<<sub<<endl;
}
};

int main(){
    Cals obj;
    obj.Cal(4,5);
    obj.Cal(5,7.9);
}
