#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	int n;
	vector<int>v;
    int val;
    cin>>n;
	for(int i=0;i<n;i++){
       cin>>val;
       v.push_back(val);
	}
    int size = n;
	ll piyush=0,nimit=0;
	while(true){
		if(size==1)
		  break;
		int maximum = max(v.front(),v.back());
		if(maximum == v.front()){
           if(size&1){
			   nimit += v.front();
			   v.erase(v.begin());
		   }
		   else{
			   piyush += v.front();
			   v.erase(v.begin());
		   }
		}
		else{
			if(size&1){
			   nimit += v.back();
			   v.pop_back();
		   }
		   else{
			   piyush += v.back();
			   v.pop_back();
		   }
		}
		size--;
	}
	cout<<piyush<<endl;
	return 0;
}
