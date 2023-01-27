#include<iostream>

using namespace std;

int main()
{
    // Array decleration
    
    // declere size
    int size;
    cout<<"Enter size of Array : "<<endl;
    cin>>size;

    int Array1[size];

    cout<<"Enter element of Array1 : "<<endl;
    // input Array using for loop
    for(int i =0;i<size;i++)
    {
        cin>>Array1[i];
    }
    // print Array1
     cout<<"Array1 : "<<endl;
    for(int i =0;i<size;i++)
    {
       
        cout<<Array1[i]<<" ";
    }

    // Array input using for each loop
    
    int Array2[size];

    cout<<"\nEnter element for Array2 : "<<endl;

    for(int &ele :Array2 )
    {
       
        cin>>ele;
    }
    
    //print Array2
     cout<<"Array2 : "<<endl;
    for(int ele : Array2)
    {
       
        cout<<ele<<" ";
    }

    // Array input using while loop

    int Array3[size];

    int index =  0;

    int length = sizeof(Array3)/sizeof(Array3[0]);

     cout<<"\nEnter element for Array3 : "<<endl;

    while(index<length)
    {
       
        cin>>Array3[index];
        index++;

    }
    // print Array3
     cout<<"Array3 : "<<endl;
    while(index<length)
    {
       
        cout<<Array3[index]<<" ";
        index++;
    }

}