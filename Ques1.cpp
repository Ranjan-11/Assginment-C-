/*Write a program to find the product of two numbers using pointers.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int* ptr1= &a;
    int* ptr2= &b;
    cout<<(*ptr1)*(*ptr2)<<endl;
     
}
