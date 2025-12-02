#include<iostream>
using namespace std;
class vector{
    int * v;
    int size;
    public:
    vector(int vector_size){
        size = vector_size;
        v = new int [vector_size];
    }
    vector( vector &v2);
    ~vector(){
        delete v;
    }
    int & elem(int i){
        static int errorValue = -1;
        if(i>= size){
            cout<<endl<<"Error: Out of Range*" ;
            return errorValue; //illegal access
        }
        return v[i];
    }
    void show();
};
vector::vector(vector &v2){
    cout<<"\n Copy Constructor Invoked";
    size = v2.size;
    v = new int [v2.size];
    for(int i =0 ; i<v2.size; i++){
        v[i] = v2.v[i];
    }
}

void vector::show(){
    for(int i = 0; i<size; i++){
        cout<<elem(i)<<" , ";
    }
}

int main(){
    int i ;
    vector v1(5), v2(5);
    for(int i =0;i<5;i++){
        v2.elem(i) = i+1;
    }
    v1 = v2;
    vector v3 = v2;
    cout<<"\n vector v1: ";
    v1.show();
    cout<<"\n vector v2: ";
    v2.show();
    cout<<"\n vector v3: ";
    v3.show();
}
