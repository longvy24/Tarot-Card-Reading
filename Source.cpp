#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

/* Three card spread fortune telling*/

string  majorArcana [22] = {"The Fool (0)", "The Magician (I)", "The High Priestess (II)", "The Empress (III)", "The Emperor (IV)", "The Hierophant (V)", "The Lovers (VI)", "The Chariot (VII)", "Strength(VIII)", "The Hermit(IX)", "Wheel of Fortune(X)", "Justice(XI)", "The Hanged Man(XII)", "Death (XIII)", "Temperance (XIV)", "The Devil (XV)", "The Tower (XVI)", "The Star (XVII)", "The Moon (XVIII)", "The Sun (XIX)", "Judgement (XX)", "The World (XXI)"},
        //minorArcana [56] = {},
        answer;

int past,
    present,
    future;


int main ()
{
srand((unsigned)time(0)); 

past = rand()%22+1;
present = rand()%22+1;
future = rand()%22+1;

//do{

    cout << "Would you like your fortune read? (Yes/No)";
    cin >> answer;

    if (answer == "yes" || answer == "Yes" || answer == "y" || answer == "Y")
    {
      cout << "Past: "<< majorArcana[past] << endl;
      cout << "Present: " << majorArcana[present] << endl;
      cout << "Future: "<< majorArcana[future] << endl;
    }
    else if (answer == "no" || answer == "No" || answer == "n" || answer == "N")
    {
      cout << "Then why are you here?";
    }
    else
    {
      cout << "Enter a proper answer, you schmuck!";
    }


  //}while (answer!= "yes" || answer!= "Yes" || answer!= "y" || answer!= "Y");

  return 0;

}
