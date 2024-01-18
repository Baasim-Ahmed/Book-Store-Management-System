#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

//Declaring array for genre and structures for books
string genres[5] = { "fantasy", "fiction", "nonficion", "horror", "biography" };

string fantasy[5][2] = {
	{ "The Lord of the Rings", "4000" },
	{ "Harry Potter", "4500" },
	{ "The Hobbit", "2000" },
	{ "A Game of Thrones", "2250" },
	{ "The Way of Kings", "1800" },
};
string fiction[5][2] = {
	{ "The Book Theif", "1100" },
	{ "Brave New World", "1900" },
	{ "Frankenstein", "1350" },
	{ "The Hunger Games", "1868" },
	{ "Outlander", "1750" }
};
string nonfiction[5][2] = {
	{ "Silent Spring", "2800" },
	{ "In Cold Blood", "3800" },
	{ "Black Boy", "2100" },
	{ "Into Thin Air", "1800" },
	{ "The Prince", "1200" }
};
string horror[5][2] = {
	{ "Dracula", "1500" },
	{ "House of leaves", "2800" },
	{ "Hell House", "1600" },
	{ "The Terror", "1560" },
	{ "Penpal", "1650" }
};
string biography[5][2] = {
	{ "Becoming", "1500" },
	{ "Into the Wild", "1600" },
	{ "The Story of my Experiments with Truth", "1850" },
	{ "The Diary of a Young Girl", "1612" },
	{ "Steve Jobs", "1245" }
};

struct receipt {
	string genre;
	string bookName;
	int price;
};

char reRunDecision;
int reRunCount = 0;

void reRun();
void printReceipt(receipt *arr);

int main()
{
	system("COLOR 47");
	int bookNum;
	receipt soldBooks[100];
	ifstream skullSrc;
	string storeSkull;

	skullSrc.open("skull.txt");
	while (getline(skullSrc, storeSkull))
	{
		cout << storeSkull << endl;
	}
	skullSrc.close();
	cin.ignore();
	system("cls");

	system("COLOR 0F");

	do
	{
		cout << "\t\t\tW E L C O M E  T O  T H E   B O O K   S T O R E" << endl << endl;
		cout << "You may select the genre you want to explore: " << endl;
		cout << "==============================================================" << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << ") " << genres[i] << endl;
		}

		cout << "==============================================================" << endl;
		cout << "Enter the assigned number to go into the following genre: ";

		//choose the genre
		int desicion;
		cin >> desicion;

		system("cls");

		//displaying the books of the desired genre
		switch (desicion)
		{
			case 1:
				cout << "==============================================================" << endl;
				cout << "\t\t\tF A N T A S Y" << endl;
				cout << "==============================================================" << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << i + 1 << ")" << fantasy[i][0] << endl;	
				}
				cout << "==============================================================" << endl;
				cout << "Please enter the number of the book you want to buy: ";
				cin >> bookNum; 
				cout << endl;

				if (bookNum >= 1 && bookNum <= 5)
				{
					cout << "You have purchased " << "'" << fantasy[bookNum - 1][0] << "'." << endl << endl;

					soldBooks[reRunCount].genre = genres[desicion-1];
					soldBooks[reRunCount].bookName = fantasy[bookNum - 1][0];
					soldBooks[reRunCount].price = stoi( fantasy[bookNum - 1][1] ); // stoi("15"); helper function for converting from string to int.

					++reRunCount;

					reRun();
				}
				else
				{
					cout << "invalid number" << endl << endl;
					reRun();
				}
				break;
			case 2:
				cout << "==============================================================" << endl;
				cout << "\t\t\tF I C T I O N" << endl;
				cout << "==============================================================" << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << i + 1 << ")" << fiction[i][0] << endl;
				}
				cout << "==============================================================" << endl;
				cout << "Please enter the number of the book you want to buy: ";
				cin >> bookNum;
				cout << endl;

				if (bookNum >= 1 && bookNum <= 5)
				{
					cout << "You have purchased " << "'" << fiction[bookNum - 1][0] << "'." << endl << endl;

					soldBooks[reRunCount].genre = genres[desicion - 1];
					soldBooks[reRunCount].bookName = fiction[bookNum - 1][0];
					soldBooks[reRunCount].price = stoi(fiction[bookNum - 1][1]); // stoi("15"); helper function for parsing from string to int.

					++reRunCount;

					reRun();
				}
				else
				{
					cout << "invalid number" << endl << endl;
					reRun();
				}
				break;
			case 3:
				cout << "==============================================================" << endl;
				cout << "\t\t\tN O N - F I C T I O N " << endl;
				cout << "==============================================================" << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << i + 1 << ")" << nonfiction[i][0] << endl;

				}
				cout << "==============================================================" << endl;
				cout << "Please enter the number of the book you want to buy: ";
				cin >> bookNum;
				cout << endl;

				if (bookNum >= 1 && bookNum <= 5)
				{
					cout << "You have purchased " << "'" << nonfiction[bookNum - 1][0] << "'." << endl << endl;

					soldBooks[reRunCount].genre = genres[desicion - 1];
					soldBooks[reRunCount].bookName = nonfiction[bookNum - 1][0];
					soldBooks[reRunCount].price = stoi(nonfiction[bookNum - 1][1]); // stoi("15"); helper function for parsing from string to int.

					++reRunCount;

					reRun();
				}
				else
				{
					cout << "invalid number" << endl << endl;
					reRun();
				}
				break;
			case 4:
				cout << "==============================================================" << endl;
				cout << "\t\t\tH O R R O R " << endl;
				cout << "==============================================================" << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << i + 1 << ")" << horror[i][0] << endl;

				}
				cout << "==============================================================" << endl;
				cout << "Please enter the number of the book you want to buy: ";
				cin >> bookNum;
				cout << endl;

				if (bookNum >= 1 && bookNum <= 5)
				{
					cout << "You have purchased " << "'" << horror[bookNum - 1][0] << "'." << endl << endl;

					soldBooks[reRunCount].genre = genres[desicion - 1];
					soldBooks[reRunCount].bookName = horror[bookNum - 1][0];
					soldBooks[reRunCount].price = stoi(horror[bookNum - 1][1]); // stoi("15"); helper function for parsing from string to int.

					++reRunCount;

					reRun();
				}
				else
				{
					cout << "invalid number" << endl << endl;
					reRun();
				}
				break;
			case 5:
				cout << "==============================================================" << endl;
				cout << "\t\t\tB I O G R A P H Y " << endl;
				cout << "==============================================================" << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << i + 1 << ")" << biography[i][0] << endl;

				}
				cout << "==============================================================" << endl;
				cout << "Please enter the number of the book you want to buy: ";
				cin >> bookNum;
				cout << endl;

				if (bookNum >= 1 && bookNum <= 5)
				{
					cout << "You have purchased " << "'" << biography[bookNum - 1][0] << "'." << endl << endl;

					soldBooks[reRunCount].genre = genres[desicion - 1];
					soldBooks[reRunCount].bookName = biography[bookNum - 1][0];
					soldBooks[reRunCount].price = stoi(biography[bookNum - 1][1]); // stoi("15"); helper function for converting from string to int.

					++reRunCount;

					reRun();
				}
				else
				{
					cout << "invalid number" << endl << endl;
					reRun();
				}
				break;
			default:
				cout << "Invalid input" << endl << endl;
				reRun();
				break;
		}
		
	} 
	while (reRunDecision == 'y');

	if (soldBooks[0].genre != "")
	{
		printReceipt(soldBooks);
	}
	else
	{
		cout << "Have a nice day :)" << endl;
	}
	
	system("pause");
	return 0;
}

void reRun()
{
	cout << "If you wish to buy more books; press 'y' if not then press any other key and your receipt will be processed" << endl;

	cout << "Your choice: ";
	cin >> reRunDecision;
	system("cls");
}

void printReceipt(receipt *arr)
{
	string name;
	string num;
	int total = 0;
	string fileName;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Please enter your ID number: ";
	cin >> num;
	
	fileName = "receipt_" + name + "-" + num + ".txt";

	ofstream hardCopy(fileName);

	system("cls");

	cout <<  "==============================================================" << endl;
	hardCopy << "==============================================================" << endl;
	cout << "\t\t\tB I L L" << endl;
	hardCopy << "\t\t\tB I L L" << endl;
	cout << "==============================================================" << endl;
	hardCopy << "==============================================================" << endl;
	cout << endl << "Name: " << name << endl;
	hardCopy << endl << "Name: " << name << endl;
	cout << "ID number: " << num << endl << endl;
	hardCopy << "ID number: " << num << endl << endl;
	cout << "-----------------------------" << endl;
	hardCopy << "-----------------------------" << endl;

	for (int i = 0; i < reRunCount; i++)
	{
		cout << endl << "Genre: " << arr[i].genre << endl;
		hardCopy << endl << "Genre: " << arr[i].genre << endl;
		cout << "Book: " << arr[i].bookName << endl;
		hardCopy << "Book: " << arr[i].bookName << endl;
		cout << "Price: Rs." << arr[i].price << "/-" << endl << endl;
		hardCopy << "Price: Rs." << arr[i].price << "/-" << endl << endl;
		cout << "-----------------------------" << endl;
		hardCopy << "-----------------------------" << endl;

		total = total + arr[i].price;
	}
	
	cout << "==============================================================" << endl;
	hardCopy << "==============================================================" << endl;
	cout << "TOTAL AMOUNT : \t Rs." <<  total <<"/-" <<endl;
	hardCopy << "TOTAL AMOUNT : \t Rs." << total << "/-" << endl;
	cout << "==============================================================" << endl;
	hardCopy << "==============================================================" << endl;
}