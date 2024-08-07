#include<iostream>
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
    //coordinates
    int x1,y1,x2,y2;
    cout<<"Enter the 1st Coordinates :"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the 2nd Coordinates :"<<endl;
    cin>>x2>>y2;
    int sum=0;
    for (int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum += arr[i][j];
        }
    }    
    cout<<sum;
}