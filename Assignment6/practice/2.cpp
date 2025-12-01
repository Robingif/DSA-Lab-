/* Write a C++ program creating an abstract class Student.
 Create three derived classes Science, Art and Commerce from the base class.
  Create the objects of the derived classes and process them and access them using array of pointer of type Student.*/
  #include<iostream>
  #include<string>
  using namespace std;
  class student{
    protected:
     string name;
     int roll;
     public:
      student (string s, int r ){
        name = s;
        roll = r;
     }
     virtual void display()=0;
  };
  class Science: public student{
    protected:
       int sci_marks;
       public:
       Science(string s, int r, int marks): student(s,r){
       sci_marks=marks;
       }
       void display(){
        cout<< name <<" of roll no "<< roll <<" got "<< sci_marks <<" in science exam "<<endl;
       }
  };
  class Art: public student{
    protected:
       int art_marks;
       public:
       Art(string s, int r, int marks): student(s,r){
       art_marks=marks;
       }
       void display(){
        cout<< name <<" of roll no "<< roll <<" got "<< art_marks <<" in arts exam "<<endl;
       }
  };
  class Commerce: public student{
    protected:
       int com_marks;
       public:
       Commerce(string s, int r, int marks): student(s,r){
       com_marks=marks;
       }
       void display(){
        cout<< name <<" of roll no "<< roll <<" got "<< com_marks <<" in commerce exam "<<endl;
       }
  };
  int main(){
    Science sci_stud( "robin" ,1024170017,98);
    Art art_stud( "xyz" ,248909840,90);
    Commerce com_stud( "sanjana" ,480385004,99);
    student* arr[3];
     arr[0]=&sci_stud;
     arr[1]=&art_stud;
     arr[2]=&com_stud;
     for(int i=0; i<=2; i++){
          arr[i]->display();

     }
    



  }