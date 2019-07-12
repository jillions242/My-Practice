#include<iostream>
#include<math.h>
using namespace std;
int main (int argc,const char * argv[]){
    cout << "hello\n";
    double a=8;
    double b=7;
    double c=10;
    double x=2;
    double x1=2,x2=3,x3=4,x4=5;
    //1)
    cout <<pow (   (a+pow(b,2)*c)   , 2    )<<"\n";

    //2)
    cout << pow((1+x),2)<<"\n";

    //3)
    cout << (x1-x2)*(x1-x3)<<"\n";

    //4)
    cout << sqrt((a-b)*(b-c)*(c-a))<<"\n";

    //5)
    cout << c/((1/a)+(1/b))<<"\n";

    //6)
    cout << (1/sqrt(5))*(a+b)<< "\n";

    //7)
    cout << pow (  (x1-x2),  3)/(pow(x1,-2)-pow(x2,-2))<< "\n";

    //8)
    cout << 1+x+pow(x,2)+pow(x,3)+pow(x,4)+pow(x,5)<< "\n";


    


    return 0;
    
}
