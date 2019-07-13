#include<iostream>
using namespace std;
int main(){
    int b=2;
    int a=5;;
    b=b + ++a + a++;
    cout<<b<<endl;
    cout<<a;
}
