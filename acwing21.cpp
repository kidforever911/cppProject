class Solution {
public:
    int Fibonacci(int n) {
        int a = 0, b = 1;
        for(int i = 0; i < n; i ++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return a;
    }
};