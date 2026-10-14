# C++ Math Challenge

A beginner-friendly C++ console project that asks five randomly generated math questions, checks the answers, and reports the score and quiz time.

## Project features

- Asks **5 math questions** per round.
- Randomly chooses addition, subtraction, multiplication, or division.
- Checks each answer and shows the correct answer when the user is wrong.
- Counts correct and incorrect answers.
- Measures total quiz time.
- Calculates average time per question.
- Displays a performance message based on the score.

## Concepts used

This version is designed for students who have not studied user-defined functions yet. The quiz logic is written directly inside `main()`.

- `cout` and `cin`
- Variables and basic arithmetic
- `if`, `else if`, and `else`
- A `for` loop
- Comparison operators such as `==` and `<=`
- Increment operator `++`
- Remainder operator `%`
- Random-number tools from `<cstdlib>`
- Time tools from `<ctime>`

## Header files

| Header | Purpose |
|---|---|
| `<iostream>` | Provides `cout` and `cin` for output and input. |
| `<cstdlib>` | Provides `rand()` and `srand()` for pseudo-random number generation. |
| `<ctime>` | Provides `time()` and `difftime()` for measuring elapsed time. |

> **Note:** This implementation measures time in whole-second units, so a very short quiz may show `0` seconds. A more precise timer could be added later with `<chrono>`.

## How to run

1. Save the C++ source code as `main.cpp`.
2. Open a terminal in the same folder.
3. Compile the program.
4. Run it and answer the five questions.

Example with `g++`:

```bash
g++ main.cpp -o math_challenge
./math_challenge
```

On macOS with Apple Clang, you can also use:

```bash
clang++ main.cpp -o math_challenge
./math_challenge
```

## Teamwork plan

There are four team members. Each member should work on their assigned area, then the team should test the combined program. Everyone should understand the whole program because the teacher may ask any member to explain any part.

### Member 1: Random questions and operations
- Explain `<cstdlib>`, `rand()`, and `srand()`.
- Explain random numbers and the `%` operator.
- Test addition, subtraction, multiplication, and division.

### Member 2: Answer checking and scoring
- Explain `cin` and how the user's answer is stored.
- Explain `if/else` and the `==` comparison operator.
- Test correct and incorrect answers and the score counter.

### Member 3: Timer and statistics
- Explain `<ctime>`, `time()`, and `difftime()`.
- Explain total time and average time per question.
- Test the displayed results.

### Member 4: Loop, integration, and demonstration
- Explain the `for` loop and why it asks five questions.
- Combine and test the program with the team.
- Prepare the live demonstration.

## Program flow

1. Initialize the random-number generator.
2. Set the score to zero.
3. Record the starting time.
4. Repeat five times:
   - Generate numbers and select an operation.
   - Display the question.
   - Read the user's answer.
   - Check the answer and update the score.
5. Record the finishing time.
6. Calculate total time and average time per question.
7. Display the results and a performance message.

## Testing checklist

- [ ] The program asks exactly five questions.
- [ ] Addition questions are checked correctly.
- [ ] Subtraction questions do not produce negative results.
- [ ] Multiplication questions are checked correctly.
- [ ] Division questions produce whole-number answers.
- [ ] Correct answers increase the score.
- [ ] Incorrect answers display the correct answer.
- [ ] Correct and incorrect totals add up to five.
- [ ] The timer and average time are displayed.
- [ ] All four team members can explain the program.

## Possible future improvements

These are optional ideas for a later version:

- Add difficulty levels.
- Let the user choose the number of questions.
- Use a more precise timer with `<chrono>`.
- Show a percentage score.
- Add a replay option.
- Use `<random>` for modern random-number generation.

## Learning goal

The goal is not only to make a working quiz, but also to practise the C++ concepts learned in class and ensure every team member can explain how the program works.
