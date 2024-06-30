/* Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or 
isosceles triangle*/
#include<iostream>
using namespace std;
int main(){
    int a,b,h;
    cout<<"Enter a side:";
    cin>>a;
    cout<<"Enter a base:";
    cin>>b;
    cout<<"Enter a Height:";
    cin>>h;
    if (a == b && b==h && h==a){
        cout<<"It is a equilateral triangle:\n";
        
    }
    else if (a == b || b == h || h == a)
    {
         cout<<"It is a Isoceles triangle:\n";
    }
    else{
         cout<<"It is a Scalene triangle:\n";
    }
    
   




}