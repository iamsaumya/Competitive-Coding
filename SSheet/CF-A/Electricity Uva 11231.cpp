#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin>>n){
        if(n==0)
          break;

        int nd,nm,ny;
        int cd,cm,cy;
        int consumption;

        nd = -1;
        nm = -1;
        ny = -1;

        int ans = 0;
        int ans1 = 0;
        int nyear[] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
        int lconsumption = 0;
        int streak = -1;

        for(int i = 0;i<n;i++){
            cin>>cd>>cm>>cy>>consumption;
            if(nd!=-1 && nm!=-1 && ny != -1){
                if(cd==nd && nm==cm && ny==cy){
                    ans1 += consumption - lconsumption;
                    ans++;
                }
            }

            lconsumption = consumption;

            if(cy%4 == 0 && (cy%400==0 || cy%100!=0))
                   nyear[2] = 29;
            else
                   nyear[2] = 28;

            if(cd<nyear[cm]){
                    nd = cd+1;
                    nm = cm;
                    ny = cy;
            }
            else if(cd == nyear[cm]){
                nd = 1;
                nm = (cm+1);
                ny = cy;
                if(nm==13){
                    nm = 1;
                    ny = cy+1;
                }
            }
        }
        cout<<ans<<" "<<ans1<<endl;
    }
}
