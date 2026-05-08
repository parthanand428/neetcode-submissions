class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> Hash(256, 0);
        vector<int> Pash(256, 0);

        for(int i=0; i<s.size(); i++){
            Hash[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            Pash[t[i]]++;
        }
        for(int i=0; i<256; i++){
            if(Hash[i] != Pash[i]) return false;
        }
        return true;
    }
};
