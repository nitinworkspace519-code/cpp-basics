#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    student(){
        cout<<"Rollno: ";
        cin>>rollno;
        cin.ignore(); // clears leftover newline
        cout<<"Name: ";
        getline(cin, name); // reads full name with spaces
    }
    void display(){
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name;
    }
};

int main(){
    student s1;
    s1.display();
}
