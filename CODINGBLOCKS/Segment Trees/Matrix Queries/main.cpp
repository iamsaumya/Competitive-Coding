#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define v3d vector<vector<vector<ll>>>
#define v2d vector<vector<ll>>
#define v1d vector<ll>
int r,n,q;

v2d multiply(v2d &a,v2d &b){ // Make a multiply Function.
    v2d c(3,v1d(3));
     for(ll int j=1;j<=2;j++){
	        for(ll int k=1;k<=2;k++){
	            ll int sum=0;
	            for(ll int i=1;i<=2;i++){
	                sum+=a[j][i]*b[i][k];

	            }
	            c[j][k]=sum%r;
	        }
	  }
	  return c;
}

void buildtree(int matrix[][3][3], int ss, int se, v3d &tree, int index){
    if(ss==se){
         for(int j=1;j<=2;j++){
	        for(int k=1;k<=2;k++){
	            tree[index][j][k]= matrix[ss][j][k];
	        }
	    }
        return;
    }

    int mid = ss + (se-ss)/2;
    buildtree(matrix,ss,mid,tree,2*index);
    buildtree(matrix,mid+1,se,tree,2*index+1);

    tree[index]=multiply(tree[2*index],tree[2*index+1]);
    return;
}

v2d query(v3d tree, ll ss, ll se, ll l, ll r, ll index){
  if(l>se || r<ss){
      v2d identity(3,v1d(3)); // declare 2d vector like vector<vector<int>>v(3,vector<int>)
      return identity;
  }


  if(ss>=l && se<=r){
      return tree[index];
  }

  int mid = ss + (se-ss)/2;
  v2d mat;
  v2d mat1;

  if(r<=mid){
    return query(tree,ss,mid,l,r,2*index);
  }
  if(l>mid){
    return query(tree,mid+1,se,l,r,2*index+1);
  }

  mat = query(tree,ss,mid,l,r,2*index);
  mat1 = query(tree,mid+1,se,l,r,2*index+1);

  return multiply(mat,mat1);

}
int main() {

    cin>>r>>n>>q;
    int matrix[n+1][3][3];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2;j++){
            for(int k=1;k<=2;k++)
              cin>>matrix[i][j][k];
        }
    }

    v3d tree(4*n+1, v2d(3,v1d(3)));
    buildtree(matrix,1,n,tree,1);
    v2d temp;
    int x,y;
    while(q--){
        cin>>x>>y;
        temp = query(tree,1,n,x,y,1);
        for(int i=1;i<=2;i++){
          for(int j=1;j<=2;j++)
                cout<<temp[i][j]<<" ";
             cout<<endl;
        }
        cout<<endl;
        temp.clear();
      }

    return 0;
}
