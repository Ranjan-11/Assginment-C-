/* If the marks of A, B and C are input through the keyboard, write a program to determine the student 
scoring the least marks.*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a Marks of A:";
    cin>>a;
    cout<<"Enter a Marks of B:";
    cin>>b;
    cout<<"Enter a Marks of C:";
    cin>>c;
    if (a < b && b < c){
        cout<<" 'A' has the least marks.";
        
    }
    else if (b < a && b < c)
    {
         cout<<" 'B' has the least marks.\n";
    }
    else{
         cout<<" 'C' has the least marks.\n";
    }
}
   