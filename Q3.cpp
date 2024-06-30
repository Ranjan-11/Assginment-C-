/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year 
or not. (Considering leap year occurs after every 4 years)
Input 1: 1976
Output: yes
Input 2: 2003
Output: no*/
#include<iostream>
using namespace std;
int main(){
    int leap;
    cout<<"Enter the year:";
    cin>>leap;
    if (leap/4 == 0)
    {
        cout<<leap<<"-is leap year";
    }
    else{
        cout<<leap<<"-is Not a leap year";
    }
    

}