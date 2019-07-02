#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{   ll T;
    ll N,Q;
    ll t,y,p,q,ans=0;
    ll maxvalue = LONG_LONG_MAX;
   cin>>T;
   while(T--){
      N=Q=0;
      cin>>N>>Q;
      char s[N+1];
      for(int i=1;i<=N;i++){
          s[i]=(char)i;
      }
      while(Q--){
        cin>>t;
       if(t==1){
         cin>>y;
         y = (y + ans);
         s[y]='0';
         for(int i=0;i<=N;i++)
            cout<<s[i]<<" ";
       }
       else{
         cin>>p>>q;
         p=p+ans;
         q=q+ans;
         for(int i=p;i<=q;i++){
            if(s[i]>maxvalue)
                 maxvalue = s[i];
            }
            cout<<maxvalue<<endl;
            ans =  (ans + maxvalue)%N;
       }
     }
   }
    return 0;
}
