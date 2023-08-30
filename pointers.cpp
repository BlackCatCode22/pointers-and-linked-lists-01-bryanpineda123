#include <iostream>


using namespace std;

int main()
{

    cout << "\n\n\nWelcome to week four pointers practice!\n\n\n" << endl;

    int n = 5;
    cout << &n << endl; // & gives you the memory address
    int * ptr = &n; //ptr is a pointer that holds that memory address, * star symbol gives you access to that info
    cout << ptr << endl;
    cout << *ptr << endl; //Dereference of the memory address by using star symbol
    *ptr = 10; //Cross reference int n
    cout << *ptr << endl;
    cout << n << endl;

    // & name is address of operator
    // * name is deference operator
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

    int age = 19;
    int* pAge = &age;
    double gpa = 2.7;
    string name = "Mike";
    string* pName = &name;

    cout << pAge << endl; //cout << *pAge << endl;

    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    return 0;
}
