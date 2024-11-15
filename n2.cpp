#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el)
{
    for(auto i = first; i < last; ++i)
    {
        if(*i == el) return i;
        else if(*i > el) return last;
    }
    return last;
}

int main()
{
    vector<int> A = {1, 4, 8, 25, 45, 54};
    vector<int>::iterator a = findInSorted(A.begin(), A.end(), 45);
    cout << *a;
    return 0;
}
