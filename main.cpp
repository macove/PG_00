#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;


int main(void) {
	
	ifstream inputFile("PG3_2024_03_02.txt");
	vector<string> emails;
	string email;

	//, で割る
	while (getline(inputFile, email, ',')) {
		//delete " [ ]
		email.erase(remove(email.begin(), email.end(), '"'), email.end());
		email.erase(remove(email.begin(), email.end(), '['), email.end());
		email.erase(remove(email.begin(), email.end(), ']'), email.end());
		emails.push_back(email);
	}

	inputFile.close();

	sort(emails.begin(), emails.end());

	for (const auto& e : emails) {
		cout << e << endl;
	}

	return 0;

}