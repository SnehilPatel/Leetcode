class Solution {
public:
    bool isPerfectSquare(int num) {
        int a=1;
        
        while(num>0){
            num-=a;
            a+=2;
        }
        return(num==0);
    }
};