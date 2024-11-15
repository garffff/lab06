#include <iostream>
#include <string>
using namespace std;

int wordsCounter(const string& str)
{
    bool b = 0;
    int c = 0;
    for(int i = 0; i < str.size(); ++i)
    {
        if(isalpha(str[i])) b = 1;
        else if((str[i] == ' ' or str[i] == ',' or str[i] == '.') and b == 1)
        {
            b = 0;
            c++;
        }
    }
    if(b == 1) c++;
    return c;
}

int main()
{
    string a;
    getline(cin, a);
    cout << wordsCounter(a);
    return 0;
}
