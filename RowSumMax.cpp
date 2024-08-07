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
    int maxSum=INT_MIN;
    int maxRow=-1;
    for (int i = 0; i < n; i++)
    {
        int sum= 0;
        for(int j = 0; j < m; j++){
            sum +=arr[i][j];
        }
        if (sum>=maxSum)
        {
            maxSum=sum;
            maxRow=i;
        }
        
    }
    cout<<maxSum<<endl<<maxRow;
    
}