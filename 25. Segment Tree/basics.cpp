#include <iostream>
#include <vector>
using namespace std;
// https://leetcode.com/problems/range-sum-query-mutable/description/
void build(vector<int>& arr, vector<int>& tree, int i, int low, int high) {
    if (low == high) {
        tree[i] = arr[low];
    } else {
        int mid = (low + high) / 2; 
        build(arr, tree, 2 * i + 1, low, mid);
        build(arr, tree, 2 * i + 2, mid + 1, high);
        tree[i] = tree[2 * i + 1] + tree[2 * i + 2];
    }
}

void update(vector<int>& tree, int i, int low, int high, int idx, int val) {
    if (low == high) {
        tree[i] = val;
    } else {
        int mid = (low + high) / 2;
        if (idx <= mid) {
            update(tree, 2 * i + 1, low, mid, idx, val);
        } else {
            update(tree, 2 * i + 2, mid + 1, high, idx, val);
        }
        tree[i] = tree[2 * i + 1] + tree[2 * i + 2];
    }
}

int query(vector<int>& tree, int i, int low, int high, int l, int r) {
    // No overlap
    if (r < low || high < l)
        return 0;

    // Complete overlap
    if (l <= low && high <= r)
        return tree[i];

    // Partial overlap
    int mid = (low + high) / 2;
    return query(tree, 2 * i + 1, low, mid, l, r) +
           query(tree, 2 * i + 2, mid + 1, high, l, r);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int n = arr.size();
    vector<int> tree(4 * n, 0);

    build(arr, tree, 0, 0, n - 1);
    cout << "Original Root Sum: " << tree[0] << endl;

    cout << "Sum [1, 3]: " << query(tree, 0, 0, n - 1, 1, 3) << endl;

    update(tree, 0, 0, n - 1, 1, 10);
    cout << "After Update Root Sum: " << tree[0] << endl;
    cout << "Sum [1, 3]: " << query(tree, 0, 0, n - 1, 1, 3) << endl;

    return 0;
}
