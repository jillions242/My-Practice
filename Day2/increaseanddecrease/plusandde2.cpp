//Inclass_CPP_02_42
#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=++a ;
    int c= a++;
    int g=++a;
    int h = a++;

    cout << b;//2 //มันทบค่าจากเดิม
    cout << c;//2 //เอาค่าที่ทบแล้วมาต่อ
    cout << g;//4
    cout << h;//4
    cout << a;//5
}
