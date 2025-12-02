#include<iostream>
using namespace std;
//Object-oriented Progrmming constructs modeled out of data types called classees.


//keyword- class
class student{
    private:
    string name;
    public:   //parameterized constructor(string n)
    student(string n):name(n){}

    void showdata(){
        cout<<"Name: "<<name;
    }
}; //class must be closed by semi-colon

//main function start

int main(){
    //creating object for class student
    //class student s1("Nitin Kashyap"); this also valid
    student s1("Nitin Kashyap");
    s1.showdata();
}
