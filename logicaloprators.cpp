#include <iostream>

using namespace std;

int main()
{
    //Logical oprators

    //Logical AND " && " 
    // if T && T => True 1 otherwise flase 0 

    int a = 5;
    int b = 10;

    cout<<((a==5) && (b==10)) << endl;          //true 1

    cout<<(a==4 && b==10)<<endl;                //flase 0

    cout<<(a==4 && b==7)<<endl;      //flase 0

    //logical OR    " || "
    //if F || F => f otherwise true 1

    cout<<(a==4 || b==7)<<endl;         //flase 0

    cout<<(a==4 || b==10)<<endl;        //true 1

    // logocal NOT " ! " => !T = > F

    cout<<(!b!=10)<<endl;            //true 1

    cout<<(!a==5)<<endl;            //flase 0

    return 0;

}