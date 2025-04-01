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
int binary_search(int arr[], int target, int end, int start){
    if (start > end) return -1;
    int middle = (start+end)/2;
    if (arr[middle] == target) return middle;
    if (arr[middle] > target) return binary_search(arr, target, middle-1, start);
    if (arr[middle] < target) return binary_search(arr, target, end, middle+1);

}
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    bubble_sort(arr, n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<binary_search(arr, target, n, 0)<<endl;
    return 0;
}
