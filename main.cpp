// main test driver for CryptoCurrency Database
// Modified by: Tommy Vu

#include "BinarySearchTree.h"  // BST ADT 
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>



using namespace std;

// Function Prototypes
void display();

// void buildList(string filename, BinarySearchTree<Crypto>* tree);
// void print(BinaryNode<Crypto>*& node);
void print1(Cryptocurrency& crypto);

int main()
{
	string inputFileName = "cities.txt";
	BinarySearchTree <Cryptocurrency>* tree = new BinarySearchTree <Cryptocurrency>;
	//buildList(inputFileName, tree);

	// Cryptocurrency used for returning and comparing
	Cryptocurrency dummyCrypto;
	Cryptocurrency returnedCrypto;

	// Used as a place to hold User Input for insert.
	// char insert[30];
	int counter = 1;
	// bool checker;

	// Used to take input and keeps running loop until Q
	char kicker[50];
	char command;
	bool looper = true;

	display();

	while (looper)
	{
		// User input and converts it to an upper letter.
		cout << "Please enter a command: " << endl;
		cin >> kicker;
		command = kicker[0];
		command = toupper(command);

		if (command == 'A')
		{
			// just testing it out, remove this after =)
			dummyCrypto.display();
		}

		else if (command == 'B')
		{
			
		}

		else if (command == 'C')
		{
			
		}

		else if (command == 'D')
		{
			
		}

		else if (command == 'E')
		{
			
		}

		else if (command == 'F')
		{
			
		}

		else if (command == 'G')
		{
			display();
		}

		else if (command == 'H')
		{
			looper = false;
		}

		else
		{
			cout << "I'm gonna put some dirt in your eye! Put a valid command! " << endl;
			cout << endl;
		}

	}

	cout << "Bye! Thanks for using the Cryptocurrency Database!" << endl;
	return 0;
}

// Displays menu.
void display()
{
	cout << "Welcome to our Cryptocurrency Database! Please select one of the following commands!" << endl;
	cout << "" << endl;
	cout << "A - Add new a Cryptocurrency " << endl;
	cout << "B - Delete a Cryptocurrency" << endl;
	cout << "C - Search for a Cryptocurrency" << endl;
	cout << "D - See Cryptocurrencies sorted in various ways" << endl;
	cout << "E - Write the Cryptocurrencies to a file" << endl;
	cout << "F - See the statistics" << endl;
	cout << "G - Help to show the menu" << endl;
	cout << "H - Exit" << endl;
	cout << endl;
}

// Builds a Binary Search Tree from a text file.
void buildList(string filename, BinarySearchTree<Cryptocurrency>* tree)
{
	ifstream inFile;
	string s, name;
	int year;
	Cryptocurrency crypto;

	inFile.open(filename);

	if (!inFile)
	{
		cout << "Error opening the input file: \"" << filename << "\"" << endl;
		exit(EXIT_FAILURE);
	}

	// Needs to be done, this while loop needs changing
	while (inFile >> s >> year)
	{
		inFile.ignore(); // skip the space in front of the city name

		tree->insert(crypto);
	}
	inFile.close();
}

// Function to be used as a function pointer for the BST.
void print1(Cryptocurrency& crypto)
{
	cout << crypto.getName() << endl;
}

