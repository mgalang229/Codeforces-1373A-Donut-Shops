#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int a, b, c;
	cin >> a >> b >> c;
	
	// if the price per donut of the 1st shop is
	// greater than or equal to the price of the 2nd shop,
	// then it is impossible to find an the value of x
	// otherwise, simpy print 1 since the cost is already less
	int first_shop = 0;
	if(a >= c) {
		first_shop = -1;
	} else {
		first_shop = 1;
	}
	
	// if the total price for buying all the donuts in one box
	// in the first shop is less than or equal to the cost of
	// one box in the second shop, then it is impossible to find x
	// otherwise, simply use 1 box of donuts since the cost of it is less
	int second_shop = 0;
	if(a * 1LL * b <= c) {
		second_shop = -1;
	} else {
		second_shop = b;
	}
	
	cout << first_shop << " " << second_shop << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

