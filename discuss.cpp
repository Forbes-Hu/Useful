#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("discuss.in", "r", stdin);
	freopen("discuss.out", "w", stdout);
	int t;
	while(t>0){
		int n;
		cin >> n;
		bool pro[1000005][1000005];
		memset(pro, "False", sizeof(pro));
		for(int i=1; i<=n; i++){
			int k; cin >> k;
			for(int j=1; j<=k; j++){
				int a; cin >> a;
				pro[i][a] = "True";
			}
		}
	}
} 
