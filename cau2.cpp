#include <iostream>
using namespace std;
int main(){
    int m,n,k,q;
    cin>>m>>n>>k>>q;
    int arr[m][n];
    int res[q];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }
    for (int i=0;i<k;i++){
        int x,y,v;
        cin>>x>>y>>v;
        arr[x][y] = v;
    }
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        int sum=0;
        if (x+1<m && y+1<n){
            sum+=arr[x+1][y+1];
        }
        if (x+1<m && y-1<n){
            sum+=arr[x+1][y-1];
        }
        if (x-1<m && y+1<n){
            sum+=arr[x-1][y+1];
        }
        if (x-1<m && y-1<n){
            sum+=arr[x-1][y-1];
        }
        if (x<m && y+1<n){
            sum+=arr[x][y+1];
        }
        if (x+1<m && y<n){
            sum+=arr[x+1][y];
        }
        if (x<m && y-1<n){
            sum+=arr[x][y-1];
        }
        if (x-1<m && y<n){
            sum+=arr[x-1][y];
        }
        if (x<m && y+1<n){
            sum+=arr[x][y+1];
        }
        res[i] = sum;
    }
    for(int i=0;i<q;i++) cout<<res[i]<<endl;
}
