#include <iostream>
#include <map>
using namespace std;

map<string, int> wordsMapCounter(string a)
{
    bool p = 0;
    map<string, int> otv;
    string b;
    for(int i = 0; i < a.size(); ++i)
    {
        if((a[i] == ' ' or a[i] == ',' or a[i] == '.') and p == 1)
        {
            otv[b]++;
            p = 0;
            b.clear();
        }
        else if(isalpha(a[i]))
        {
            p = 1;
            b += a[i];
        }
    }
    if(p == 1) otv[b]++;
    return otv;
}

int main()
{
    string a;
    getline(cin, a);
    map<string, int> mao = wordsMapCounter(a);
    for(auto & [word, kolvo] : mao)
        cout << word << ": " << kolvo << endl;
    return 0;
}
