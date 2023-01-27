#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    
    while(n>0)
    {
       int lastdigit = n%10;
      cout<<lastdigit;
       n = n/10;
    }

   cout<<"\nthanks"<<endl;
    
}