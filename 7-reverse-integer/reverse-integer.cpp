class Solution {
public:
    int reverse(long long x) {
        int c=0;
        if(x<0){
            c=-1;
            x*=c;
        }
        long long rev=0, dig;
        while(x!=0){
            rev*=10;
            dig=x%10;
            x/=10;
            rev+=dig;
        }
        if(rev<INT_MIN || rev>INT_MAX) return 0;
        if(c==-1) return rev*c;
        else return rev;
    }
};