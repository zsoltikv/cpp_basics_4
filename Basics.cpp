#include <iostream> // include the input-output stream library for cin and cout
#include <string>   // include string library for string data type and operations
#include <cstdlib>  // include cstdlib for rand() and srand() functions
#include <ctime>    // include ctime for time() function to seed the random generator

using namespace std; // use the standard namespace to avoid writing std:: constantly

int main()
{

    // set the locale to support Hungarian characters in the console output
    setlocale(LC_ALL, "hu_HU.UTF-8");

    // -------------------------------------------------------------------------------
    // --- 1. FOR LOOP: CALCULATING SUM FROM 1 TO 100 ---
    // -------------------------------------------------------------------------------

    // declare an accumulator variable and initialize it to 0.
    int sum = 0;

    // loop from 0 to 100 using a for loop structure.
    for (int i = 0; i <= 100; i++)
    {
        sum += i; // add the current value of i to sum
    }

    // display the total sum calculated with the for loop.
    cout << "FOR CYCLE TYPE      | The sum of whole numbers from 1 to 100 is: " << sum << endl;

    cout << endl; // add a blank line for readability before the next section.

    // -------------------------------------------------------------------------------
    // --- 2. WHILE LOOP: CALCULATING SUM FROM 1 TO 100 ---
    // -------------------------------------------------------------------------------

    // declare an accumulator variable for the while loop and initialize it to 0.
    int sum2 = 0;

    // declare and initialize the loop control variable.
    int j = 0;

    // execute the loop as long as j is less than or equal to 100.
    while (j <= 100)
    {
        sum2 += j; // add the current value of j to sum2
        j++;       // increment j by 1 in each iteration
    }

    // display the total sum calculated with the while loop.
    cout << "WHILE CYCLE TYPE    | The sum of whole numbers from 1 to 100 is: " << sum2 << endl;

    cout << endl; // add a blank line for readability before the next section.

    // -------------------------------------------------------------------------------
    // --- 3. DO-WHILE LOOP: CALCULATING SUM FROM 1 TO 100 ---
    // -------------------------------------------------------------------------------

    // declare an accumulator variable for the do-while loop and initialize it to 0.
    int sum3 = 0;

    // declare and initialize the loop control variable.
    int k = 0;

    // execute the loop body at least once before checking the condition.
    do
    {
        sum3 += k; // add the current value of k to sum3
        k++;       // increment k by 1 in each iteration

    } while (k <= 100); // check condition: continue if k is less than or equal to 100

    // display the total sum calculated with the do-while loop.
    cout << "DO-WHILE CYCLE TYPE | The sum of whole numbers from 1 to 100 is: " << sum3 << endl;

    cout << endl; // add a blank line for readability before the next section.

    // -------------------------------------------------------------------------------
    // --- 4. CHECK IF A NUMBER IS PRIME OR NOT ---
    // -------------------------------------------------------------------------------

    // declare variables for the input number and prime checking logic.
    int number;
    int divisor = 0; // counter to store the number of divisors found
    int i = 2;       // start checking for divisors from 2

    // prompt the user to enter a whole number.
    cout << "Please enter a whole number: ";
    cin >> number; // read the user input into the variable 'number'

    // numbers less than or equal to 1 are not prime numbers.
    if (number <= 1)
    {
        cout << "The number is NOT a prime number." << endl;
    }
    else
    {
        // check potential divisors up to number / 2 while no divisor has been found yet.
        while (i <= number / 2 && divisor == 0)
        {
            // check if 'number' is divisible by 'i' with no remainder.
            if (number % i == 0)
            {
                divisor++; // increment divisor counter if a factor is found
            }
            i++; // increment i to check the next potential divisor
        }

        // if a divisor was found, it is not a prime; otherwise, it is a prime.
        if (divisor > 0)
        {
            cout << "The number is NOT a prime number." << endl;
        }
        else
        {
            cout << "The number IS a prime number." << endl;
        }
    }

    cout << endl; // add a blank line for readability before the next section.

    // -------------------------------------------------------------------------------
    // --- 5. EXAM SCORE EVALUATOR (1-100) WITH INPUT VALIDATION ---
    // -------------------------------------------------------------------------------

    // declare a variable to store the exam score.
    int score = 0;

    // use a do-while loop to repeatedly ask for input until a valid score (1-100) is given.
    do
    {
        cout << "Please enter your exam score (1-100): ";
        cin >> score; // read the user input into the variable 'score'

    } while (score < 1 || score > 100); // repeat if the entered score is outside the range

    // check if the exam score meets the passing threshold (50 points or higher).
    if (score >= 50)
    {
        // print a pass message if the condition is true.
        cout << "Congratulations! You passed the exam." << endl;
    }
    else
    {
        // print a fail message if the score is below 50.
        cout << "Sorry, you did not pass the exam." << endl;
    }

    cout << endl; // add a blank line for readability before the next section.

    // -------------------------------------------------------------------------------
    // --- 6. RANDOM NUMBER GENERATION AND ARRAY DISPLAY ---
    // -------------------------------------------------------------------------------

    // declare an integer array capable of holding 10 elements.
    int randomNumbers[10];

    // seed the random number generator using the current system time to ensure unique results on each run.
    srand(time(NULL));

    // iterate 10 times to generate, store, and display random numbers.
    for (int i = 0; i < 10; i++)
    {
        // generate a pseudo-random integer and store it in the array at index i.
        randomNumbers[i] = rand();

        // display the 1-based position and the generated random number to the console.
        cout << "Random number " << (i + 1) << ": " << randomNumbers[i] << endl;
    }

    cout << endl; // add a blank line for readability before the next section.

    // -------------------------------------------------------------------------------
    // --- 7. SIMULATING 12 DICE ROLLS USING AN ARRAY ---
    // -------------------------------------------------------------------------------

    // declare an array to store the outcomes of 12 dice rolls.
    int cube[12];

    // loop 12 times to generate and output each dice roll result.
    for (int i = 0; i < 12; i++)
    {
        // generate a random integer from 1 to 6 using modulo arithmetic (rand() % 6 produces 0-5).
        cube[i] = rand() % 6 + 1;

        // display the current roll number (1-based index) and its corresponding value.
        cout << "Dice roll " << (i + 1) << ": " << cube[i] << endl;
    }

	cout << endl; // add a blank line for readability before the next section.

    // -------------------------------------------------------------------------------
    // --- 8. HOMEWORK: NUMBER GUESSING GAME (1-100) ---
    // -------------------------------------------------------------------------------

    // HOMEWORK: generate a random integer between 1 and 100 and ask for guesses from the user until the user guesses correctly.

    // return 0 to indicate that the program executed successfully.
    return 0;

}