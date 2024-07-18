/*WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array :";
    cin>>n;
    cout<<"Enter array of element:";
    int arr[n];
    for (int i = 0; i <= n; i++){
        cin>>arr[i];
    }
    bool flag= false;
    for (int i = 0; i <= n; i++){
        if(arr[i] != i +1){
            flag=true;
            cout<<i+1<<" is smallest missing positive element";
            break;
        }
        
    }
    if(flag == false) cout<<"there was no missing element";
    
}