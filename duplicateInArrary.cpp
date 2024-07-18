//Given an array, predict if the array contains duplicates or not.
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {1,-3,2,5,9,6,1};
    int n = sizeof(arr)/4;
    bool flag = false; //--> means no duplicate
    for (int i = 0; i < n; i++){
        for (int j = i +1; j < n; j++){
            if(arr[i] == arr[j]){
            flag = true;
            break;
            }
        }
        if(flag==true) break;
    }
    if(flag == true) cout<<"Duplicate element in array";
    else cout<<"All element are unique";
}