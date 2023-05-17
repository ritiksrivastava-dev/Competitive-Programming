/*
    Pointers have 
    1. Referencing Operator (#) which gives the address of the variable its used with
    2. Dereferencing Operator (*) which gives the information the address stored in the pointer points to.

    #Why pointer variables need to have the same datatype as the address of the variable
    they're storing the address of.
    When you dereference a pointer, the data type it points to must be known of the compiler so that it correctly interprets the data it finds there. This is why pointers are "typed".
    changing the "typeness" is a priori a mistake, this is not allowed except with an explicit cast.


    #The datatype only helps in allocating the required memory size to the specified datatype.
    This is not true. The type of a pointer p also tells the compiler what type to use for the 
    expression *p.

    If p is an int *, then *p has type int, and, if the program uses an expression such as a *p + 3, 
    the compiler will generate an integer add instruction (or equivalent code). If p is a float *,
    then *p has type float, and, if the program uses an expression such as *p + 3, the compiler
    will generate a floating-point add instruction (or equivalent code). 
    These different instructions will cause the computer to treat the bits of *p differently.

*/

//The void pointer is a generic pointer that is used when we don't know the data type of the variable that the pointer points to.
//As void is an empty type, void pointers cannot be dereferenced

#include <iostream>
using namespace std;

int main(){
    //accessing a variable and address stored in a pointer
    int a = 5;
    int* add_a = &a;

    cout << a << endl << add_a;

//Usage of dereferencing operator
    cout << *add_a << endl;

//Changing of value stored at a location 
    *add_a = 7;
    cout << a;
return 0;
}
