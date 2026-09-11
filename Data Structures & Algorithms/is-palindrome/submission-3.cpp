class Solution {
public:
    bool isPalindrome(string s) {
        int pre = 0;
        int post = s.size()-1;

        while(pre<post)
        {
            while(pre < post && !isalnum(s.at(pre)))
            {
                pre++;
            }
            while(pre < post && !isalnum(s.at(post)))
            {
                post--;
            }

            char cpre = s.at(pre);
            char cpost = s.at(post);

            if(cpre > 64 && cpre < 91)
            {
                cpre = cpre+32;
            }
            if(cpost > 64 && cpost < 91)
            {
                cpost = cpost+32;
            }

            cout << "op " << cpre << endl;
            cout << "op " << cpost << endl;

            if(cpre == cpost)
            {
                pre++;
                post--;
                continue;
            }
            return false;
        }


        return true;

    }
};
