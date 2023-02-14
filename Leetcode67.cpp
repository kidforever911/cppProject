class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string result;
        for(int i = 0, t = 0; i < a.size() || i < b.size() || t; i ++) {
            if(i < a.size()) t += a[i] - '0';
            if(i < b.size()) t += b[i] - '0';
            result += to_string(t % 2);
            t /= 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};