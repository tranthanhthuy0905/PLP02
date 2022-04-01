#include <iostream>
using namespace std;

int main()
{

    // C++ contains the following Primitive data types:

    // Integer
    int integerVar;
    cout << "Size of integer : " << sizeof(integerVar)
         << " bytes" << endl;  // 4 bytes

    // Character
    char characterVar;
    cout << "Size of char : " << sizeof(characterVar)
         << " byte" << endl;  // 1 byte

    // Boolean
    bool booleanVar;
    cout << "Size of boolean : " << sizeof(booleanVar)
         << " byte" << endl;  // 1 byte

    // Floating Point
    float floatingVar;
    cout << "Size of float : " << sizeof(floatingVar)
         << " bytes" << endl;  // 4 bytes

    // Double Floating Point
    double doubleFloatingVar;
    cout << "Size of double float : " << sizeof(doubleFloatingVar)
         << " bytes" << endl;  // 8 bytes

    // Void

    // Wide character - huge character data type
    wchar_t wideVar;
    cout << "Size of wide character : " << sizeof(wideVar)
         << " bytes" << endl;  // 4 bytes
}