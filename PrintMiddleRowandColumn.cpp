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
    //Printing Middle Row and Col
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(i==n/2 || j==m/2)
                cout<<arr[i][j]<<" ";
            else
                cout<<" "<<" ";
        }
        cout<<endl;
    }
}