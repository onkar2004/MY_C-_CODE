#include <iostream>

using namespace std;

int main()
{
    // detecting vowels and consonents
    char charecter;
    int month;
    cin>>charecter>>month;
    switch(charecter)
    {
       case 'a' :
        cout<<"vowels"<<endl;
        break;

        case 'e' :
        cout<<"vowels"<<endl;
        break;

        case 'i' :
        cout<<"vowels"<<endl;
        break;

        case 'o' :
        cout<<"vowels"<<endl;
        break;

        case 'u' :
        cout<<"vowels"<<endl;
        break;

        default :
        cout<<"consonents"<<endl;

    }
        //programe to find month
        switch(month)
        
        {
            case 1:
            cout<<"JAN"<<endl;
            break;

            case 2:
            cout<<"FEB"<<endl;
            break;

            case 3:
            cout<<"MARCH"<<endl;
            break;

            case 4:
            cout<<"APRIL"<<endl;
            break;

            case 5:
            cout<<"MAY"<<endl;
            break;

            case 6:
            cout<<"JUN"<<endl;
            break;

            case 7:
            cout<<"JULY"<<endl;
            break;

            case 8:
            cout<<"AUGUST"<<endl;
            break;

            case 9:
            cout<<"SEP"<<endl;
            break;

            case 10:
            cout<<"OCT"<<endl;
            break;

            case 11:
            cout<<"NOV"<<endl;
            break;

            case 12:
            cout<<"Dec"<<endl;
            break;

            default:
            cout<<"default month"<<endl;
        }
}