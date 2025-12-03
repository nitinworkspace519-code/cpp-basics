#include<iostream>
using namespace std;
int main(){
    int age[5];
    float sum = 0;

    for(int i= 0; i<5; i++){
        cout<<"Enter age of person "<<i+1<<": ";
        cin>>age[i];
        sum = sum + age[i];
    }
        cout<<"Average: "<<sum/5;
    
}
