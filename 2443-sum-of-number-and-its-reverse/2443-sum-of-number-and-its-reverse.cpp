class Solution {
public:
    bool sumOfNumberAndReverse(int n) {
        int i;
        for(i=0;i<=n/2;i++){
            int x = i;
            int y = n-i;
            string a = to_string(y);
            reverse(a.begin(),a.end());
            y = stoi(a);
            if(x==y)
                return true;
        }
        return false;
    }
};