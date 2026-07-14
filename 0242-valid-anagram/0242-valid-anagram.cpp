class Solution {
public:
    bool isAnagram(string s, string t) {
        // Optimal Method using Hash Maps
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char , int> countOfS;
        unordered_map<char , int> countOfT;

        for( int i=0; i<s.size(); i++){
            countOfS[s[i]]++;
            countOfT[t[i]]++;

        }
        return countOfS == countOfT;

        
        // Brute Force Method
        /* if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t; */
    }
};