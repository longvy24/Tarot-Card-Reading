#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

/* Three card spread fortune telling*/

string  majorArcana [22] = {"The Fool (0): ", "The Magician (I): ", "The High Priestess (II): ", "The Empress (III): ", "The Emperor (IV): ", "The Hierophant (V): ", "The Lovers (VI): ", "The Chariot (VII): ", "Strength(VIII): ", "The Hermit(IX): ", "Wheel of Fortune(X): ", "Justice(XI): ", "The Hanged Man(XII): ", "Death (XIII): ", "Temperance (XIV): ", "The Devil (XV): ", "The Tower (XVI): ", "The Star (XVII): ", "The Moon (XVIII): ", "The Sun (XIX): ", "Judgement (XX): ", "The World (XXI): "},

        answer,
        cont;

int past,
    present,
    future,
    rerollpresent,
    rerollfuture;

int main ()
{

char *fool1 =  "In the Past position could represent a time in the past "
                  " where you could have taken another route " 
                  "and ended up somewhere different than where you are now. "
                  "It could also mean that you have already set things "
                  "into motion that will produce a new path for the person in question. It can also represent time wasted.",

      *fool2 = "In the present position places the person in the mind of the fool but " 
                 "in their current position.They could be about to abandon something, or "
                 " are looking for new horizons and wanting to enter a new phase of life. "
                 "Generally, you may feel as though are about to begin a new journey. ",

      *fool3 = "In the future position relates to, unsurprisingly, a future journey. "
                 "Not a literal journey where you pack things up, but a personal and spiritual "
                 "journey. New goals, desires, and attainment of new knowledge await. "
                 "The Fool is especially good to draw for the future if you are starting a new " 
                 "school, workplace or other activity that will be a big part of your life.",

      *magi1 = "In the past position shows you have achieved something in the past, whether you "
                  "feel the achievement or not doesn’t matter, but you are still benefiting from it. "
                  "The past is the best predictor of the future, are you have set yourself up well "
                  "through a possible number of means; good grades, good relationships, or good experience.",
      
      *magi2  = " In the present position represents your ambition and confidence. "
                  " You might have just started a project or a new job. You may have new ways to help people, "
                  "through either learning from your elders, or helping those that you can. Consider this transfer of knowledge.",
    
      *magi3  = "In the future position represents your potential. As said above, "
                  "The Magician is a good card to draw. Maintain your vision and see "
                  "it through. Don’t get distracted by side projects, and don’t think you know everything just because you’ve started.",
                
      *hip1  = "In the past position shows a time in the past where you have had to be patient "
                  "to proceed. Maybe all that time studying a dull subject, or waiting in a "
                  "long queue for an important matter.",

      *hip2   = "In the present position suggests you should avoid conflict "
                  "and action and ‘mull over’ the things you’re being told. They may just be an "
                  "illusion, or, someone is telling you one thing but hinting on the bigger picture. ",

      *hip3   = "In the future position represents possibly coming required patience or the "
                  "unveiling of a secret that you might not be privy too, or will overhear.",

      *empr1 = "In the Past position represents a past female influence. "
                  "This could be anything from a role model to mother or even a bully, "
                  "but the aspect to identify is that it is still having an impact on you "
                  "and should be dealt with. If asked in regards to your family, it could "
                  "be related to your Mother. If you’re asking about education or work, "
                  "it could be that a female teacher or colleague is having an influence on you. "
                  "Romance isn’t implied, but don’t ignore it.",

      *empr2  = "In the present position represents a new beginning, but not in the sense of "
                  "starting right away. You may have just completed a task and are looking for "
                  "the next project to work on. It’ll come. You could be bored and unsatisfied in your life. "
                  "The maternal feeling in the card is strong, so maybe an older, more experienced feminine person can aid you.",
              
      *empr3  = "In the future position is the best position it can land in. Are you in a "
                  "relationship now? If so, you or your partner is ‘becoming’ The Empress. "
                  "This is a good sign. If you’re asking about work, it could be that things "
                  "will pan out, eventually, and reach a comfortable plateau.",
              
      *empe1 = "In the Past position represents a strong past paternal presence. A good teacher "
                  "or father who guided you who taught you lessons that still come in handy today. "
                  "The Emperor is conservative with traditional values. Maybe you were brought up in such a "
                  "household, or taught by somebody who paid attention to the rules.",
              
      *empe2  = "In the present position represents a current paradigm of rules and regulations or a strong "
                  "and well-known person. Look to somebody who can guide you down a new way of organisation "
                  "and thinking. It’s also possible you may meet somebody famous, or somebody you used to idolise as a role model.",
              
      *empe3  = "In the future position suggests a level of stability or a change of mindset to perceived "
                  "stability. Your  political views may change, or you may consider working ‘by the book’ instead "
                  "of trying new techniques. You may also be working in the same field for a long time, but this "
                  "isn’t a bad thing; you’ll learn a lot and becoming an expert at the techniques you use.",
              
      *hie1  = "In the past position could represent a past allegiance or membership of a group, club, "
                  "or even a strong ethnic bond that has moulded how you think and feel. Perhaps you were "
                  "brought up in a strongly religious family. It could still be affecting the way you think "
                  "about certain topics. Remember that you’re an individual and you need to make your own mind up, " 
                  "rather than listen to dogma.",
              
      *hie2   = "The Hierophant in the present position could represent a new belief system taking hold, " 
                  "or a new cause to fight for. Right now, you might feel a bit lost or aimless, but don’t "
                  "act irrationally. It’s not a time to jump in and act without planning. Looking at established "
                  "material in the field you’re interested in will help you hone and perfect yourself. Know yourself.",
              
      *hie3   = "You don’t really need to plan. Just letting the paths of the future wind act as they want will be enough. "
                  "Eventually, it will work out, but not in regards to mundane matters, something great is coming.",
              
      *lov1  = "In the Past position means that a previous relationship has grounded you in good stead for the "
                  "present and future. Not wholly meaning a relationship with a member of the opposite sex, but it should be "
                  "an aspect that you shouldn’t consider changing for a while. It’s doing good, whether you are single or in "
                  "a relationship. If you are single, it could represent a strong parental bond or a single close friendship. "
                  "Perhaps you were raised in a non-traditional family, also. ",
              
      *lov2   = "In the present position represents a good relationship. You understand each other and are growing together. " 
                  "Both of you are offering two sides of the same coin, a good balance. Think of the Taijitu, you are both "
                  "separate but retain the other within. Are you arguing with your spouse right now? If it’s about something trivial, "
                  "just think about it and put it in perspective. If it’s more serious, again, think about it. It’s common when "
                  "something bad happens to just try not to think about things, to ignore them. Go somewhere alone and do your "
                  "best to think about every aspect of what happened.",
              
      *lov3   = "In the future position is great if you are single right now. It’s the sort of meaning that anyone can see. "
                  "Love in the future. The standard tarot response. ‘Things will get better’. Remember in the Bible story; "
                  "that Adam and Eve were in paradise and were kicked out. Don’t get disheartened.",

              
      *chari1   = "In the Past position represents a past victory or success that is currently carrying you. You have to look "
                  "to new  horizons while maintaining the current balance. You may have started a new job or graduated from a "
                  "new class recently. The aim is to look at your achievement, learn from them, and think where to go. ",
              
      *chari2   = "In the present position shows that you are about to, or are currently in the process of achieving something. "
                  "You could be in the application process for a job you’ll eventually get, or learn a great deal from. The Prince "
                  "has a Neutral look on his face. Though achieving, there is always a greater goal.",
              
      *chari3   = "In the future position gives you something to look forward to. Are you just laying the groundwork for a new "
                  "project? It is at it’s strongest when in the future position. Just be sure to be yourself. Working alone, "
                  "in fact, might be good for you.",
              
      *str1     = "In the Past position represents a time in the past when you have taken control of something and it has really "
                  "paid off, it’s put you where you are now! You probably aced that exam or got that promotion, or passed that "
                  "driving test! Well done!  It’s given you the boost you need!",
              
      *str2     = "Strength in the present position represents the burgeoning mastery of your field. Things are getting better, "
                  "just continue what you’re doing and everything will be okay. You’ve come out on top.",
              
      *str3     = "Strength in the future position is a good sign. Anything that is bothering you now will seem like nothing in the "
                  "near future. It happens all the time time. Just think about your worries generally. How often do you think about "
                  "things that happened 6 months, 1 year, 5 years ago, that used to affect you so much then, but now just have no "
                  "impact? Time deals with all your problems.",
              
      *herm1     = "In the Past position represents prior solitude and rest after a long journey. You might have learned a big life "
                   "lesson recently and you need time alone now to reflect. Spending time to ourselves is good, even if this isn’t "
                   "what we want. Sometimes we desire friendship, companionship, and relationships. Surviving through times of "
                   "loneliness makes us stronger and more interesting as people. You have time to become yourself, "
                   "and not be influenced by others.",
              
      *herm2     =  "In the present position means you’ve got to look within for answers. You know all you need, you just need to "
                    "contemplate for a short amount of time. Like an ancient astronomer trying to work out the fabric of the universe; "
                    "you have all the tools you need, you just need to work on your own thoughts and perception. Many great discoveries "
                    "were made by people on their own, through the lack of distraction in their lives, "
                    "they were able to concentrate fully on their tasks.",
              
      *herm3     = "The Hermit in the future position means one of two things. You could have thought about what is troubling you "
                    "for long enough to make a realisation and go on with your life, or you might be reaching this point very soon.",

      *wof1      = "In the Past position represents a big change in your past that is currently affecting your life. These are "
                   "usually big changes, like moving home or starting a new job, or relationship. Whatever the change, it’s having "
                   "an effect now. Take into account other cards in your spread to interpret the changes. Any swords cards? "
                   "It could be a past time of violence.",
              
      *wof2      = "In the present position represents a current ongoing change. You could have felt lost for a while and "
                   "pondered on something (like The Hermit. This is the journey of The Fool you know!), and you’ve just "
                   "recently found the answer to it. It’s a good card to see in the present position, as it means a good "
                   "change is currently ongoing, and you’ll be able to see immediate effects of it. ",
              
      *wof3      = "In the future position means you’re setting yourself up for a bit change in your life. The card is "
                   "generally positive, so works well in the future position. It’s something to look forward to at least. "
                   "Consider what was in your mind when you decided to do this reading, and then consider what is a good "
                   "outcome of that particular scenario. This card in the future position likely represents that. ",
        
      *just1     = "In the Past position represents a past decision that is playing out now and currently affecting your life. "
                   "It doesn’t mean that your choice was good or bad, just that it is currently affecting your motions. "
                   "It usually represents large decisions like moving house, a new job, a new partner.",
              
      *just2     = "In the present position means you have a big decision ahead of you. Usually, we’re faced with decisions every day, "
                   "but Justice means that your choice could affect other people a great deal and drastically change your life. "
                   "Are you currently thinking about a new path to take?",
      *just3     = "In the future position means you are working towards a large decision. You might have to choose between two jobs "
                   "or two partners. there will be enough time to think it over, but treat this as a forewarning. ",

      *thm1      = "In the Past position represents something in the past that you’ve gotten rid of, and for the better. "
                   "Sacrifice seems harsh at first, but we truly grow from it. Think about how you’ve grown from all the things "
                   "you’ve given up in the past. ",
              
      *thm2      =  "In the present position represents that you’re facing a choice or decision. You might have to give something "
                    "up to go the right way. It could, for example, mean moving away and having to give up local connections, or "
                    "going to a new job or school and losing your circle of friends and acquaintances. ",
        
      *thm3      = "In the future position means you’ll face an upcoming decision. We face choices every day from the moment we "
                   "wake up. Deciding when to get up is usually the first choice for many of us. Start your day right with motivation "
                   "and a goal each day. Set goals and achieve them. ",
        
      *dea1      = "In the Past position means that you have recently moved into a new era of your life. There may have been "
                    "some sacrifice, or it might have been difficult. For example, you may have just ended a relationship, and the "
                    "pain is still wearing on you. This is likely the best position to see Death in, as you know the hardest parts "
                    "are behind you. ",

      *dea2      = "In the present position represents an upcoming event or person that will come into your life soon. The wheels are "
                   "already in motion. It will change your current paradigm of daily life. It could be on your mind daily, as "
                   "something to worry about or possibly something to anticipate. You’ve got to remember that in one, five or "
                   "ten years, you won’t even think about it. It’s going to affect you now, but time heals all wounds. ",

      *dea3      = "In the present position represents an upcoming event or person that will come into your life soon. The wheels are "
                   "already in motion. It will change your current paradigm of daily life. It could be on your mind daily, as "
                   "something to worry about or possibly something to anticipate. You’ve got to remember that in one, five or "
                   "ten years, you won’t even think about it. It’s going to affect you now, but time heals all wounds. ",
              
      *temp1     = "In the Past position means that things have been relatively stress-free in the recent past. It’s acted as a good "
                   "foundation for you to thrive in whichever field you’re interested in. It can also represent a tragic past event "
                   "that you’ve grown from and it has made you who you are. ",

      *temp2     = "In the present position means you should be practicing moderation. don’t go overboard, don’t overwork yourself, "
                   "you’ll only wear yourself out. If anything bad is happening in your life, remind yourself that it’s going to end "
                   "soon. Temperance means that balance will be back in your life. ",

      *temp3     = "In the future position is the best position for Temperance when used in a time-based spread. "
                   "It means that things will work out in the future. Things will be balanced. ",
              
      *dev1      = "In the Past position means that you have overcome a period of materialism, excessive fandom or addiction. "
                   "You may have been really ‘into’ something, and you’ve finally escaped it. It could be anything, a TV show, a drug, "
                   "a person. You were hooked on it but you got away from it. Learn to understand what made you fall into the trap of "
                   "addiction and do not make the same mistake again. The Devil in the past position is a good sign, as it means it’s "
                   "all behind you. ",
        
      *dev2      = "In the present position could mean a few things. As a tarot card, The                  Devil has many interpretations and has "
                   "changed a lot over the years. Currently, you might be addicted to something, but you have no idea. "
                   "Is there something you do that you’re ashamed of? Something you wouldn’t tell anybody about? It’s time to stop. "
                   "You can only grow as a person with sacrifice and willpower. You might currently feel trapped or in a situation "
                   "that is ongoing and you feel like you’ll never escape. Understand that this is the present, and it won’t always "
                   "be like this. ",
        
      *dev3      = "In the future position is not a good sign. Beware that something in the future might attract you and it won’t be "
                   "good for your personal growth. You might become enamoured with a person who isn’t for you, or fall into a trend  "
                   "that is generally detrimental. To combat it, you have to be sure of yourself, and in sound mind; think about what "
                   "you want from life. ",
        
      *tow1      = "In the Past position means that you may have had a traumatic event happen in your past. It could be distant or "
                   "recent, but it is still affecting you. Sometimes we experience things that we can’t live with and our senses are "
                   "overloaded trying to comprehend it. A sudden death, a cheating spouse or even something as big as a natural disaster."
                   "You have to remember that it happened in the past and you are still around, living with it in your head. "
                   "You’ve grown since try to understand how much you’ve changed. ",
        
      *tow2      = "In the present position means that conflict is just around the corner, or is currently ongoing. Try to deal with "
                   "it as best you can. Arguments might happen a bit easier, and there might be something on your mind. ",
        
      *tow3      = "In the future position represents coming challenges that are going to be extremely disrupting to your regular life. "
                   "Just as it was happening now, when it comes, try to deal with it in the present. Worrying never helps. Can you see "
                   "the signs of something falling apart already? It may well be that the inevitable is going to happen, "
                   "but having some foreknowledge will help you a lot. ",
        
      *star1     = "In the Past position means that you could be recovering from a past altercation or conflict. This isn’t necessarily "
                   "a physical conflict, it could also mean a period of stress. Realise that it’s all over now and you can start your "
                   "recovery. ",
        
      *star2     = "In the present position represents a current period of peace that you’re enjoying. You might have just accomplished "
                   "something great! It’s always good to have downtime, you don’t want worldly pursuits to overcome who you really are. "
                   "If you’ve just accomplished something big at work or school, congratulations. Treat the present as a time to relax, "
                   "recoup and reflect on your achievement. ",
        
      *star3     = "In the future position could mean that you’re currently struggling with something. Don’t worry, you’ll overcome it "
                   "one way or the other. The struggle could mean that you’re looking at something from only one point of view. Get a "
                   "dual approach. Ask somebody you wouldn’t normally ask. Put your trust in someone new. ",
        
      *moon1     = "In the Past position might mean that you’ve remembered something in the past incorrectly. It could be an event of "
                   "how you have perceived a person. Have you just seen somebody recently after a long time? They’ve likely changed by "
                   "now. Have you witnessed an event that is coming up in conversation now? Be careful not to exaggerate, even if it is "
                   "human nature to. ",
     
       *moon2     = "In the present position could mean that something is about to happen, or is currently happening that you can’t "
                    "initially understand. Unlike The Fool, you aren’t completely ignorant. You might expect an outcome that won’t "
                    "occur, or things might not go to plan. The key is a lack of clarity. We worry about the unknown. A fear of the "
                    "dark is not a fear of a lack of light, it’s the fear of what you can’t see. You won’t ever see unless you go "
                    "out there. ",
        
      *moon3     = "In the future position may mean that you’re unsure of where your life is going. It isn’t an exaggeration to say "
                   "that everybody feels this way, even the people with the most cemented views on life. You just can’t know. "
                   "We perceive time linearly, this is a rule you cannot break. Spend less time worrying about the future and more "
                   "time bettering the present. You are only ever here and it is only ever now. ",
        
      *sun1      = "In the Past position means that you’re coming out of a really good phase of your life. Don’t treat it as if it’s "
                   "over, treat it as a good foundation to work from. If you think of your body as a building, say, a temple, it must "
                   "have good foundations both physical in actual construction, and good foundations in morality, truth, and selflessness. ",
        
      *sun2      = "In the present position represents a good period of time that you’re about to enter, or are currently residing in. "
                   "Get ready for new opportunities and new people. You may feel extremely calm right now and fulfilled as nothing can "
                   "get to you. It’s a feeling we all strive for. Congratulations. ",
        
      *sun3      = "In the future position represents the feeling of fulfilment that you will have when you have completed what "
                   "you’re working on. Apathy is death, but to strive to achieve is to live. ",
        
      *jud1      = "In the Past position means there might have been an event in the past where you have jumped to conclusions, and "
                   "whatever the outcome, it is still affecting you now. It could have been an emotional outburst that was unwarranted. "
                   "It may also mean that everything you’ve done to work up to this point is going to be forgotten. This isn’t always a " 
                   "bad thing; you are closing that chapter of your life and turning over a new leaf.",
        
      *jud2      = "In the present position means that you may be called to talk about your actions soon. Have you been acting in "
                   "secret? People may know. Likewise, you may know someone has been trying to keep something hidden and now is the "
                   "time to approach them about it. If it feels like you’re doing something wrong in regards to a person, own up to it "
                   "before they find it out. ",
        
      *jud3      =   "In the future position means that the choices you’ve made now are going to have a noticeable effect on the future. "
                     "Even the smallest decision can affect the future in more ways than we will ever know. It’s also the choices we "
                     "don’t make that can matter. Remember not to put off or procrastinate in the meantime. Judgement day can come at "
                     "any time, so you have to keep true to yourself until it does. ",

      *wor1      = "In the Past position means that things are coming full circle. In a manner of thought, time is cyclical. "
                   "Months go by and come back again, weeks are but short rotations of the same 7 days. Make sure you understand "
                   "your past and don’t make the same mistakes that might throw you back to where you started. ",
        
      *wor2      = "In the present position means that you might feel like you’ve done it all and there’s nothing else to conquer. "
                   "Help others realise their goals. If there’s something you’ve wanted for a while, it may very well appear very soon. "
                   "Different viewpoints will help you here, as they always will.",
        
      *wor3      = "In the future position suggests that you need to find your destiny. You may not believe you have a purpose, but "
                   "even as a single person, you can make a change. Don’t be afraid of failure, take up a new project and run with it. "
                   "Think about what you want from life, are you currently on the path to do this? ";
      

      


srand((unsigned)time(0)); 

past = rand()%22+1;
present = rand()%22+1;
future = rand()%22+1;
        

cout << majorArcana[21] << puts(wor1) << endl;
cout << majorArcana[10] << puts(herm2) << endl;
cout << majorArcana[3] << puts(empr3) << endl;




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
