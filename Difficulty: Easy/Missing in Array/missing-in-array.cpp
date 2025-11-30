class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;
        long long expected = n * (n + 1) / 2;

        long long sum = 0;
        for (int num : arr) {
           sum += num;
        }

       return expected - sum;
    }
};