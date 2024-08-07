/*Find the first non-repeating element in the array .*/
#include<iostream>
#include<vector>
using namespace std;
void nonrepeating(vector<int>v,int n){
    bool flag=false;

    for(int i =0;i<n;i++){
    int j;

        for(int j =0;j<n;j++){
            if(i!=j && v[i]==v[j]) break;
        }
        
        if(j==n){
            cout<<v[i]<<" is nonreapating "<<endl;
            flag =true;
            break;
        }
    }
    if(!flag) cout<<"there is non-repeting";
}
int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    nonrepeating(v,n);
    
    
}