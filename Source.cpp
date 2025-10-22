// this program gets the letter grade for 3 exams put in from the user.
#include <iostream>
using namespace std;

//get the score
double getscore() {
	double score;
	cout << "Enter score one\n";
	cin >> score;
	//check for valid scores
	while (score > 100 || score < 0) {
		cout << "invalid score entered. Plese enter a valid score.\n";
		cin >> score;
	}
	return score;
}
// function takes the score and displays it as a letter grade
void displayLetterGrade(double score) {
	if (score >= 90)
		cout << " A\n";
	else if (score >= 80 && score < 90)
		cout << " B\n";
	else if (score >= 70 && score < 80)
		cout << " C\n";
	else if (score >= 60 && score < 70)
		cout << " D\n";
	else if ( score < 60)
		cout << " F\n";
}
// wher the scores are displayed.
int main() {
	double score1, score2, score3;
	score1 = getscore();
	score2 = getscore();
	score3 = getscore();
	cout << "score 1 is\n"; displayLetterGrade(score1);
	cout << "score 2 is\n"; displayLetterGrade(score2);
	cout << "score 3 is\n"; displayLetterGrade(score3);
}