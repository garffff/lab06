#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el)
{
    for(auto i = first; i < last; ++i)
    {
        if(*i == el) return i;
    }
    return last;
}


int main()
{
    vector<int> A = {1, 4, 8, 45, 25, 54};
    vector<int>::iterator a = Find(A.begin(), A.end(), 45);
    cout << *a;
    return 0;
}
