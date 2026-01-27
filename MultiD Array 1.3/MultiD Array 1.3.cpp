#include <iostream>

int main()
{
	const int STUDENTS = 5, SUBJECTS = 4;

	int grades[STUDENTS][SUBJECTS] =
	{ 1, 5, 8, 1, 
	7, 3, 6, 0, 
	6, 3, 2, 6, 
	1, 1, 0, 7, 
	12, 11, 9, 12 };

	for (int i = 0; i < STUDENTS; i++)
	{
		int totalGrade = 0;
		for (int j = 0; j < SUBJECTS; j++)
		{
			totalGrade += grades[i][j];
		}
		double avgGrade = static_cast<double>(totalGrade) / SUBJECTS;
		std::cout << "Avg grade of student #" << i + 1 << ": " << avgGrade << '\n';
	}

	return 0;
}