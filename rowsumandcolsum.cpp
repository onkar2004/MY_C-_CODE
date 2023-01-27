#include<iostream>

using namespace std;

int main()
{
    int arr[5][5] ={
                    {1,3,5,7,4},
                    {4,6,7,9,2},
                    {3,5,7,9,0},
                    {3,5,7,9,0},
                    {2,3,5,7,1}
                    };

    int sum =0;
    cout<<"row sum :"<<endl;
    for(int i =0;i<5;i++){
        for(int j =0;j<5;j++){
            sum =sum + arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
    cout<<"columns sum :"<<endl;

    for(int j=0;j<5;j++){
        for(int i =0;i<5;i++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
        
    }

}