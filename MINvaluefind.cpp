//Find the minimum value out of all elements in the array.
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {1,-3,2,5,-2,6,3};
    int n = sizeof(arr)/4;
    int max=INT_MIN;
    int smax=INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            smax = max;
            max=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<smax<<endl;
}