class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        num1.insert(num1.end(), num2.begin(), num2.end());
        sort(num1.begin(), num1.end());
        int sz=num1.size();
        if(sz%2!=0) return float(num1[(sz-1)/2]);
        else return float(num1[sz/2 - 1]+num1[sz/2])/2;
    }
};