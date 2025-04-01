#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    bool sorted = true;
    while (sorted){
        sorted = false;
        for (int i=1;i<n;i++){
            if (arr[i-1]>arr[i]){
                sorted = true;
                swap(arr[i-1], arr[i]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

