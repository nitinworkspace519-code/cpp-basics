#include<iostream>
using namespace std;


    void array1(int arr1[3][3]){
    const int col = 3;
    const int row = 3;
    //int arr1 [row][col];
    for(int i = 0; i<row; i++){
        for(int j =0; j<col;j++){
            cout<<"Enter Value "<<i*col + j +1<<": ";
        cin>>arr1[i][j];
        }
    }
    cout<<"\n\n---Required First Martix---\n\n";
    for(int i=0; i <row; i++){
        for(int j=0; j<col; j++){
            cout<<arr1[i][j]<<"   ";
        }
        cout<<endl;
    }
    }
    
    void array2(int arr2[3][3]){
    const int col = 3;
    const int row = 3;
    //int arr1 [row][col];
    for(int i = 0; i<row; i++){
        for(int j =0; j<col;j++){
            cout<<"Enter Value "<<i*col + j +1<<": ";
        cin>>arr2[i][j];
        }
    }
    cout<<"\n\n---Required Second Martix---\n\n";
    for(int i=0; i <row; i++){
        for(int j=0; j<col; j++){
            cout<<arr2[i][j]<<"   ";
        }
        cout<<endl;
    }   
    }

    void cal(int a[3][3], int b[3][3]){
        int sum[3][3];

        for(int i = 0; i<3; i++){
            for(int j=0;j<3;j++){
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        cout<<"\n\n---Added Matrix---\n\n";
        for(int i = 0; i<3;i++){
            for(int j=0;j<3;j++){
                cout<<sum[i][j]<<"   ";
            }
            cout<<endl;
        }
    }

int main(){
    int A[3][3], B[3][3];
    cout<<"\n\n---Enter First Matirx---\n\n";
    array1(A);
    cout<<"\n\n---Now enter second Matrix---\n\n";
    array2(B);
    cal(A,B);
}
