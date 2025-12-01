/*1.	Create a class Time with three private variables int h,m,s; 
Create a function to overload ‘+’ operator to add two time variables. 
int main(){
    Time t1(5,15,34),t2(9,53,58),t3;
    t3 = t1 + t2;  t3.show();  
}*/
#include<iostream>
using namespace std;
class Time{
    int h,m,s;
    public:
    Time(int hr=0, int min=0, int sec=0){
        h=hr;
        m=min;
        s=sec;

    }
    void show(){
        cout<<"time : "<< h << " : "<< m << " : " << s <<endl;
    }
    Time operator+(Time t2){
      Time t3;
      t3.s = s+t2.s;
      t3.m = t3.s/60 + m+t2.m;
      t3.s = t3.s%60;
      t3.h = t3.m/60 +h+t2.h;
      t3.m = t3.m%60;
      return t3;
    } 

    
};
int main(){
     Time t1(10,59,59),t2(10,59,59),t3;
    t3 = t1 + t2; 
     t3.show(); 
}

