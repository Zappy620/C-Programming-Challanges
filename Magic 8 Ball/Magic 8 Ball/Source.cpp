//Chapter 7 Programming Challenge 19
//Magic 8 Ball

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <time.h>


using namespace std;

string* createArray(string[], int);
void ask();
int response();

int main()
{
	const int size = 12;
	string responses[size];
	string question;
	int answer;

	createArray(responses, size);
	ask();

	getline(cin, question);
	
	srand(time(NULL));

	answer = rand() % 12;

	cout << responses[answer];
	cout << endl;
	cout << endl;

	system("PAUSE");
	return 0;
	

}

void ask()
{
	cout << "Welcome to the Magic 8 Ball Program!" << endl;
	cout << "What is the question you seek the answer to?" << endl;
	cout << endl;
}

string* createArray(string resp[], int size)
{
	ifstream file;
	string lol;


	file.open("8_ball_responses.txt");

	for (int j = 0; j < size; j++)
	{
		getline(file, resp[j]);
	}

	file.close();

	return resp;
}

int response()
{
	int response;
	srand(time(NULL));

	response = rand() % 12;

	return response;
}


