#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};
Pair maxandmin(int arr[],int n){
    struct Pair minmax;
    int i;
    if(n==1){
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    if(arr[0]>arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main(){
    int n = 6;
    int arr[n] = {1000,11,445,1,330,3000};
    struct Pair minmax = maxandmin(arr,n);
    cout << "minmum element: " << minmax.min << "\n";
    cout << "maximum element: " << minmax.max << "\n";
    return 0;
}