#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	
  srand((unsigned int) time(NULL));

  int random = (rand()%100+20);
  int guess = 0;
  int moves = 0;

  do
  {
    moves++;
    cout << "Enter your guess:";
    cin >> guess;
    if(guess<random)
    cout << "Guess Higher!" <<endl;
    else if(guess>random)
    cout << "Guess Lower!" <<endl;
    else
    cout << "You Won!" <<endl;

  }
  while(guess!=random);
}
