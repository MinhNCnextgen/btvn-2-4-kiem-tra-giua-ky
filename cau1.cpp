#include <iostream>
using namespace std;
void two_sum(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if (arr[i] + arr[j] == target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

int main(){
    int n,tar;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>tar;
    two_sum(arr, n, tar);
}