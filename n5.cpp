#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<string> uniqueWords(const string& str)
{
    set<string> m;
    vector<string> otv;
    string b;
    bool p = 0;
    for(int i = 0; i < str.size(); ++i)
    {
        if((str[i] == ' ' or str[i] == '.' or str[i] == ',') and p == 1)
        {
            m.insert(b);
            b.clear();
            p = 0;
        }
        else if(isalpha(str[i]))
        {
            p = 1;
            b += str[i];
        }
    }
    if(p == 1) m.insert(b);
    for(string a : m) otv.push_back(a);
    return otv;
}

int main()
{
    string a;
    getline(cin, a);
    vector<string> n = uniqueWords(a);
    for(string k : n) cout << k << " ";
    return 0;
}
