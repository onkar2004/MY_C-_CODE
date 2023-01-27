#include<iostream>

using namespace std;

int main()
{

    int arr[2][2] = {{1 , 1},
                    {4 , 8}};

    int ele = 8;
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            if(arr[i][j] == ele){
                cout<<"element is present"<<endl;
            }
        }
    }
}