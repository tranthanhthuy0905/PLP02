#include <iostream>
using namespace std;

int main() {
    // C++ contains the following User-defined data types:

// CLASS - building block of C++ leading to OOP
// SYNTAX: class ClassName { Access specifier; Data members; Member Functions(){}}
    /*
    Class has own data members, member functions by user definition.
    Object is an instance of a Class. 
    */
   class Students {
    // Access specifier
    public:
        // Data Members
        string studentName;
    
        // Member Functions()
        void printStudentName()
        {
            cout << "Student's name is: " << studentName << endl;
        }
    };

// STRUCTURE - Create data type used to group items of different types 
// SYNTAX: struct structureName { DataType varName; }
    /* Declaration:
    With structure declaration or separation declaration   
    */
   // A variable declaration with structure declaration.
    struct Point
    {
    int x, y;
    } p1;  // The variable p1 is declared with 'Point'
    
    
    // A variable declaration like basic data types
    struct Point
    {
    int x, y;
    };
    
    int main()
    {
    struct Point p1;  // The variable p1 is declared like a normal variable
    }

// UNION - Like Structure but all members share the same memory location 
    /* 
    If we change one variable in Union, other can be reflectedly changed.
    Size of Union is taken according to the size of largest member.
    */
   // Declaration of union is same as structures
    union test {
        int x, y;
    };
    
    int main()
    {
        // A union variable t
        union test t;
    
        t.x = 2; // t.y also gets value 2
        printf("After making x = 2:\n x = %d, y = %d\n\n",
            t.x, t.y);
    
        t.y = 10; // t.x is also updated to 10
        printf("After making y = 10:\n x = %d, y = %d\n\n",
            t.x, t.y);
        return 0;
    }

// ENUMERATION - assign names to integral constants
// SYNTAX: enum groupName {member_1 = number1, member_2 = number2};
    /*
    Enum makes program easy to read and maintain
    */ 
    // In both of the below cases, "day" is defined as the variable of type week. 

    enum week{Mon, Tue, Wed};
    enum week day;

    // Or

    enum week{Mon, Tue, Wed}day;

// TYPEDEF - define explicitly new data type names 
// SYNTAX: typedef type name;
    // After this line BYTE can be used in place of unsigned char
    typedef unsigned char BYTE;
    
    int main()
    {
        BYTE b1, b2;
        b1 = 'c';
        cout << " " << b1;
        return 0;
    }
}