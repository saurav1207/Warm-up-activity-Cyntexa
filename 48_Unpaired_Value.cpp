#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    int xori = 0;
    for(int i = 0; i < n; i++) {
        xori ^= arr[i];
    }
    cout<<xori;
    
    // unordered_map<int,int> mp;
    // for(int i = 0; i < n; i++){
    //     mp[arr[i]]++;
    // }

    // for(auto itr : mp){
    //     if(itr.second % 2 != 0){
    //         cout << itr.first << " ";
    //     }
    // }
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    solve(arr, n);
    return 0;
}
