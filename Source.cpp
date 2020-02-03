#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

/* Three card spread fortune telling*/

string  majorArcana [22] = {"The Fool (0)", "The Magician (I)", "The High Priestess (II)", "The Empress (III)", "The Emperor (IV)", "The Hierophant (V)", "The Lovers (VI)", "The Chariot (VII)", "Strength(VIII)", "The Hermit(IX)", "Wheel of Fortune(X)", "Justice(XI)", "The Hanged Man(XII)", "Death (XIII)", "Temperance (XIV)", "The Devil (XV)", "The Tower (XVI)", "The Star (XVII)", "The Moon (XVIII)", "The Sun (XIX)", "Judgement (XX)", "The World (XXI)"},

        answer,
        cont;

int past,
    present,
    future,
    rerollpresent,
    rerollfuture;


int main ()
{
srand((unsigned)time(0)); 

past = rand()%22+1;
present = rand()%22+1;
future = rand()%22+1;

/* This is test script for the random numbers and their rerolls
cout << past << endl;
cout << present << endl;
cout << future << endl;

cout << "see if matching check works" << endl << endl;

if (present == past)
{
  rerollpresent = rand()%22+1;
  cout << "This one is reroll: " << rerollpresent << endl;
}
else 
{
cout << "This is normal print: " << present << endl;
}

if (future == present || future == rerollpresent || future == past)
{
  rerollfuture = rand()%22+1;
  cout << "This one is reroll: " << rerollfuture << endl;
}
else 
{
 cout << "This is normal print: " << future << endl; 
}
*/
    cout << "Would you like your fortune read? (Yes/No): ";
    cin >> answer;

    if (answer == "yes" || answer == "Yes" || answer == "y" || answer == "Y")
    {
      cout << "Past: "<< majorArcana[past] << endl;
      cout << "Present: " << majorArcana[present] << endl;
      cout << "Future: "<< majorArcana[future] << endl << endl;
    }
    else if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
    {
      cout << "Then why are you here?" << endl;
      return 0;
    }
    else
    {
      cout << "Enter a proper answer, you schmuck!" << endl;
    }

   /*Past meanings for all cards *****Start******/






   /*Past meanings for all cards *****Stop******/







   /*Present meanings for all cards *****Start******/
   /*Present meanings for all cards *****Stop******/


   /*Future meanings for all cards *****Start******/
   /*Future meanings for all cards *****Stop******/



  return 0;

}
