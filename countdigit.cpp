#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int digit = 0;
    // if we divide by 10 to some number it`s number is decreging by one digit
    // while loop for counting
    while(n>0)
    {
       digit++;
       n=n/10;
    }
    cout<<digit<<endl;
    cout<<"Thanks"<<endl;

    
}
