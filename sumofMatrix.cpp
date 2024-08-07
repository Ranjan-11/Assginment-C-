#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>brr[i][j];
        }
    }
        // Adding process
    for (int i = 0; i <= n-1; i++){
        for(int j=0;j<=m-1;j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    // Printing the Addition of two array
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}