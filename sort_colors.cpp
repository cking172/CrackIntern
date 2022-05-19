//============================================================================
// Name        : sort_colors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

int main() {
	int size, i, ele, temp, pass, swap;
	vector<int> vec1;
	cout << "Enter size of vector" << endl;
	cin >> size;
	cout << "Enter the elements" << endl;
	for (i = 0; i < size; i++) {
		cin >> ele;
		vec1.push_back(ele);
	}
	for (pass = vec1.size(); pass >= 0 && swap; pass--) {
		swap = 0;
		for (i = 0; i < pass - 1; i++)
			if (vec1[i] > vec1[i + 1]) {
				temp = vec1[i];
				vec1[i] = vec1[i + 1];
				vec1[i + 1] = temp;
				swap = 1;
			}
	}
	cout << "The elements are " << endl;
	for (int i = 0; i < vec1.size(); i++) {
		cout << vec1[i] << " ";

	}
}
