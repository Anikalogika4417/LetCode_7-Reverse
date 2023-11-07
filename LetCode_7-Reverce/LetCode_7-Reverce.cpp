// LetCode_7-Reverce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm> 
#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x == 0) return 0;
        string str = to_string(x);
        short is_neg;
        is_neg = str[0] == '-' ? -1 : 1;
        std::reverse(str.begin(), str.end());

        while (str[0] == '0') {
            str.erase(0, 1);
        }
        try{
            return is_neg * stoi(str);
        }
        catch (out_of_range const&) {
            return 0;
        }

    }
};

int main()
{
    Solution test;
    cout << test.reverse(1534236469);
}
