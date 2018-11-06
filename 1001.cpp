/*
1001 A+B Format （20 分）
Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input Specification:
Each input file contains one test case. Each case contains a pair of integers a and b where −10
​6
​​ ≤a,b≤10
​6
​​ . The numbers are separated by a space.

Output Specification:
For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input:
-1000000 9
Sample Output:
-999,991
*/

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main() {
	int a, b, c, num, tmp;
	cin >> a >> b;
	c = a + b;
	if (c < 0) {
		cout << "-";
		c = abs(c);
	}
	string res = to_string(c);
	num = res.length();
	for (int i = 0; i < num; i++) {
		if (i != num - 1 && i && (num - i) % 3 == 0)
			cout << ",";
		cout << res[i];
	}
	return 0;
}