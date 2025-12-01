/* 2.	Define a class STRING and overload = = to compare two strings and + operator for concatenation of two strings. */
#include<iostream>
#include<string>
using namespace std;
class STRING{
   string s;
   public:
   STRING(string a=" "){
    s=a;
    
   }
   bool operator==(STRING b){
    return (s==b.s);
   }
   STRING operator+(STRING a){
    STRING c;
    c.s=s+a.s;
    return c;

   }
   void show(){
    cout<<s<<endl;
   }
};
int main(){
    STRING s1("hello");
    STRING s2("world");
   STRING s3=s1+s2;
   s3.show();
   if (s1 == s2)
        cout << "Strings are equal\n";
    else
        cout << "Strings are NOT equal\n";


}