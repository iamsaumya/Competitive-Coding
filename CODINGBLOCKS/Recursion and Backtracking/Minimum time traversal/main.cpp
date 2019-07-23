#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> alltime;
void minimumTimeTraversal(vector<vector<int>>v, int startEnd[4], int startx, int starty,int totaltime){
    if((startx==startEnd[2]) && (starty==startEnd[3])){
        alltime.push_back(totaltime);
        return;
    }
    // 1. Aim is pass starting index to stop the recursion.
    // calculate time through all the pipelines.
    // First check for the first pipeline then calculate ending points.... then check whether we can use any other pipelines or not....if the ending point
    // A for loop for each pipeline if the starting of pipe is greater than skip it. is no such pipe is found then sum it up from final destination.
    int time,time1;
    bool Pipelineexist = false;
    int newstartx=startx,newstarty=starty;
    int i;
    for(i=0;i<v.size();i++){
          vector<int>temp = v[i];
          if(temp[0]>=startx && temp[1]>=starty){
              Pipelineexist = true;
              time =  totaltime + abs(temp[0]-newstartx) + abs(newstarty - temp[1]);;
              time += temp[4];
              newstartx = temp[2];
              newstarty = temp[3];
              v.erase(v.begin()+i);
              minimumTimeTraversal(v,startEnd,newstartx,newstarty,time);
              v.push_back(temp);
            }
        }
    if(!Pipelineexist && i==v.size() ){
        time1 = totaltime + abs(newstartx-startEnd[2]) + abs(newstarty - startEnd[3]);
        minimumTimeTraversal(v,startEnd,startEnd[2],startEnd[3],time1);
    }
}
int main() {
   int t,n;
   int startEnd[4];
   cin>>t;
   int num=1;
   while(t--){
       cin>>n;
       for(int i=0;i<4;i++){
           cin>>startEnd[i];
       }
       if(n==0){
           cout<<"#"<<num++<<" : "<<abs(startEnd[0]-startEnd[2])+abs(startEnd[1]-startEnd[3])<<endl;
       }
       else{
           vector<vector<int>>v;
           for(int i=0;i<n;i++){
               vector<int>temp;
             for(int j=0;j<=4;j++){
                int val;
                cin>>val;
                temp.push_back(val);
             }
             v.push_back(temp);
             temp.clear();
           }
           int time = abs(startEnd[0]-startEnd[2])+abs(startEnd[1]-startEnd[3]);
           minimumTimeTraversal(v,startEnd,startEnd[0],startEnd[1],0);
           cout<<"#"<<num++<<" : "<<min(*min_element(alltime.begin(), alltime.end()),time)<<endl;
          v.clear();
       }
   }
}
