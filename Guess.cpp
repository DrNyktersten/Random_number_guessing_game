#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

int main()
{
    int number, initial_guess = 1; total1 = 0, total2 = 0, sum_of_guesses; 
    int max = 10, random_number;
    
    cout << "Welcome to the number game:" << endl; 
    cout << "Guess what number will it be: (1-10)" << endl; 
    cin >> number; 
    
    unsigned seed = time(0);
    srand(seed); 
    random_number = rand()%max+1; 
    
    while (number > random_number)
    {
        int guess = 0; 
        cout << "Too high, try again." << endl; 
        cin >> number;
        guess++; 
        total1 += guess; 
    }
    while (number < random_number)
    {
        int guess = 0; 
        cout << "Too low, try again." << endl; 
        cin >> number; 
        guess++; 
        total2 += guess; 
    }
    
    sum_of_guesses = total1 + total2 + initial_guess; 
    if (number == random_number)
    {
        cout << "Your response " << number << endl; 
        cout << "Actual number " << random_number << endl;
        cout << "Your answer is correct!" << endl; 
        cout << "Your total number of guesses is " << sum_of_guesses; 
    }
    return 0;
}
