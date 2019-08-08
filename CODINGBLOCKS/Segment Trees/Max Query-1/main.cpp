#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class node{
    public:
    ll data;
    ll smallestAmong;
    node(){
        data = INT_MAX;
        smallestAmong = 0;
    }
};

void buildtree(ll *arr, int ss, int se, node *tree, int index){
    node t = tree[index];
    if(ss==se){
         tree[index].data = arr[se];
         tree[index].smallestAmong = 1;
       // cout<<tree[index].smallestAmong<<endl;
        return;
    }

    ll mid = ss + (se-ss)/2;

    buildtree(arr,ss,mid,tree,2*index);
    buildtree(arr,mid+1,se,tree,2*index+1);
    node t1 =tree[2*index];
    node t2 = tree[2*index+1];
    t.data = min(t1.data,t2.data);
    t.smallestAmong = t1.smallestAmong + t2.smallestAmong;
    //cout<<"for range:"<<ss<<" and " <<se<<":"<<t.smallestAmong<<endl;
    tree[index]=t;
    return;
}

ll query(node *tree, int ss, int se, int l, int r,ll value, int index){
    if(ss>r || se<l || l>r){
        return 0;
    }

    if(ss>=l && se<=r){
        node t = tree[index];
        if(t.data>=value){
            return t.smallestAmong;
        }
    }

    ll mid = ss + (se-ss)/2;
    ll left = query(tree,ss,mid,l,r,value,2*index);
    ll right = query(tree,mid+1,se,l,r,value,2*index+1);
    return left+right;
}

int main() {
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++)  cin>>arr[i];
  ll q;
  cin>>q;
  node *tree = new node[4*n+1];
  buildtree(arr,0,n-1,tree,1);
  while(q--){
      ll L,R,K;
      cin>>L>>R>>K;
      cout<<query(tree,0,n-1,L-1,R-1,K,1)<<endl;
  }
}
