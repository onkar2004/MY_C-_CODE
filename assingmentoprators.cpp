#include <iostream>

using namespace std;

int main()
{
    //Assingment oprators

    //" = "
    int a = 28;
    int b = 27;

    b = a;
    cout<<b<<endl;      //print b = 28 not b =27 bcos in above st. value of a will be assing to b.

    // " += "
    int x =12;
    x += x;
    cout<<x<<endl;           //print 24 rather than 12 bcos x += x ==>> x = x+x;

    //" -= "                a -= a ==>> a = a-a
    int y = 16;
    y -= y;
    cout<<y<<endl;      //print 0
    
    // " /= "           a /= a  ==>>  a = a/a
    int z = 2;
    z /= z;
    cout<<z<<endl;      //print 1

    // " %= "           a %= a ==>> a = a% a
    int w = 3;
    w %= w;
    cout<<w<<endl;      //print 0

    return 0 ;
}