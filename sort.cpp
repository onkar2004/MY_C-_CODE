#include<iostream>

#include<vector>

using namespace std;

void sort(vector<int>&v)
{
    int count_zeros =0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
            count_zeros++;
        }
    }

    for(int i=0;i<count_zeros;i++)
    {
        if(v[i]==1)
        {
            v[i]=0;
        }
        if(v[i]==0)
        {
            v[i]=0;
        }
        
    }
    for(int i=count_zeros;i<v.size();i++)
    {
        if(v[i]==0)
        {
            v[i]=1;
        }
        if(v[i]=1)
        {
            v[i]=1;
        }
    }
    
}
int main()
{
    
    vector<int>v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    
    sort(v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}