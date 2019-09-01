#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>>vec;
		while(n--){
               int a;
			   int b;
			   cin>>a>>b;
			   vec.push_back({b,a});
		}
		sort(vec.begin(),vec.end());

		int val = vec[0].first; // first activity which ends
		int ans = 1;
		for(int i=1;i<vec.size();i++){
             if(vec[i].second>=val){
				 ans++;
				 val = vec[i].first;
			 }
		}
		cout<<ans<<endl;
	}
	return 0;
}
