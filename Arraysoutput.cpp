#include<iostream>

using namespace std;

int main()
{   
    // array decleration
    int Array[] = {1,2,3,5,6,7};

    // array length
    int length = sizeof(Array)/sizeof(Array[0]);

    // output print using for loop
    for(int i = 0;i<length;i++)
    {
        cout<<Array[i]<<" ";
    }
   cout<<endl;
  // output print using for each loop
   for(int ele : Array)
   {
    cout<<ele<<" ";
   }
    cout<<endl;
   // output print using while loop
   int index = 0;
   while(index<length)
   {
    cout<<Array[index]<<" ";
    index++;
   }
   cout<<endl;

   

    return 0 ;

}