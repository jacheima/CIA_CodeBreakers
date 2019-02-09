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
	string playAgain = "n";
	do {

		string theKeyWords[] = { "ferry", "stick", "stew", "hollow", "ants", "periodic", "teeth", "polish", "stingy", "physical" };
		string theHints[] = { "A boat that would take you across the sound", "______ it to the man!", "A thick, chunky type of soup", "A pumpkin after you scoop out its guts", "the _____ go marching", "the _________ table of elements", "The tooth fairy comes to collect these", "Girls like to wear nail ______", "My dad hates spending money, some would say he is ________", "Let's get ____________! A pop song by Olivia Newton John." };

		vector <string> selectedKeywords;
		vector <string> selectedHints;

		srand(time(0));

		for (int i = 0; i < 3; i++)
		{
			int randomIndex = rand() % (sizeof(theKeyWords) / sizeof(*theKeyWords));

			selectedKeywords.push_back(theKeyWords[randomIndex]);
			selectedHints.push_back(theHints[randomIndex]);

		}

		// word jumble 1----------------------------------------------------------------------------------------

		//set the selected word to the first word jumble
		string jumble1 = selectedKeywords[0];
		//get the length of the word
		int length1 = jumble1.size();

		//swap the position of two letters in the word as many times as the word is long
		for (int i = 0; i < length1; i++)
		{
			//get the the first character position
			int index1 = (rand() % length1);
			//get the second character position
			int index2 = (rand() % length1);
			//set the first character to a temporary variable
			char temp = jumble1[index1];
			//set the first one to the second one
			jumble1[index1] = jumble1[index2];
			//set the value of the temporary vale to index 2
			jumble1[index2] = temp;
		}
		// end word jumble 1 -------------------------------------------------------------------------------------

		// word jumble 2 -----------------------------------------------------------------------------------------

		//set the selected word to the second word jumble
		string jumble2 = selectedKeywords[1];
		//get the length of the word
		int length2 = jumble2.size();

		//swap the position of two letters in the word as many times as the word is long
		for (int i = 0; i < length2; i++)
		{
			//get the the first character position at a random position
			int index1 = (rand() % length2);
			//get the second character position at a random position
			int index2 = (rand() % length2);
			//set the first character to a temporary variable
			char temp = jumble2[index1];
			//set the first one to the second one
			jumble2[index1] = jumble2[index2];
			//set the value of the temporary vale to index 2
			jumble2[index2] = temp;
		}
		// end word jumble 2 -----------------------------------------------------------------------------

		// word jumble 3 --------------------------------------------------------------------------------

		//set the selected word to the second word jumble
		string jumble3 = selectedKeywords[2];
		//get the length of the word
		int length3 = jumble3.size();

		//swap the position of two letters in the word as many times as the word is long
		for (int i = 0; i < length3; i++)
		{
			//get the first character position at a random position
			int index1 = (rand() % length3);
			//get the second character position at a random position
			int index2 = (rand() % length3);
			//set the first character to a temporary variable
			char temp = jumble3[index1];
			// set the first one to the second one
			jumble3[index1] = jumble3[index2];
			//set the value of the temporary vale to index 2
			jumble3[index2] = temp;
		}

		//end word jumble 3 ----------------------------------------------------------------------------

		// start game
		cout << "You are in super secret spy training at the CIA. You are being trained in the art of codebreaking, you need to be trained and this progarm is gonna do it." << endl;
		cout << "You are about to play a game, a word will appear on the screen. The word will be jumbled up and it is your job to decode the word." << endl;
		cout << "You have 4 tries to guess the word. On your last attempt the program will show you a hint, to help you solve the word." << endl;
		cout << "If you solve all three you will pass your codebreaking training. Good luck." << endl;

		cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		// -----------begin using guessing word 1 ---------------------------------------------------------------------------------------
		cout << endl;
		cout << "Word number one" << endl;

		cout << jumble1 << endl;

		//Setting up for the series of events

		//keeps track of the number of times the player has made a guess
		int jumleguesses = 0;
		//holds the players guess
		string guess;
		//these are the hints for the words
		string hint1 = selectedHints[0];
		string hint2 = selectedHints[1];
		string hint3 = selectedHints[2];

		cout << "Your guess: ";
		//the player inputs their guess and it saves to the variable guess
		cin >> guess;
		//increment the guess counter
		jumleguesses++;

		// while the guess is not the correct word
		while (guess != selectedKeywords[0])
		{
			cout << "Sorry, that's not it." << endl;

			// if the player has guessed three times 
			if (jumleguesses == 3)
			{
				//give them the hint
				cout << hint1 << endl;
			}
			else if (jumleguesses == 4)
			{
				cout << "Sorry, you've used all your guesses. The corect word was: " << selectedKeywords[0] << endl;
				break;
			}

			cout << "Your guess: ";
			//save the players guess
			cin >> guess;
			//increment the guess counter
			jumleguesses++;


		}
		if (guess == selectedKeywords[0])
		{
			cout << "Fantastic! You guessed it right!" << endl;
		}

		//saves the number of guess the player used for word one
		int guesses1 = jumleguesses;
		//-------------end user guessing 1 -----------------------------------------

		//set jumbleguesses back to 0
		jumleguesses = 0;

		// --------------beign user guessing word 2 -----------------------------------
		cout << endl;
		cout << "Word number two" << endl;
		//show the second jumbled word
		cout << jumble2 << endl;


		cout << "Your guess: ";
		//save the players guess
		cin >> guess;
		//increment the guess tracker
		jumleguesses++;

		//while the guess is not the right word
		while (guess != selectedKeywords[1])
		{
			cout << "Sorry, that's not it." << endl;

			//if the player has guessed 3 times
			if (jumleguesses == 3)
			{
				//give them the hint
				cout << hint2 << endl;
			}
			else if (jumleguesses == 4)
			{
				cout << "Sorry, you've used all your guesses. The corect word was: " << selectedKeywords[1] << endl;
				break;
			}

			cout << "Your guess: ";
			//save the players guess
			cin >> guess;
			//increment the guess tracker
			jumleguesses++;


		}
		if (guess == selectedKeywords[0])
		{
			cout << "Fantastic! You guessed it right!" << endl;
		}

		//saves the number of guess the player used for word one
		int guesses2 = jumleguesses;

		// -----------------end user guessing word 2 ----------------------------------------------------

		//reset jumbleguesses
		jumleguesses = 0;

		// -----------begin using guessing word 3 ---------------------------------------------------------------------------------------
		cout << endl;
		cout << "Word number three" << endl;
		//display the jumbled word
		cout << jumble3 << endl;

		cout << "Your guess: ";
		//the player inputs their guess and it saves to the variable guess
		cin >> guess;
		//increment the guess counter
		jumleguesses++;

		// while the guess is not the correct word
		while (guess != selectedKeywords[2])
		{
			cout << "Sorry, that's not it." << endl;

			// if the player has guessed three times 
			if (jumleguesses == 3)
			{
				//give them the hint
				cout << hint3 << endl;
			}
			else if (jumleguesses == 4)
			{
				cout << "Sorry, you've used all your guesses. The corect word was: " << selectedKeywords[0] << endl;
				break;
			}

			cout << "Your guess: ";
			//save the players guess
			cin >> guess;
			//increment the guess counter
			jumleguesses++;


		}
		if (guess == selectedKeywords[0])
		{
			cout << "Fantastic! You guessed it right!" << endl;
		}

		//saves the number of guess the player used for word one
		int guesses3 = jumleguesses;
		//-------------end user guessing 3 -----------------------------------------

		//display user stats

		cout << "You have completed your training course. Here are the stats for your course: " << endl;
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "Number of guesses used in round 1: " << guesses1 << endl;
		cout << "Number of guesses used in round 2: " << guesses2 << endl;
		cout << "Number of guesses used in round 3: " << guesses3 << endl;

		cout << endl;

		int totalGuesses = guesses1 + guesses2 + guesses3;

		cout << "The total number of guesses used was " << totalGuesses << endl;
		cout << "Would you like to play again? y/n" << endl;
		cin >> playAgain;
		cout << "------------------------------------------------------------------------------" << endl;

		system("pause");

	}
	while (playAgain == "y");
	
	
}

