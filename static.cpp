#include<iostream>
using namespace std;
class A{
    static string name;
    static int age;

    public:

    static void show(string n, int a){
        name = n;
        age = a;
        cout<<"My Name is "<<name<<" and I'm "<<age<<" years old";
    }
};

string A::name = "";
int A::age = 0;

int main(){
A::show("Nitin Kashyap", 22);

}
