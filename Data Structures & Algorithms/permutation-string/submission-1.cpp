class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len = s1.size();
        cout << len << endl;

        vector<int>v1(26);
        vector<int>v2(26);

        for(int i = 0; i<s1.size(); i++)
        {
            v1[(int)s1.at(i)-97]++;
        }

        int ass = 0;
        while((ass + len) <= s2.size())
        {   
            if(ass == 0)
            {
                for(int i = 0; i<len; i++)
                {
                    v2[(int)s2.at(i)-97]++;
                }
            }
            else
            {
                v2[(int)s2.at(ass-1)-97]--;
                v2[(int)s2.at(ass+len-1)-97]++;
            }

            if(v1 == v2)
            {
                return true;
            }
            ass++;
        }

        return false;
    }
};
