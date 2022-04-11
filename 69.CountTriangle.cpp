// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;
 
void CountTriangles(vector<int> A)
{
    int n = A.size();
    sort(A.begin(), A.end());
    int count = 0;
 
    for (int i = n - 1; i >= 1; i--) {
        int l = 0, r = i - 1;
        while (l < r) {
            if (A[l] + A[r] > A[i]) {
                count += r - l;
                r--;
            }
            else
                l++;
        }
    }
    cout << "No of possible solutions: " << count;
}
int main()
{
 
    vector<int> A = { 4, 3, 5, 7, 6 };
 
    CountTriangles(A);
}