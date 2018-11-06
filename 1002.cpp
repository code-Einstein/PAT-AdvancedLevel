/*
1002 A+B for Polynomials （25 分）
This time, you are supposed to find A+B where A and B are two polynomials.

Input Specification:
Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:

K N
​1
​​  a
​N
​1
​​
​​  N
​2
​​  a
​N
​2
​​
​​  ... N
​K
​​  a
​N
​K
​​
​​

where K is the number of nonzero terms in the polynomial, N
​i
​​  and a
​N
​i
​​
​​  (i=1,2,⋯,K) are the exponents and coefficients, respectively. It is given that 1≤K≤10，0≤N
​K
​​ <⋯<N
​2
​​ <N
​1
​​ ≤1000.

Output Specification:
For each test case you should output the sum of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate to 1 decimal place.

Sample Input:
2 1 2.4 0 3.2
2 2 1.5 1 0.5
Sample Output:
3 2 1.5 1 2.9 0 3.2
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double hash[1001] = { 0 };
	int tmp1, num = 0, n;
	double tmp2;
	for (int i = 0; i < 2; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> tmp1 >> tmp2;
			hash[tmp1] += tmp2;
		}
	}
	for (auto it : hash)
		if (it) num++;
	cout << num;
	for (int i = 1000; i >= 0; i--) {
		if (hash[i])
			//printf(" %d %.1f", i, hash[i]);
			cout << " " << fixed << setprecision(1) << i << " " << hash[i];		
	}
	return 0;
}