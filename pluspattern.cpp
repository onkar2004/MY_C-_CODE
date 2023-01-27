#include <iostream>

using namespace std;

int main() 
{
    int size;
    cout<<"Enter size : "<<endl;
    cin>>size;

    // loop for rows
    for(int i =1;i<=size;i++)
    {
        // loop for coumns
        for(int j =1;j<=size;j++)
        {
            // print star
            if(i==(size/2 + 1)||j==(size/2 +1))
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}