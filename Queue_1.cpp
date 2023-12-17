#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    // Example usage:
    string input1 = "leopard";
    string input2 = "loveleopard";
    string input3 = "aabb";

    cout << "Example 1: " << firstUniqChar(input1) << endl;
    cout << "Example 2: " << firstUniqChar(input2) << endl;
    cout << "Example 3: " << firstUniqChar(input3) << endl;

    return 0;
}
