#include<iostream>
using namespace std;
int main (int argc, const char * argv []){
    int y;
    cout<<"Please input year :";
    cin>> y;
    if (y%4 ==0) // ==,!=,<=,>=,<,>
    {
        if(y % 100 == 0)
        {
           
            if(y % 400 == 0)
            {
                cout << "leap year\n";
                
            }
            else{
               cout << "it is common \n";
            }
        }
        else
        {
            cout << "leap year\n";
        } 
    }
    else
    {
        cout << "it is common year\n";
    }
    return 0;






}


