#include <iostream>
#include<vector>
#define ll long long int
using namespace std;
ll n;
ll k;
ll q;
ll T,L,R;
vector<int>arr(100001);
vector<ll>vec(400020);

void buildtree(ll ss, ll se, ll index){
    if(ss==se){
        int sizeofarr = n;
        sizeofarr += ss;
        ll sum = 0;
        for(int i=1;i<=k;i++){
            int ind = (sizeofarr - i ) % n;
            sum += arr[ind];
        }
        vec[index] = sum;
        return;
    }

    ll mid = ss + (se-ss)/2;
    buildtree(ss,mid,2*index);
    buildtree(mid+1,se,2*index+1);
    vec[index] = vec[2*index] + vec[2*index+1];
    return;
}

ll query(ll ss, ll se , ll l, ll r,ll index){
    if(ss>r || se<l){
        return 0;
    }

    if(ss>=l && se<=r){
        return vec[index];
    }

    ll mid = ss + (se-ss)/2;

    ll left;
    ll right;

    if(r<=mid){
        return query(ss,mid,l,r,2*index);
    }

    if(l>=mid+1){
        return query(mid+1,se,l,r,2*index+1);
    }

    left = query(ss,mid,l,r,2*index);
    right = query(mid+1,se,l,r,2*index+1);

    return left + right;
}

void update(ll ss, ll se, ll index, ll node, ll val){
    if(node<ss && node>se){
        return;
    }

    if(ss==se){
        vec[index] -= arr[L-1];
        vec[index] += val;
        return;
    }

    ll mid = ss+(se-ss)/2;

    update(ss,mid,2*index,node,val);
    update(mid+1,se,2*index+1,node,val);
    vec[index] = vec[2*index]+vec[2*index+1];
    return;
}


int main()
{   cin>>n>>k>>q;
    for(int i=0;i<n;i++) cin>>arr[i];
    buildtree(0,n-1,1);
    while(q--){

        cin>>T>>L>>R;
        if(T==2){
            cout<< query(0,n-1,L-1,R-1,1)<<endl;

        }
        else{
            ll lower = L-1;
            for(int i=0;i<k;i++){
               update(0,n-1,1,lower,R);
               lower = (lower+1)%n;
            }

            arr[L-1] =  R;
             for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";

            cout<<endl;
        }
    }
    return 0;
}
