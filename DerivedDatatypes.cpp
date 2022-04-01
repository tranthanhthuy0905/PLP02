#include <iostream>
using namespace std;

int main() {

// C++ contains the following Derived data types: 

    
// FUNCTION - reusable block of code //
// SYNTAX:  FunctionType FunctionName (parameters)
    /*
    There are 2 ways to declare the functions: Define the whole Component function
    before calling it in the main function OR 
    Quick-define the name of the function before calling it in the main function 
    then define details later 
    */
    int max(int x, int y)
    {
        if (x > y)
            return x;
        else
            return y;
    }

// ARRAY - collection of primitive data types stored at continuous memory locations
// SYNTAX: DataType ArrayName[size_of_array];
    /* 
    Array in c++ is not dynamic. 
    */
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;
  
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
  
    arr[3] = arr[0];
  
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3];

// POINTER - symbolic representation of address 
// SYNTAX: datatype* var_name;
    /* 
    Pointer enable programs to simulate call-by-reference and create or 
    manipulate dynamic data structures. Pointer lets us know how many 
    bytes the data is stored in.
    When we increase a pointer, we increase the pointer by the size of 
    data type to which it points. 
    */
    int var = 20;
    // note that data type of ptr and var must be same
    int* ptr = &var;
  
    // assign the address of a variable
    // to a pointer
    cout << "Value at ptr = "
         << ptr << "\n";            // 0x7ffc10d7fd5c
    cout << "Value at var = "
         << var << "\n";            // 20
    cout << "Value at *ptr = "
         << *ptr << "\n";           // 20

// REFERENCE - Alternative name for an exiting variable.
// SYNTAX: datatype& var_name;
    /* 
    Application: 
    - Modify the passed parameters in the function
    - Avoid copy of large structures 
    - To modify all objects in For-loop
    - To avoid copy of objects in For-Each loop
    */
    int x = 10;
  
    // Reference Derived Type - ref is a reference to x.
    int& ref = x;
  
    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << endl;
  
    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << endl;

// REFERENCE VS. POINTER

    /* Similarity: 
    - Both used to change local variables of one function 
    inside another function.
    - Used to copy of big objects when passed an arguments to functions 
    or returned from functions 
    */

    /* Differences: 
    - Reference CANNOT be UPDATED 
    - Reference is an internal pointer 
    - Refernce is less powerful than pointers */
    //Pointer can be declared as void but Reference CANNOT 
    int a = 10;
    void* aa = &a; // it is valid
    void& ar = a;  // it is not valid

    //Pointer variables has n-levels of indirection whereas, Reference has only one-level indirection. 
    int i = 10; // simple or ordinary variable.
    int *p = &i; // single pointer
    int **pt = &p; // double pointer
    int ***ptr = &pt; // triple pointer
    // All the above pointers differ in the value they store or point to.
    cout << "i = " << i << "\t" << "p = " << p << "\t"
         << "pt = " << pt << "\t" << "ptr = " << ptr << '\n';

    int a = 5; // simple or ordinary variable
    int &S = a;
    int &S0 = S;
    int &S1 = S0;
    cout << "a = " << a << "\t" << "S = " << S << "\t"
         << "S0 = " << S0 << "\t" << "S1 = " << S1 << '\n';
    // All the above references do not differ in their values
    // as they all refer to the same variable.
}