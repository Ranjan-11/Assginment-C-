/*Write a function that takes the radius of a circle as an argument and returns its area.*/
#include<iostream>
using namespace std;
float area(float r){
    float area=3.1415*r*r;
    return area;
    
}
int main(){
    float r;
    cin>>r;
    cout<<area(r);
    
    
    
}