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
        cin.ignore();
        cout<<"Name: ";
        getline(cin, name);
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
