#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string input_str1 = "creative";
	string input_str2 = "reactive";

	int real_count = 0;
	int pre_count = 0;

	vector<char> test_arr;

	int input_str1_count = 0;

	for (int i = 0; i < input_str1.length(); i++)
	{
		if (input_str1[i] != ' ')
			input_str1_count++;
	}

	for (int i = 0; i < input_str2.length(); i++)
	{
		if(input_str2[i] != ' ')
			test_arr.push_back(input_str2[i]);
	}

	for (int i = 0; i < input_str1.length(); i++)
	{
		if (input_str1[i] != ' ')
		{
			for (int j = 0; j < test_arr.size(); j++)
			{
				if (input_str1[i] == test_arr[j])
				{
					real_count++;
					test_arr.erase(test_arr.begin() + j);
					break;
				}
			}

			if (real_count == pre_count)
				break;

			pre_count++;
		}
	}

	if (real_count == input_str1_count)
		cout << "It's anagram" << endl;
	else
		cout << "It's not anagram" << endl;
	
	return 0;
}