#include<iostream>
using namespace std;
int main()
{
    double w,h,BMI;
    cout<<"Input your weight(kg) : ";
    cin>>w;
    cout<< "Input your height(cm) : ";
    cin>>h;
    h=h/100;
    BMI=w/(h*h);
    cout<<BMI<<endl;
    if(BMI>25)
    {
        cout<<"FAT";
    }
    else
    {
            if(BMI<20)
            {
                cout<<"THIN";
            }
            else
            {
                cout<<"Normal";    
            }
        
    }
    return 0;

    
}
