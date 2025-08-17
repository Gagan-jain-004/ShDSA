#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Left part
        quickSort(arr, pi + 1, high); // Right part
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "Sorted array (Quick Sort): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}









//tc
/*
Step 1: Count work done in one partition

In partition(), we scan the subarray once:

for (int j = low; j < high; j++) { ... }


👉 That loop runs n times (if subarray size = n).
So partitioning takes O(n) time.

🔹 Step 2: Express recurrence

Quick Sort recursively sorts left and right parts.
If pivot divides the array evenly into two halves (best/average case):

T(n) = T(n/2) + T(n/2) + O(n)
     = 2T(n/2) + O(n)

🔹 Step 3: Expand recurrence

Let’s expand step by step.

T(n) = 2T(n/2) + cn


(where cn is the O(n) partitioning cost).

Now expand one level deeper:

T(n) = 2[2T(n/4) + c(n/2)] + cn
     = 4T(n/4) + 2c(n/2) + cn
     = 4T(n/4) + 2cn


Expand again:

T(n) = 8T(n/8) + 3cn


After k levels:

T(n) = 2^k * T(n / 2^k) + k * cn

🔹 Step 4: When does recursion stop?

Recursion stops when subarray size = 1.
That means:

n / 2^k = 1
=> 2^k = n
=> k = log₂(n)


So recursion depth = log n.

🔹 Step 5: Final complexity

At the last level:

T(n) = n * T(1) + cn * log n


Since T(1) is constant:

T(n) = O(n log n)

🔹 Step 6: Why worst case is O(n²)

If pivot always makes one subarray of size n-1 and one of size 0:

T(n) = T(n-1) + O(n)
     = (n-1) + (n-2) + ... + 1
     = O(n²)

✅ Final Explanation (ready for lab write-up)

Each partition takes O(n) work.

With good pivots, recursion depth = log n.

Total = O(n log n).

In the worst case (bad pivots), recursion depth = n, giving O(n²).
*/