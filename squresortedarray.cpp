#include<iostream>

#include<vector>

using namespace std;

int main(){

    int n;
    cout<<"enter size : ";
    cin>>n;

    vector<int>v;

    // input
    cout<<"enter element : "<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    // to make absoulte Array
    // for(int i =0;i<v.size();i++){
    //     if(v[i]<0){
    //         v[i] = v[i]*(-1);
    //     }
    // }

    //to sort absoulte array
    // for(int i=0;i<v.size();i++){
    //     if(v[i]>v[i+1]){
    //         int temp = v[i+1];
    //         v[i+1]=v[i];
    //         v[i] = temp;
    //     }
    // }

    //squre of each element of array
    for(int i=0;i<v.size();i++){
        v[i]=v[i]*v[i];
    }

    for(int i=0;i<v.size();i++){
        if(v[i]>v[i+1])
        {
           swap(v[i],v[i+1]);
        }
    }

    // print sorted array
    cout<<"sorted array: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}