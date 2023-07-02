#include<bits/stdc++.h>
using namespace std;
#define int long long


vector<vector<int>> d;
int n;
for (int k = 0; k < n; ++k) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 
        }
    }
}

for (int k = 0; k < n; ++k) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (d[i][k] < INF && d[k][j] < INF)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 
        }
    }
}
// negative cycle detection
// for (int i = 0; i < n; ++i) {
//     for (int j = 0; j < n; ++j) {
//         for (int t = 0; t < n; ++t) {
//             if (d[i][t] < INF && d[t][t] < 0 && d[t][j] < INF)
//                 d[i][j] = - INF; 
//         }
//     }
// }


void solve(){
    
}

signed main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("r.txt", "w", stderr);
#endif
    // int t=1; cin>>t; while(t--)
    solve();

}