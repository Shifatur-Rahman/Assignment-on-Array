#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {1,3,11,2,7}, target = 9;
int i, j, n;
n = sizeof(arr)/sizeof(arr[0]);

for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
        if(arr[i]+arr[j]==target){
            cout<<i<<" "<<j<<endl;
        }
    }
}

// Time complexity => 0(n2)
// space complexity => 0(1)

}
