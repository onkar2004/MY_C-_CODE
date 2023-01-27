#include <iostream>

using namespace std;

int main()
{
    
    int size;
    cout<<"Enter size of Array : "<<endl;
    cin>>size;
    int Array[size];

    cout<<"Enter element of Array : "<<endl;

   

    int pairs =0;
    // input Array
    for(int i =0;i<size;i++)
    {
        cin>>Array[i];
    }

     int sum;
    cout<<"Enter sum : "<<endl;
    cin>>sum;

    // target sum finding loop
    for(int i =0;i<size;i++)
    {
        for(int j =i+1;j<size;j++){
            if(Array[i]+Array[j]==sum)
            {
                pairs++;
            }
        }
    }
    cout<<"pairs : "<<pairs<<endl;

}