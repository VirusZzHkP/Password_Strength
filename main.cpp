// C++ program to check if a given password is
// strong or not.
#include <bits/stdc++.h>
using namespace std;

void printStrongNess(string& input)
{
	int n = input.length();

	// Checking lower alphabet in string
	bool hasLower = false, hasUpper = false;
	bool hasDigit = false, specialChar = false;
	string normalChars = "abcdefghijklmnopqrstu"
		"vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";

	for (int i = 0; i < n; i++) {
		if (islower(input[i]))
			hasLower = true;
		if (isupper(input[i]))
			hasUpper = true;
		if (isdigit(input[i]))
			hasDigit = true;

		size_t special = input.find_first_not_of(normalChars);
		if (special != string::npos)
			specialChar = true;
	}

	// Strength of password
	cout << "Strength of password:-";
	if (hasLower && hasUpper && hasDigit &&
		specialChar && (n >= 8))
		cout << "Strong" << endl;
	else if ((hasLower || hasUpper) &&
			specialChar && (n >= 6))
		cout << "Moderate" << endl;
	else
		cout << "Weak" << endl;
}

// Driver code
int main()
{   
    string input;
    cout<<"Enter your password:\n";
    cin>>input;
	 
	printStrongNess(input);
	return 0;
}
//Cr3@ted With ♥ -