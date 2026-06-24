class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> m1;
        unordered_map <char,int> m2;
        for(int i = 0;i < max(s.length(),t.length());i++){
            if(s[i]){
                m1[s[i]]++;
            }
            if(t[i]){
                m2[t[i]]++;
            }
            
        }
        return m2 == m1;
    }
};
