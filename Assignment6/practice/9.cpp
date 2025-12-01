//UDT ->BDT
/*8.	Write a program to convert UDT to basic data type (float)
class Test{
 public: 
operator data_type() { //Conversion code } 
};
*/
#include <iostream>
using namespace std;

class Test {
private:
    float value;   // internal value stored in object

public:
    // Constructor
    Test(float v) {
        value = v;
    }

    // User-defined to basic type conversion (Test → float)
     operator float() {
        return value;
    }
};

int main() {
    Test obj(15.75);

    float x = obj;      // object converted to float
    cout << "Converted float = " << x << endl;

    return 0;
}
