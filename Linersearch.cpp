#include<iostream>

using namespace std;

int main()
{
    int Array1[] = {1,4,5,7,8,9};

    int length = sizeof(Array1)/sizeof(Array1[0]);

    // search element

    int key = 7;

    // for traversing for loop
    for(int i =0;i<length;i++)
    {
        // condition
        
        if(Array1[i]==key)
        {
             cout<<"key present at location : "<<endl;
           cout<<i<<endl;

        }
    }

}