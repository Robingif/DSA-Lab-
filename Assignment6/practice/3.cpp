	/* Class polygon contains data member width and height and public method set_value() to assign values to width and height. 
Class Rectangle and Triangle are inherited from polygon class.
 Both the classes contain public method calculate_area() to calculate the area of Rectangle and Triangle. 
 Use base class pointer to access the derived class object and show the area calculated. */
#include<iostream>
using namespace std;
class polygon{
   protected:
   float width,height;
   public:
   void set_value(float w, float h){
    width=w;
    height=h;
}
virtual float calculate_area()=0;
        
    
};

class Rectangle: public polygon{
    protected:
    float rec_area;
    public:
    float calculate_area(){
        rec_area= width*height;
        return rec_area;
    }
   
    
};

class Triangle: public polygon{
    protected:
    float tri_area;
    public:
    float calculate_area(){
        tri_area= 0.5*width*height;
        return tri_area;
    }
   
};

int main(){
    polygon* ptr, *ptr2;
    Rectangle robj;
    Triangle tobj;
    ptr=&robj;
    ptr->set_value(12,10);
    float ans= ptr->calculate_area();
    cout<<ans<<endl;
    ptr2=&tobj;
    ptr2->set_value(12,10);
    float ans2= ptr2->calculate_area();
    cout<<ans2<<endl;

}
