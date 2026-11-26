class Solution {
public:
    bool canAliceWin(int n) {
       if(n<10) return false;
       if(n-10<9) return true;
       bool alice=true;
       int cnt=10;
       while(n>=cnt){
        n-=cnt;
        alice=!alice;
        cnt--;
       }
       return !alice;
    }
};