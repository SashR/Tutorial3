#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

class dice {
private:
	int rollDice;
public:
	dice(void);
	int roll(void);
	int rollNum();
};

dice::dice() {
	rollDice = 0;
	srand(time(NULL));
}

int dice::rollNum() {
	return rollDice;
}

int dice::roll() {
	rollDice++;
	return (rand() % 6) + 1;
}
int main()
{
	dice d1;
	cout << "The dice has rolled: " << d1.rollNum() << endl;
	cout << "The dice shows: " << d1.roll() << endl;
	cout << "The dice has rolled: " << d1.rollNum() << endl;
	cout << "The dice shows: " << d1.roll() << endl;
}