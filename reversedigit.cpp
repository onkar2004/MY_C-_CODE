#include<iostream>

using namespace std;

int main()                                      //first reverse = 0;lastdiit = 3    ==>> 0*10+3 ==>>3 == reverse
{                                               // reverse ==3 ; lastdigit  = 2 bcos n/10 ==>> 3*10+2 == 32 == reverse
                                                // reverse == 32 ; last digit = 1 bcos n/10 ==>> 32*10+1 == 321 == reverse == output
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int reverse = 0;

    // while loop
    while(n>0)
    {
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;       
        n = n/10;
    }
    cout<<reverse<<"\nThanks"<<endl;
}