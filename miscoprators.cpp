#include <iostream>

using namespace std;

int main() 
{
    //  size of
    int a = 4;
    string str = "tony";
    char alfa = 'a';

    cout<<(sizeof(a))<<endl;        // print 4
    cout<<(sizeof(str))<<endl;      // print 24
    cout<<(sizeof(alfa))<<endl;     // print 1

    //condition ? st1:st2

    cout<<(4==5 ? a=4:a=5)<<endl;   //if condition flase then print 2nd statement; print 5

    cout<<(5==5 ? a=5:a=6)<<endl;       //if condition is true print 1st statement; print 5

    // COMMA " , "

    int y ;
     cout<<(y = 2,4,6)<<endl;       // print y = 6 bcos of comma

     // ADDRESS OPRATOR " &A "

     cout<<(&a)<<endl;              //print memory location

     //POST INCREMENT "A++"
     int z = 6;
     cout<<(z++)<<endl;     // print 6 bcos 1st print then increment

     //pre increment

     cout<<(++z)<<endl;         //print 6 bocs first increment in above function a update to 7 ; so now 7 update to 8;

     return 0; 


}