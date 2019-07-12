#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Input your score : ";
    cin>>s;
    if(s<50)
    {
        cout<<"F";
    }
    else
    {
        if(s<60)
        {
            cout<<"D";
        }
        else
        {
            if(s<70)
            {
                cout<<"C";
            }
            else
            {
                if(s<80)
                {
                    cout<<"B";
                }
                else
                {
                    cout<<"A";
                }
                
            }
            
        }
        
    }
    return 0;
}