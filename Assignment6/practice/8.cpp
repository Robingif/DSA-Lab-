/*7.	Write a program to convert basic data type (float) to user defined data type (object).
class Test { 
private: //…. 
public: 
Test ( data_type) { // conversion code } 
};
*/
#include<iostream>
using namespace std;
class test{
    private:
    int rollno;
    float marks;
    public:
    test(float m=0, int r=0){   //constructor BDT->UDT
        rollno=r;        
        marks=m;
    }
    void display(){
        cout<<"roll no : "<< rollno <<" got "<< marks <<" marks "<<endl;
    }
};
int main(){
    float f=12.21;
    test a=f;
    a.display();
    

}