/*9.	How will you convert one UDT to another UDT. For example conversion of polar to cartesian system. 
Polar p(10,5); 
Cartesian c = p;
c.show();
*/
#include<iostream>
#include<cmath>
using namespace std;
class cartesian;
class polar{
    
    int r,angle;
    public:
    polar(int rad=0, int theta=0){
        r=rad;
        angle=theta;
    }
   void show(){
    cout<< " radius is " << r <<" and angle is "<< angle <<endl;
   }
   friend class cartesian;
};
class cartesian {
   
    float x,y;
    public:
    cartesian(polar p){
        x=p.r*cos(p.angle);
         y=p.r*sin(p.angle);


    }
    void show(){
        cout<< " x: "<< x <<" y "<< y <<endl;
    }
};
int main(){
   polar p(10,5); 
cartesian c = p;
c.show(); 
}