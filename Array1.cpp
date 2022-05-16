//============================================================================
// Name        : Array1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//program to find duplicate element in an array
int main() {
	vector<int> v;
	int n, i, ele;
	cout << "Enter size of vector" << endl;
	cin >> n;
	cout << "Enter the elements" << endl;
	for (i = 0; i < n; i++) {
		cin >> ele;
		v.push_back(ele);
	}

	sort(v.begin(), v.end());

	for (i = 1; i < n; i++) {
		if (v[i] == v[i - 1])
			return v[i];
	}
	return 0;
}
