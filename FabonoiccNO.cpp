#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a = 1,b = 1 ,fibo; 
    cout<<a<<" "<<b<<" "<<endl;

    for(int i = 3; i <= n ; i++){
    
    fibo=a + b;
    cout<<fibo<<endl;
    a = b;
    b = fibo;
        
    }
    
    

}