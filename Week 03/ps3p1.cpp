#include<iostream>
using namespace std;
int main()
{
	int Exam_score_1;
	cout << "Enter the first exam score: ";
	cin >> Exam_score_1;
	int Exam_score_2;
	cout << "Enter the second exam score: ";
	cin >> Exam_score_2;
	int Result_1 = (Exam_score_1 * 0.6 ) ;
	int Result_2 = (Exam_score_2 * 0.4);
	int Final_result = Result_1 + Result_2;
	cout << "The final result is " << Final_result << endl;
	return 0;


}