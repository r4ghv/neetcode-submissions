class Solution {
public:
    bool isPalindrome(string s) {
     
        s.erase(remove(s.begin() ,s.end() , ' '),s.end());
        string temp = "";
        for(char c:s)
        {
            if(isalnum(c))
            {
               temp += tolower(c);
            }
        }
        int n = temp.size();
        int i = 0;
        int j = temp.size() - 1;//
        while(i<j)
        {
            if(temp[i] != temp[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
