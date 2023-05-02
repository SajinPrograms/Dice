#include<iostream>
#include<ctime>

using namespace std;

int d20Dice(int num1);
int d4Dice(int num2);

int main()
{
	int diceOne = 0;
	int diceTwo = 0;
	int rollCount = 0;
	int loopCount = 0;

	srand(time(0));
	do
	{
		diceOne = d20Dice(diceOne);
		diceTwo = d4Dice(diceTwo);
		cout << "The roll of dice one is: " << diceOne << endl;
		cout << "The roll of dice two is: " << diceTwo << endl;
		loopCount++;
		rollCount = diceOne + diceTwo;

	} while (rollCount != 2);
	cout << "the number of roll it took to reach snake eyes " << loopCount << endl;
}
int d20Dice(int num1 )
{
	int d20roll;
	d20roll = rand() % 20 + 1;
	return d20roll;
}
int d4Dice(int num2)
{
	int d4roll;
	d4roll = rand() % 4 + 1;
	return d4roll;
}
