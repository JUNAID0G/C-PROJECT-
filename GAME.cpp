#include <iostream>
using namespace std;
int main(){
int number = 8;
int guess;

   cout << "Enter the number you guessed: ";
   cin >> guess;
if(number == guess){
cout << "You guessed it right";
}else
{cout << "You lose, try again";
}
return 0;
}
