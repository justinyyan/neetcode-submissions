class Solution {
public:
    bool isValid(string s) {
        
        stack<char> arse;

        int max = s.size();
        int tr = 0;

        while(tr < max)
        {
            if(s.at(tr) == '(' || s.at(tr) == '[' || s.at(tr) == '{' )
            {
                arse.push(s.at(tr));

                tr++;
                continue;
            }
            
            if(!arse.empty() && (s.at(tr) == arse.top() + 1 || s.at(tr) == arse.top() + 2))
            {
                arse.pop();

                tr++;
                continue;
            }
            return false;
        }

        return arse.empty();
        


    }
};
