class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<int, int> balls;

        for(int i = 0; i<s.length(); i++)
        {
            balls[s.at(i)]++;
        }

        unordered_map<int, int> dih;

        for(int i = 0; i<t.length(); i++)
        {
            dih[t.at(i)]++;
        }


        if(balls == dih)
        {
            return true;
        }
        return false;
    }

};
