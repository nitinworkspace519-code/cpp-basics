#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to check it is prime or not: ";
    cin>>num;
    bool isprime = true;

    for(int i=2; i<=num/2;i++){
        if(num%i==0){
            isprime = false;
            break;
        }
}
    if(isprime == true)
    cout<<num<<" is a Prime Number.";
    else
    cout<<num<<" is NOT a Prime Number.";
}
