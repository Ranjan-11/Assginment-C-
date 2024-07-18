/*Count the number of elements strictly greater than x*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter a array size :";
    cin>>n;
    int arr[n];
    cout<<"Enter the  element of array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter a x :";
    cin>>x;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>x)
        count++;
    }
    cout<<count<<endl;
    
    
    
}



