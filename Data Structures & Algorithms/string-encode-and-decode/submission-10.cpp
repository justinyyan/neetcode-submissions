class Solution {
public:

    string encode(vector<string>& strs) {
        string cum;

        for(int i = 0; i<strs.size(); i++)
        {
           int g = strs[i].size();
           

           string temp = to_string(g) + "#" + strs[i];
           cum = cum+temp;
        }

        return cum;
    }

    vector<string> decode(string s) {
        
        vector<string> arse;

        while(!s.empty())
        {
            //read 1 
            string digs;
            
            while (s.at(0) != '#') {
                digs = digs + s.at(0);
                s = s.substr(1);
            }
            s = s.substr(1);
            
            int ln = stoi(digs);

            //use number and read distance
            string bal = s.substr(0, ln);            
            s = s.substr(ln);

            arse.push_back(bal);

        }

        return arse;
    }
};
