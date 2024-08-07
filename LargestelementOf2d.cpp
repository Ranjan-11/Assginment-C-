#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int larger=INT_MIN;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(arr[i][j]>larger) 
            larger=arr[i][j];
        }
    }
    cout<<larger;
}