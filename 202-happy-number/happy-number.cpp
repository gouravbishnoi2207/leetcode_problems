class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        
        while (n != 1 && visited.find(n) == visited.end()) {
            visited.insert(n);
            int res = 0;
            
            while (n != 0) {
                int r = n % 10;
                res += r * r;
                n = n / 10;
            }
            
            n = res; 
        }
        
        return n == 1;
    }
};
