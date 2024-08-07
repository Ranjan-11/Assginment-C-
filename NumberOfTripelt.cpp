/*Count the number of triplets whose sum is equal to the given value x.*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Value Of x :";
    cin>>x;
    int n;
    cout<<"Enter Array element :";
    cin>>n;
    int arr[n];
    int n=arr.size();

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == x) count++;
            }
        }
    }
    cout<<"Triplets Number is : "<<count<<endl;
    return 0;
}