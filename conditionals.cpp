#include <iostream>

using namespace std;

int main()
{
    int marks,age;
    cin>>marks>>age;
    //IF - STATEMENT
    // to cheak resul
    
    if(marks>=35)
    {
        cout<<"you are pass"<<endl;
    }

    //IF - ELSE STATEMENT
    // to check the eligibility for voting
    if(age>=18)
    {
        cout<<"you are eligible for voting"<<endl;
    }
    else
    {
        cout<<"you are not eligible for voting"<<endl;
    }
    
        //  IF- ELSEIF STATEMENT
        //  detecting age group
        if(age<=12)
        {
            cout<<"you are child"<<endl;
        }
        else if(age>18)
        {
            cout<<"you are adult"<<endl;
        }
        else
        {
            cout<<"you are teenager"<<endl;
        }

            //NESTED IF - ELSE 
            // grade detector
            if(marks>=35)
            {
                if(marks>=90)
                {
                    cout<<"you are pass with A++ grade"<<endl;
                }
                else if(marks>=80)
                {
                    cout<<"you are pass with A grade"<<endl;
                }
                else if(marks>=70)
                {
                    cout<<"you are pass with B grade"<<endl;
                }
                else{
                    cout<<"you are pass"<<endl;
                }
            }
            else{
                cout<<"you are FAIL"<<endl;
            }

            // ternary ===>>> short form of if - else

            marks >= 35 ? cout<<"result status : pass"<<endl : cout<<"result status : fail"<<endl;

            return 0;
}