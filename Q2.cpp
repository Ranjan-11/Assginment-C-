/*Given the radius of the circle, predict whether numerically the area of this circle is larger 
than the circumference or not.  
Input 1: radius = 4 -- Output 1: Area is greater than circumference.
Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
Perimeter = 2 * 3.14 * 4 = 25.12 unit   Therefore area > perimeter*/
#include<iostream>
using namespace std;
int main(){
    float r=4,pi=3.14;
    float a=pi*r*r;
    cout<<"Area of circle:"<<a;
    float c=2*pi*r;
    cout<<"\ncircumference of circle:"<<c;
    if (a>=c)
    {
        cout<<"\nYes area of this circle is larger than the circumference:";
    }
    else{
        cout<<"area of circle is not larger than the circumference ";
    }
    
}