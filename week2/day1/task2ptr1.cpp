// Write a C++ program that uses pointers to:
#include <iostream>
using namespace std;
// 1.Store and display the value and address of an integer variable.
int ex1(){    cout<<"\n ex1\n" ;int *ptr; int c=1; ptr=&c;
 cout<<"\nValue of c;"<<*ptr<<endl;
 cout<<"\nAddress of c:"<<ptr<<endl;}
// 2.Create a pointer to pointer and display all levels of indirection.
int ex2(){    cout<<"\nex2\n";int *ptr;    int **ptrToPtr;int c=1;    ptr=&c;    ptrToPtr=&ptr;
    cout<<"\nC's value(using double dereferencing ptrToPtr):"<<**ptrToPtr<<endl;
    cout<<"\nC's value(using single dereferencing ptr):"<<*ptr<<endl;}
// 3.Dynamically allocate an array of integers (size entered by user).
int ex3(){cout<<"\nex3\n";
	cout<<"\nSize o.f array";	int sizeArr;	cin>> sizeArr;int *arr=new int[sizeArr];}
// 4.Fill the array with user input using pointer arithmetic.
int ex4(){
	cout<<"\nex4\n";
cout<<"\nSize of Arr?";
int sizeArr;
cin>>sizeArr;
int arr[sizeArr];
for(int i=0; i<sizeArr; i++){
	cout<<"\nElement of array at "<<i;  
	cin>>arr[i];}}
// 5.Display the array elements and their memory addresses.
int ex5(){cout<<"\nEx5\n";
    int arr[3]={1,5,7};
    for(int i=0; i<3;i++){
        cout<<"\narr["<<i<<"]="<<*(arr+i)<<"at address"<<(arr+i)<<endl;}}

// 6.Free the allocated memory using delete[].
int ex6(){
cout<<"\nTask2; ex6";
	int a=9;
int *ptr=new int(a);

delete ptr;
cout<<"var A's is in stack and is not freed yet it is not free by deleting ptr as ptr creates a new int var on heap having same value as a, let's print a and ; " <<a; 
int *arr=new int[2];
delete[] arr;
cout<<"\narr is deleted as well";
}

int  main() {
 ex1();
 ex2();
 ex3();
 ex4();
 ex5();
 ex6();
}
 
 
 
