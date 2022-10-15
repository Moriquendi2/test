#include <iostream>
using namespace std;
#include <vector>

int main() {
	
	vector<int> test;
	test.push_back(10);
	test.push_back(141);
	test.push_back(444);
	for (auto i = test.begin(); i != test.end(); i++)
	{
		cout << *i << " "; 
	}
	
	
	
	
	return 0;
}
