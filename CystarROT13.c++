#include <iostream>
#include <string>

using namespace std;
 
string PlainText(string input)
{
	string transformed;
	for (int i = 0; i < input.size(); i++) {
		if (isalpha(input[i])) {
			if ((tolower(input[i]) - 'a') < 14)
				transformed.append(1, input[i] + 13);
			else
				transformed.append(1, input[i] - 13);
		} else {
			transformed.append(1, input[i]);
		}
	}
	return transformed;
}

int main()
{
	string input;
	cout << "Type plainText: " << endl;
	getline(cin, input);
	cout << "PlainText Encrypted: " << PlainText(input) << endl;

}