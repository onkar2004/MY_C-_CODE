#include<iostream>

using namespace std;

int main()
{   
    //size input
    int size;
    cout<<"Enter size : "<<endl;
    cin>>size;
    //Array decleration
    int Array[size];

    cout<<"enter element : "<<endl;
    //input array
    for(int i =0;i<size;i++)
    {
        cin>>Array[i];
    }
    // Array traveling
    for(int i =0;i<size;i++)
    {
        for(int j =i+1;j<size;j++)
        {
            // manipulation
            if(Array[i]==Array[j])
            {
                Array[i]=Array[j] = -1;
            }
        }
    }

    // output remaining numbers
    
    cout<<"below elements present at once in array : "<<endl;
    for(int i=0;i<size;i++)
    {
        if(Array[i]>0)
        {
            
            cout<<Array[i]<<endl;
        }

        
    }
}