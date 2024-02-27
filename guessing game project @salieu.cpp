
/*NUMBER GAME - Guess the secret number with a range 1 - 100
Frist project by Salieu Gbla
salieugbla.mhinsl@gmail.com

Each player will think of random number within a range, such as 1 - 100
*/



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;

int main(void) {

	// creat a verible to store the random number between 1 and 100
	int random_number;


	// reset random number generators
	srand(time(NULL));

	random_number = (rand() % 100) + 1;

	cout << "Welcome to guessing number game\n" << endl;
	cout << "enter guess number between 1 and 100\n";
	int user_guess;
	int tries = 0;
	// start doing while loop of the game
	do {
		// take input form the user 
		if (scanf_s("%d", &user_guess) > 0) {
		}
		// if the guess is lager than the random numbr
		if (user_guess > random_number) {
			cout << "The number you enter greater";
			tries++;
		}
		else if (user_guess < random_number) {
			cout << "The number you enter is smaller";
			tries++;
		}
		else {
			printf("Correct Guess You Win in %d tries!", tries);
			cout << "Play Agian" << endl;
		}

	} while (user_guess != random_number);
	return 0;
}