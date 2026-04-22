class Solution {
public:

    bool isAnagram (string a , string b){

        unordered_map<char , int> mpp;

        for (auto s : a ){
            mpp[s]++;
        }

        for (auto s : b){
            if (mpp.find(s)==mpp.end() || mpp[s] ==0){
                return false ;
            }
            mpp[s]--;
        }

        return true ;

        
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector <vector <string>> ans ;

        for (int i = 0 ;i <strs.size();i++){
            string t = strs[i];
            size_t size = t.size();
            vector <string> temp ;
            temp.push_back(t);

            for (int j = i+1 ; j<strs.size() ;j++){
                if (strs[j].size()==size){
                    if (isAnagram(strs[i],strs[j])){
                        // cout << strs[j] <<"evicted\n";
                        temp.push_back(strs[j]);
                        strs.erase(strs.begin()+j);
                        j--;
                    } 
                }
                else {
                    continue;
                }
            }

            ans.push_back(temp);
        }

        return ans ;
        
    }
};
