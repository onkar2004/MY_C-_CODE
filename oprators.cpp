#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 2;

    //Addition opartor " + "
    int add = a+b;
    cout<<"Addition : "<<" "<<add<<endl;
     

    //substraction " - "
    int sub = a-b;
    cout<<"Subtraction : " <<" "<<sub<<endl;
    

    //multiplicaton " * "
    int mul = a*b;
    cout<<"Multiplication : "<< " " <<mul<<endl;

    //division " / "
    int div = a/b;
    cout<<"Division : "<<  " " <<div<<endl;
    

    //modulus " % " gives remainder
    int mod = a%b;
    cout<<"remainder : "<< " "<<mod<<endl;
    

    //incerment 
    //pre increment "++a"   a = 10
    ++a;                    //print 11 rather than 10 bcos first incerment then printed 
    cout<<"Perincrement addition : " <<" "<<a<<endl;
    
    //post incerment
    int x = 15; 
    x++;                   //print 16 bcos first printed then incerment
    cout<<"Postincrement addtion  : "<< " "<<x<<endl;
   
    //decerment
    //pre decerment "--a"
    int y = 25;
    --y;                    //print 24 rather than 25 bcos first decerment then printed 
    cout<<"Perincrement subtraction : " <<" "<<y<<endl;
     

    //post decerment
    int z= 13;
    z--;                  //print 12 
    cout<<"Perincrement subtraction : " <<" "<<z<<endl;

    return 0 ;
}