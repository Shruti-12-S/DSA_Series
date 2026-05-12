#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &vec, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
            swap(vec[start], vec[end]);
            start++;
            end--;
    
    }
}

int main()
{
    vector<int> vec = {2, 4, 6, 8, 10};
    int size = vec.size();

    reverse(vec, size);

    cout << "After swapping vector becomes: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;
}