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

char *foolpast =  "In the Past position could represent a time in the past "
                  " where you could have taken another route " 
                  "and ended up somewhere different than where you are now. "
                  "It could also mean that you have already set things "
                  "into motion that will produce a new path for the person in question. It can also represent time wasted.",

      *foolpre = "In the present position places the person in the mind of the fool but " 
                 "in their current position.They could be about to abandon something, or "
                 " are looking for new horizons and wanting to enter a new phase of life. "
                 "Generally, you may feel as though are about to begin a new journey. ",

      *foolfut = "In the future position relates to, unsurprisingly, a future journey. "
                 "Not a literal journey where you pack things up, but a personal and spiritual "
                 "journey. New goals, desires, and attainment of new knowledge await. "
                 "The Fool is especially good to draw for the future if you are starting a new " 
                 "school, workplace or other activity that will be a big part of your life.",

      *magipast = "In the past position shows you have achieved something in the past, whether you "
                  "feel the achievement or not doesn’t matter, but you are still benefiting from it. "
                  "The past is the best predictor of the future, are you have set yourself up well "
                  "through a possible number of means; good grades, good relationships, or good experience.",
      
      *magipre  = " In the present position represents your ambition and confidence. "
                  " You might have just started a project or a new job. You may have new ways to help people, "
                  "through either learning from your elders, or helping those that you can. Consider this transfer of knowledge.",
    
      *magifut  = "In the future position represents your potential. As said above, "
                  "The Magician is a good card to draw. Maintain your vision and see "
                  "it through. Don’t get distracted by side projects, and don’t think you know everything just because you’ve started.",
                
      *hippast  = "In the past position shows a time in the past where you have had to be patient "
                  "to proceed. Maybe all that time studying a dull subject, or waiting in a "
                  "long queue for an important matter.",

      *hippre   = "In the present position suggests you should avoid conflict "
                  "and action and ‘mull over’ the things you’re being told. They may just be an "
                  "illusion, or, someone is telling you one thing but hinting on the bigger picture. ",

      *hipfut   = "In the future position represents possibly coming required patience or the "
                  "unveiling of a secret that you might not be privy too, or will overhear.",
      *emprpast =
      *emprpre  =
      *emprfut  =
      *empepast =
      *empepre  =
      *empefut  =
      *hiepast  =
      *hiepre   =
      *hiefut   =
      *lovpast  =
      *lovpre   =
      *lovfut   =
      *chapast  =
      *chapre   =
      *chafut   =
      *strpast  =
      *strpre   =
      *strfut   =
      *herpast  =
      *herpre   =
      *herfut   =
      *
      *
      *
      *
      *
      *
      

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
