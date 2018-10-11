
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
		guesses--;
		cin >> guess;
		if (guess > num) {
			cout << "too high, " << guesses << " tries remaining" << endl;
		}
		else if (guess < num) {
			cout << "too low, " << guesses << " tries remaining" << endl;
		}
		else /*if (guess == num)*/ {
			cout << "correct, with " << guesses << " to spare"<< endl;
			//cin >> guess;
			system("pause");
			return 0;
		}
		/*else {
			cout << "entirely incorrect, have an extra try" << endl;
			guesses++;
		}*/
		if (guesses == 0) {
			cout << num << " was the target number" << endl;
			//cin >> guess;
		}
	}



	system("pause");
	return 0;
}

