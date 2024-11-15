#include <iostream>
#include <list>

using namespace std;

void Sort(list<int> &nums)
{
    int b;
    for(auto j = 0; j < nums.size(); ++j)
    {
        list<int>::iterator i = nums.begin();
        while(i != --nums.end())
        {
            auto k = i++;
            if(*i > *k)
            {
                b = *i;
                *i = *k;
                *k = b;
            }
        }
    }
}

int main()
{
    list<int> num = {1, 5, 4, -3};
    auto i = ++num.begin();
    Sort(num);
    for(auto i : num) cout << i << " ";
    return 0;
}
