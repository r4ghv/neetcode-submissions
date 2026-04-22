class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }
        
        unordered_map<char,int> mpp ;
        for(char x : s){
        mpp[x]++;
        }
        for(char x: t)
        {
            if(mpp.find(x) == mpp.end() || mpp[x]==0)
            {
    
            return false;

            }
        
           mpp[x]--;   
        }
         return true;
        }

    }
;
