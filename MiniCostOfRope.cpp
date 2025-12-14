#include <bits/stdc++.h>
using namespace std;

int mincost(int arr[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);

    // initialize result
    int res = 0;

    while (pq.size() > 1)
    {
        // extract shortest two ropes from pq
        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        // connect the ropes : update result and insert the new rope to pq
        res += first + second;
        pq.push(first + second);
    }
    return res;
}
int main()
{
    int len[] = {4, 3, 2, 6};
    int size = sizeof(len) / sizeof(len[0]);

    cout << " total cost for connecting ropes is "
         << mincost(len, size);
    return 0;
}