#include<iostream>

using namespace std;

int main()
{
    int n ;
    cout<<"Enter number : "<<endl;
    cin>>n;
                // left triangle solid
    
    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        for(int j =1; j<=i;j++)
        {
            // print star
            cout<<"*"<<" ";
        }
        // next line
        cout<<endl;
    }

    // right triangle solid

    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        // print spaces
        for(int j =1;j<=(n-i);j++)
        {
            cout<<" "<<" ";
        }
        // loop for columns
        // print star
        for(int j =1; j<=i;j++)
        {
           cout<<"*"<<" ";
        }
        cout<<endl;
    }

                // left triangle hollow
    
    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        for(int j =1; j<=i;j++)
        {
            // print star
           // condition for star
           if(i==n||i==j||j==1)
           {
            cout<<"*"<<" ";
           }
           else{
            // condition for spaces
            cout<<" "<<" ";
           }
        }
        // next line
        cout<<endl;
    }

    // invert left triangle
    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        // print star
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    // right invert triangle

    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // loop for columns
        // print spaces
        for(int j =1;j<=(i-1);j++)
        {
            cout<<" "<<" ";
        }
        // print star
        for(int j =1;j<=(n-i+1);j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    
}