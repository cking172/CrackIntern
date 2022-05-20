//============================================================================
// Name        : Remove.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

int main() {
	int size, i, ele,count=0;
	vector<int> vec1;
	cout << "Enter size of vector" << endl;
	cin >> size;
	cout << "Enter the elements" << endl;
	for (i = 0; i < size; i++) {
		cin >> ele;
		vec1.push_back(ele);
	}
	for (i = 0; i < vec1.size(); i++) {
if(vec1[i]==vec1[i+1])
	count++;
else vec1[i-count]=vec1[i];
	}
	for (i = 0; i < vec1.size(); i++) {
		cout << vec1[i] << " ";
	}
	return 0;
}
