#include <iostream>

using namespace std;

int main() 
{
    //Bitwise Oprators

    //  " ~ "
    int a =4;       // 5 ==>> 0100
    int b= 8;       // 8 ==>> 1000

    cout<<(~a)<<endl;       //print complement -5

    // " << "

    cout<<(a<<1)<<endl;     // Left Shift  ===>>> multiply by 2 ; print 0100 ==>>1000 ==>> 8;
    cout<<(b<<1)<<endl;     //left shift ===>>> multiply by 2 ; print 1000 ==>> 10000 ==>> 16;       4 bits

    // " >> "   Right Shift

    cout<<(a>>1)<<endl;     //right shift ====>>> divided by 2 ; print 0100 ===>>> 0010 ==> 2;
    cout<<(b>>1)<<endl;     //right shift ===>>> divided by 2  print 1000 ==>> 0100 ==>> 4;

    //bitwise OR " | "
    
    cout<<(a | b)<<endl;        //0100 | 1000 ==>> 1100 => 12;

    //bit wise AND " & "

    cout<<(a & b)<<endl;        //0100 & 1000 ==> 0000 ==> 0;

    //exclusive OR " ^ "

    cout<<(a ^ b)<<endl;        //0100 ^ 1000 ==> 1100 ==>> 12
    int x= 15 ;         // ==>> 1111
    int y = 10;     // 1010;

    cout<<(x^ y)<<endl;        //  1111 ^ 1010 ==>> 0101 == >. 5

    return 0;

}