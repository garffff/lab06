#include <iostream>
#include <vector>

using namespace std;

void plusesDeleter(vector<float> &vec)
{
    float b;
    for(int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] > 0)
        {
            for(int j = i; j < vec.size() - 1; ++j)
            {
                b = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = b;
            }
            vec.pop_back();
            i--;
        }
    }
}

int main()
{
    vector<float> a = {1, 0, -8, -9, 0, 10, 23, -7};
    plusesDeleter(a);
    for(auto i : a) cout << i << " ";
    return 0;
}
