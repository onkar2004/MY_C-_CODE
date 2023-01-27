#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size : "<<endl;
    cin>>size;

    int Array[size];

    for(int i =0;i<size;i++){
        cin>>Array[i];
    }

    int sum;
    cout<<"Enter sum : "<<endl;
    cin>>sum;

    int triplets =0;

    for(int i =0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(Array[i]+Array[j]+Array[k]==sum)
                {
                    triplets++;
                }
            }
        }
    }
    cout<<"triplets : "<<triplets<<endl;
}