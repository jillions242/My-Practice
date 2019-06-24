#include<iostream>
using namespace std;
int main (int argc, const char * argv []){
    /* if (year is not divisible by 4) then (it is a common year)
    else if (year is not divisible by 100) then (it is a leap year)
    else if (year is not divisible by 400) then (it is a common year)
    else (it is a leap year)*/
    int y;
    cout<<"Please input year :";
    cin>> y;
    //ถ้า y หาร 4 ไม่ลงก็คือ ไม่เท่ากับ 0
    if (y%4 !=0) // ==,!=,<=,>=,<,>
    {
        cout<<"it is common year \n";
    }
    else
    {
        if(y % 100 != 0)
        {
            cout << "leap year\n";
        }
        else
        {
            if(y % 400 != 0){
                cout << "it is common \n";
            }
            else{
                cout << "leap year\n";
            }
        }
        
    }
    
    
return 0;
}
 