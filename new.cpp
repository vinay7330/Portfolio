#include <bits/stdc++.h>
using namespace std;
int maxWeightCell(int n, vector<int> edge){
    vector<int> cnt(n,0);
    for(int i=0; i<n; i++){
        if(edge[i] != -1)
            cnt[edge[i]] += i;
    }
    int ans = -1;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(maxi <= cnt[i]){
            maxi = cnt[i];
            ans = i;
        }
    }
    return ans;
  }
int main()
{
    int t;
    while(t--){
    int n ;
    vector<int> edge ;
    cin>>n;
    int temp=n;
    while(temp--){
        int weight;
        cin>>weight;
        edge.push_back(weight);
    }
    int ans = maxWeightCell(n,edge);
    cout << ans<<endl;
    }
}