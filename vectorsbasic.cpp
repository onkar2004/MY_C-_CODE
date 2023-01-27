#include<iostream>

#include<vector>

using namespace std;

int main()
{
    vector<int>vector1; 

    // add  element

    vector1.push_back(1);
    cout<<"size : "<<(vector1.size())<<endl;
    cout<<"capacity : "<<(vector1.capacity())<<endl;

    vector1.push_back(2);
    cout<<"size : "<<(vector1.size())<<endl;
    cout<<"capacity : "<<(vector1.capacity())<<endl;

    vector1.push_back(3);
    cout<<"size : "<<(vector1.size())<<endl;
    cout<<"capacity : "<<(vector1.capacity())<<endl;

    vector1.push_back(4);
    cout<<"size : "<<(vector1.size())<<endl;
    cout<<"capacity : "<<(vector1.capacity())<<endl;

    vector1.push_back(5);
    cout<<"size : "<<(vector1.size())<<endl;
    cout<<"capacity : "<<(vector1.capacity())<<endl;

    cout<<"vector1 : ";

    // print vector1

    for(int i =0;i<vector1.size();i++)
    {
        cout<<vector1[i]<<" ";
    }

    // insert

   

    vector1.insert(vector1.begin()+2,45);

    vector1.insert(vector1.begin()+3,89);

    // print new vector1

    cout<<"\nvector after insretion : "<<endl;

     for(int i =0;i<vector1.size();i++)
    {
        cout<<vector1[i]<<" ";
    }

    // delete
    vector1.pop_back();     // last element will be deleted

    //print vector
    cout<<"\nvector after deletation : "<<endl;
    for(int i =0;i<vector1.size();i++)
    {
        cout<<vector1[i]<<" ";
    }

    // erase

    vector1.erase(vector1.begin()+1);

    // print vector

    cout<<"\nvector after erase : "<<endl;

    for(int i =0;i<vector1.size();i++)
    {
        cout<<vector1[i]<<" ";
    }


    // clear

    vector1.clear();

    //print vector

    cout<<"\nvector after clear : "<<endl;

     for(int i =0;i<vector1.size();i++)
    {
        cout<<vector1[i]<<" ";
    }

    cout<<"\nthanks"<<endl;

    return 0;




}