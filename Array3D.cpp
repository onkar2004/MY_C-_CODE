#include<iostream>

using namespace std;

int main()
{
    int arr[2][2][3] = 
                        {{{1,2,3},{4,5,6}},
                        {{9,0,6},{5,6,8}}};

    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            for(int k=0;k<3;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
    }


}