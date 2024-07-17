this is a number guessing game 
can be player single or multi player
you have to just guesses the number which is generated randomly 
the winner will be decided by who is having less number of guess
______________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________-

Guess the Number Game
This program implements a simple "guess the number" game where the computer randomly selects a number between 1 and 100, and the user tries to guess it.
The program provides feedback to the user after each guess, indicating whether the guessed number is higher or lower than the actual number. The game continues until the user guesses the correct number.

Features:
Uses rand() function from <stdlib.h> to generate random numbers.
Utilizes srand(time(0)) to seed the random number generator based on the current time, ensuring different sequences of random numbers on each program run.
Uses scanf() to read user input for guessing the number.
Provides feedback to the user after each guess to help narrow down the correct number.


EXAMPLE OUTPUT:
$ ./guess_number
guess the number:
50
lower the number
guess the number:
30
higher the number
guess the number:
40
lower the number
guess the number:
35
higher the number
guess the number:
37
lower the number
guess the number:
36
No of guess=6

