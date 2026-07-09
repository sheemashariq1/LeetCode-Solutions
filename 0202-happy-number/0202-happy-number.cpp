class Solution {
public:
int digits_sum(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while (true) {
            slow = digits_sum(slow);
            fast = digits_sum(digits_sum(fast));
            if (slow == fast)
                break;
        }
        return slow == 1;
    }
};