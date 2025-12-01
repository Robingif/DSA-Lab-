/*3.	Write a program in C++ to create a class matrix and overload * operator using friend function to multiply two matrices.*/
#include<iostream>
using namespace std;
class matrix{
    int r,c;
    int a[10][10];
    public:
    matrix(int nr, int nc){
        r=nr;
        c=nc;
    }
    
    void set_data(){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                 cin>>a[i][j];
            }
        }
    }

    void get_data(){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                 cout<< a[i][j] <<" ";
            }
            cout<<endl;
        }
    }
   friend matrix operator*(matrix m1, matrix m2);
};
matrix operator*(matrix m1, matrix m2){
    matrix temp(m1.r,m2.c);
    for(int i=0; i<m1.r; i++){
        for(int j=0; j<m2.c; j++){
            temp.a[i][j]=0;
            for(int k=0; k<m1.c; k++){
                temp.a[i][j] += m1.a[i][k] * m2.a[k][j]; 
            }
        }
    }
    return temp;
}
int main(){
    matrix m1(2,3), m2(3,2);
    m1.set_data();
    m1.get_data();
    m2.set_data();
    m2.get_data();
    matrix m3 = m1*m2;
    cout<<" after multiplication "<<endl;
    m3.get_data();
}