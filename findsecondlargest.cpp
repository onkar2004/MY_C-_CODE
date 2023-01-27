#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size :"<<endl;
    cin>>size;

    int Array[size];

    for(int i =0;i<size;i++)
    {
        cin>>Array[i];
    }

    int max1 =0;
   int maxindex;

    for(int i=0;i<size;i++)
    {
        if(Array[i]>max1)
        {
            int temp = max1;
            max1  = Array[i];
            Array[i] = temp;
             maxindex = i;
           
        }
    }
    cout<<"1st largest element is : "<<max1<<endl;

    max1 = -1;

    int max2=0;

    for(int i=0;i<size;i++)
    {
        if(Array[i]>max2)
        {
            int temp = max2;
            max2  = Array[i];
            Array[i] = temp;
             
        }
    }

    cout<<"2nd largest element is : "<<max2<<endl;

    max2 =-1;

     int max3=0;

    for(int i=0;i<size;i++)
    {
        if(Array[i]>max3)
        {
            int temp = max2;
            max3  = Array[i];
            Array[i] = temp;
             
        }
    }
    cout<<"3rd largest element is : "<<max3<<endl;

}