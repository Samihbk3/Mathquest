
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Prepare random numbers
    srand(time(0));

    int correctAnswers = 0;
    int answer;
    int number1, number2;
    int operation;
    int correctAnswer;

    // Start the timer
    time_t startTime = time(0);

    cout << "==============================" << endl;
    cout << "       C++ MATH CHALLENGE" << endl;
    cout << "==============================" << endl;
    cout << "Answer these 5 math questions." << endl;
    cout << "Try to be fast and accurate!" << endl << endl;

    // Repeat the quiz 5 times
    for (int question = 1; question <= 5; question++) {
        number1 = rand() % 20 + 1;
        number2 = rand() % 20 + 1;
        operation = rand() % 4;

        cout << "Question " << question << ": ";

        if (operation == 0) {
            correctAnswer = number1 + number2;
            cout << number1 << " + " << number2 << " = ";
        }
        else if (operation == 1) {
            // Keep subtraction answers non-negative
            if (number1 < number2) {
                int temporary = number1;
                number1 = number2;
                number2 = temporary;
            }

            correctAnswer = number1 - number2;
            cout << number1 << " - " << number2 << " = ";
        }
        else if (operation == 2) {
            number1 = rand() % 12 + 1;
            number2 = rand() % 12 + 1;

            correctAnswer = number1 * number2;
            cout << number1 << " * " << number2 << " = ";
        }
        else {
            number1 = rand() % 12 + 1;
            number2 = rand() % 12 + 1;

            correctAnswer = number1;
            cout << number1 * number2 << " / "
                 << number2 << " = ";
        }

        cin >> answer;

        if (answer == correctAnswer) {
            cout << "Correct!" << endl << endl;
            correctAnswers++;
        }
        else {
            cout << "Incorrect. The correct answer is "
                 << correctAnswer << "." << endl << endl;
        }
    }

    // Stop the timer
    time_t finishTime = time(0);
    double totalTime = difftime(finishTime, startTime);
    double averageTime = totalTime / 5.0;

    // Display results
    cout << "==============================" << endl;
    cout << "          QUIZ RESULTS" << endl;
    cout << "==============================" << endl;

    cout << "Correct answers: " << correctAnswers << " out of 5" << endl;
    cout << "Wrong answers: " << 5 - correctAnswers << endl;
    cout << "Total time: " << totalTime << " seconds" << endl;
    cout << "Average time per question: "
         << averageTime << " seconds" << endl;

    if (correctAnswers == 5) {
        cout << "Excellent! Perfect score!" << endl;
    }
    else if (correctAnswers >= 3) {
        cout << "Good job! Keep practicing." << endl;
    }
    else {
        cout << "Keep practicing and try again!" << endl;
    }

    return 0;
}
