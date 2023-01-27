#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void sort01(vector<int>&v){

    int left_ptr =0;
    int right_ptr =v.size()-1;

    for(int i=0;i<v.size();i++){
        if(v[left_ptr] ==1 && v[right_ptr] ==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]!=0){
            right_ptr--;
        }

    }
    return;
}

void sort12(vector<int>&v){
    int left_ptr =0;
    int right_ptr =v.size()-1;

    for(int i=0;i<v.size();i++){
        if(v[left_ptr] ==2 && v[right_ptr] ==1){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }

    }
    return;
}
int main(){

    int n;
    cout<<"enter size "<<endl;
    cin>>n;

    vector<int>v;

    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);

    sort01(v);
    sort12(v);

    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}