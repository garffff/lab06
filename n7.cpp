#include <iostream>
#include <list>
using namespace std;

void reverseNum(list<int> &nums)
{
    for(list<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        nums.insert(i, -*i);
    }
}

int main()
{
    list<int> num = {1, 5, 4, -3};
    reverseNum(num);
    for(int i : num) cout << i << " ";
    return 0;
}
