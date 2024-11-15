#include <iostream>
#include <set>
using namespace std;

int diffWordsCounter(string str)
{
    set<string> m;
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
    return m.size();
}

int main()
{
    string a = "Can you can a can as canner can can a can?";
    cout << diffWordsCounter(a);
    return 0;
}
