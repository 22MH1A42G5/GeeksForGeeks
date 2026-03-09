class Solution {
  public:
    int Fact(int n) {
        int p = 1;
        for(int i = 1 ; i<= n; i++) {
            p *= i;
        }
        return p;
    }
    int isStrong(int N) {
        // code here
        int temp = N;
        int sum = 0;
        while(temp) {
            sum += Fact(temp%10);
            temp/=10;
        }
        if(sum == N) return true;
        return false;
    }
};