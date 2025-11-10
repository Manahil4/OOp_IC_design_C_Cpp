// Write a C++ program that uses pointers to:

// 
// 4.Fill the array with user input using pointer arithmetic.

// 6.Free the allocated memory using delete[].

#include <iostream>
using namespace std;
// 1.Store and display the value and address of an integer variable.

int ex1(){
    int *ptr;
 int c=1;
 ptr=&c;
 cout<<"Value of c;"<<*ptr<<endl;
 cout<<"Address of c:"<<ptr<<endl;

}

// 2.Create a pointer to pointer and display all levels of indirection.
int ex2(){
    int *ptr;
    int **ptrToPtr;
    int c=1;
    ptr=&c;
    ptrToPtr=&ptr;
    cout<<"C's value(using double dereferencing ptrToPtr):"<<**ptrToPtr<<endl;
    cout<<"C's value(using single dereferencing ptr):"<<*ptr<<endl;
}
// 3.Dynamically allocate an array of integers (size entered by user).
int ex3(){


}
// 5.Display the array elements and their memory addresses.
int ex5(){
    int arr[3]={1,5,7};
    for(int i=0; i<3;i++){
        cout<<"arr["<<i<<"]="<<*(arr+i)<<"at address"<<(arr+i)<<endl;
    }
}

int  main() {
 ex1();
 ex2();
 ex5();
}
 
 
 