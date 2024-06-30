/*Given the length and breadth of a rectangle, write a program to find whether numerically the area of 
the rectangle is greater than its perimeter.*/
#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length:";
    cin>>l;
    cout<<"Enter the breadth:";
    cin>>b;
    float area=l*b;
    float perimeter=2*(l+b);
    cout<<perimeter<<"  "<<area<<endl;
    if(perimeter>area){
        cout<<" perimetr is greater"<<endl;
    }
    else{
        cout<<"Area is greater"<<endl;
    }
}