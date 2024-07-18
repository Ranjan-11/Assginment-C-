//Find the second largest element in the given Array in one pass.
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    //input
    for (int i = 0; i <= n; i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i]>max)
         max=arr[i];
        
    }
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i]>smax && arr[i]!=max)
         smax=arr[i];
        
    }
    cout<<smax;
    

}