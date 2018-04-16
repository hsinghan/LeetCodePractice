// Example 2:
// Input: 
// ["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]
// Output: 
// ["901 mail.com","50 yahoo.com","900 google.mail.com","5 wiki.org","5 org","1 intel.mail.com","951 com"]

// Explanation: 
// We will visit "google.mail.com" 900 times, "yahoo.com" 50 times, "intel.mail.com" once and "wiki.org" 5 times. 
// For the subdomains, we will visit "mail.com" 900 + 1 = 901 times, "com" 900 + 50 + 1 = 951 times, and "org" 5 times.



class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        // use the unordered_map for record
        unordered_map<string, int> m;

        for(const auto& word:cpdomains){
            //找到數字之後的空格所在的索引值
            int i = word.find(" ");
            // 轉成數字
            int n = stoi(word.substr(0, i));
            // 刪掉數字的部分,變成新字串
            // -1 是因為string最後面會有一個 '\0'
            string s = word.substr(i+1, word.size()-i-1);
            
            // 從尾端開始看doamin
            for (int i = s.size()-1; i >= 0; i--)
            {
                if (s[i] == '.')
                   m[s.substr(i+1, s.size()-i-1)] += n;
            }
            // 計算整串的domain
            m[s] += n;
        }

        vector<string> v;
        for (const auto& e:m)
        {
            v.push_back( to_string(e.second)+ " " + e.first );
        }

        return v;
    }
};
