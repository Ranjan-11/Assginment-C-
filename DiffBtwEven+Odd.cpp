/*Find the difference between the sum of elements at even indices to the sum of elements at odd indices.*/
#include<iostream>
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
    int sumEven =0;
    int sumOdd =0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){ 
        sumEven += arr[i];
        }
        else {
        sumOdd += arr[i];
        }
        //(i%2==0) ? sumEven += arr[i] : sumOdd += arr[i] ; // ? means true ,  : ya yeh kr do
    }
    cout<<sumEven - sumOdd;
    // 
}