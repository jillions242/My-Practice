//Inclass_Cpp_02_25
#include<iostream>
using namespace std;
int main(){
    int a=0;
    while(a<1000)
    {
        if(a%5 ==0 && a%7==0)
        {
            cout<<a<<endl;
        }
        a=a+1;
    }
    return 0;
  
}
