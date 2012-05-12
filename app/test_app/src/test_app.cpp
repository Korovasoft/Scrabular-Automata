// Caleb Wherry
// Test program
// 5/12/2012

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<uint32_t,string> numbers;

	for(uint32_t i = 1; i < 1000000; ++i)
	{
		numbers.insert(make_pair(i,itoa(i)));
	}

	for(auto it = numbers.begin(); it != numbers.end(); ++it)
	{
		cout << "Number: " << it->first << "\t" << "String: " << it->second << endl;
	}

	return 0;
}
