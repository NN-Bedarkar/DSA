//c++-merge sort
#include <iostream>
#include <vector>
using namespace std;

class sorting {
private:
    vector<int> b;
public:
    void merge(vector<int> &a, int s, int e, int mid) {
        int i = s, j = mid + 1, k = 0;
        while (i <= mid && j <= e) {
            if (a[i] < a[j]) {
                b[k++] = a[i++];
            } else {
                b[k++] = a[j++];
            }
        }
        while (i <= mid) b[k++] = a[i++];
        while (j <= e) b[k++] = a[j++];

        for (int x = s; x <= e; x++) {
            a[x] = b[x - s];
        }
    }

    void mergesort(vector<int> &arr, int s, int e) {
        if (s >= e) return;
        if (b.size() != arr.size()) {
            b.resize(e - s + 1);  // only resize to needed length
        }
        int mid = (s + e) / 2;
        mergesort(arr, s, mid);
        mergesort(arr, mid + 1, e);
        merge(arr, s, e, mid);
    }
};

int main() {
    sorting s1;
    vector<int> arr;
    int x;

    cout << "Enter integers (press Enter to stop):\n";
    while (1) {
        cin >> x;
        arr.push_back(x);
        if (cin.peek() == '\n') break;
    }

    s1.mergesort(arr, 0, arr.size() - 1);

    cout << "Sorted array:\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
