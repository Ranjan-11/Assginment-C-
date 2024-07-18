/*If an array arr contains n elements, then check if the given array is a palindrome or not .*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,2,1};
    int n = sizeof(arr)/4;
    int i =0;
    int j = n-1;
    bool flag = true;
    while (i<j){
        if(arr[i] != arr[j]){
        flag = false;
        break;
        }
        i++;
        j--;
    }
    if(flag==true){
        cout<<"Array is Palidrome";
    }
    else {
        cout<<"Array is not Palidrome";
    }
}
    