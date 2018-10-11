
#include "stdafx.h"
#include <cstdlib>
#include <ctime>
using namespace std;
#include <iostream>


int main()
{
	srand(time(NULL));
	int num = (rand() % 1000) + 1;
	int guesses = 8;
	while (guesses > 0) {
		cout << "type a guess" << endl;
		int guess;
		cin >> guess;
		if (guess > num) {
			cout << "too high, " << guesses << " tries remaining" << endl;
		}
		else if (guess < num) {
			cout << "too low, " << guesses << " tries remaining" << endl;
		}
		else if (guess == num) {
			cout << "correct, with " << guesses << " to spare";
		}
		else {
			cout << "entirely incorrect, have an extra try" << endl;
			guesses++;
		}
		guesses--;
	}
	return 0;
}

