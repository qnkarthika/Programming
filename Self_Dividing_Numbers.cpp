3.A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].

#include <vector>
class Solution {
public:
    std::vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> a;
        int flag = 0, rem, num;
        for (int i = left; i <= right; i++) {
            num = i;
            while (num > 0) {
                rem = num % 10;
                if (rem == 0 || i % rem != 0) {
                    flag = 0;
                    break;
                }
                flag = 1;
                num /= 10;
            }
            if (flag == 1) {
                a.push_back(i);
                flag = 0;
            }
        }
        return a;
    }
};
