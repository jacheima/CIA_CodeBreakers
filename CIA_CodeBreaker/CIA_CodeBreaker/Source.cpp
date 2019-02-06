//CIA CodeBreakers 
//Programmer: Jacquelynne Heiman

#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	string theKeyWords[] = {"ferry", "stick", "stew", "hollow", "ants", "periodic", "teeth", "polish", "stingy", "physical"};

	vector <string> selectedKeywords;

	srand(time(0));

	for (int i = 0; i < 3; i++)
	{
		int randomIndex = rand() % (sizeof(theKeyWords) / sizeof(*theKeyWords));

		selectedKeywords.push_back(theKeyWords[randomIndex]);
	}

	cout << selectedKeywords[0] << endl;
	cout << selectedKeywords[1] << endl;
	cout << selectedKeywords[2] << endl;

	system("pause");
}
