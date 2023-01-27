#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number : "<<endl;                          // DIAMOND pattern
    cin>>n;
    // loop for rows
    for(int i=1;i<=n;i++)
    {
        // loop for columns
        // print spaces
        for(int j =1;j<=(n-i);j++)
        {
            cout<<" "<<" ";
        }
        // print star
        for(int j =1; j<=(2*i-1);j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    // inverse triangle pattern

    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // loo for columns
        // print spaces
        for(int j =1;j<=(i-1);j++)
        {
            cout<<" "<<" ";
        }
        // print star
        for(int  j=1;j<=(2*(n-i)+1);j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}