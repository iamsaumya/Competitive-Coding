class Solution {
public:
    int fib(int N) {
        
        if(N<2)
            return  N;
        int f0 = 0;
        int f1 = 1;
        int val = 0;
        for(int i=2;i<=N;i++){
           val = f0 + f1;
            f0 = f1;
            f1 =  val;
        }
        return f1;
    }
};