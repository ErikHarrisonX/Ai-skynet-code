#include <iostream>
#include <string>

using namespace std;
//Todo: add human and other ai into it.
int main() {
	//Variables
	int MathTargetPrediction;
	int MathLowRange = 1;
	int MathHighRange = 64;
	int number;
	//int binarySearchTracker;
	number = rand() % MathHighRange + MathLowRange;
	
	//Todo: Make sure loop runs smoothly
	//Starts math Ai loop
	do
	{
		//equation for searching for number
		MathTargetPrediction = ((MathHighRange - MathLowRange) / 2) + MathLowRange;

		//Display prompt for AI
		cout << "\nSearching for the enemy... \n";
		if (MathTargetPrediction < number)
		{
			cout << "\nTarget not found target may be less.\n";
			MathLowRange = MathTargetPrediction + 1;
		}
		else if (MathTargetPrediction > number)
		{
			cout << "\nAI's estimate was of by a higher amount.\n";
			MathHighRange = MathTargetPrediction - 1;
		}
		else
		{
			cout << "\nThe AI has found the target! \n";
		}

		//binarySearchTracker++;
	} while (MathTargetPrediction != number);

		system("PAUSE");
		return 0;
}