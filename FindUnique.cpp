/*Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique.*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {1,2,1,4,2,3,4,5,5};
    int n = sizeof(arr)/4;
    for (int i = 0; i < n; i++){
        bool flag=true;
        for (int j = 0; j < n; j++){

            if(i==j) continue;
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
            if(flag==true){
                cout<<arr[i]<<endl;
                break;
            }
    }
           
}