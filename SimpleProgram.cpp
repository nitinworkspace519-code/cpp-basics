#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter a numebr: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Select operator: ";
    cin>>op;
    //basic calculator
    try{
    if(op == '+'){
        cout<<"Adding "<<a<<" and "<<b<<" = "<<a+b;
    }
    else if(op == '-'){
        cout<<"Substracting "<<a<<" and "<<b<<" = "<<a-b;
    }
    else if(op == '*'){
        cout<<"Multiplying "<<a<<" and "<<b<<" = "<<a*b;
    }
    else if(op == '/'){
        if(b==0){
            throw "In divide second value is not allowed as 0!";
        }
        cout<<"Dividing "<<a<<" and "<<b<<" = "<<a/b;
    }
    else
    cout<<"Invalid Input...";
    }
    catch(const char* ex){
        cout<<ex;
    }
}