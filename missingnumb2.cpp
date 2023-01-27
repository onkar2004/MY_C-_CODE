#include<iostream>

using namespace std;

int main(){

    int x = 7;

    int arr[7] = {1,2,3,4,6,7,8};

    int n =x+1;

    int sumall = ((n)*(n+1))/2;

    int sumarr =0;

    for(int i =0;i<x;i++){
        sumarr = sumarr+arr[i];
    }

    int ans = sumall - sumarr;

    cout<<ans;

}