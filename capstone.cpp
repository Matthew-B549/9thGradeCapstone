using namespace std;

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>

void sleep(int waitTime);
int menu();
void resume();
int dialogue(int dialogueNumber);

// the functions for the dialogue for all of the different stories
void aSoundOfThunder();

void redWinter();

void theSniper();

void lordOfTheFlies();

void romeoAndJuliet();

void howStressImpactsDecisionMaking();

void theSiege();

void heartShapedBox();


int main() {
 // variables
 int quit = 0;
 int dialogueNumber = 1;
 
 dialogueNumber = dialogue(dialogueNumber);
 sleep(7000);
 resume();
 
 dialogueNumber = dialogue(dialogueNumber);
 sleep(7000);
 resume();
 
 cout << endl << "Let's delve deeper..." << endl << endl;
 sleep(2500);
 dialogueNumber = dialogue(dialogueNumber);
 
 sleep(7000);
 resume();
 cout << endl << "It is now time to make a choice.";
do {
    quit = menu();
} while (quit == 0);
 cout << endl << "Thank you for viewing my project. I hope my project answered the question of how stories exploring high-pressure situations reveal the importance of making calculated decisions to avoid significant consequences. Have a great rest of your day!";
    return 0;
}
// this function is a way for me to keep the text that I want to print outside of the main function to keep the main function cleaner
int dialogue(int dialogueNumber)
{
    if (dialogueNumber == 1)
    {
         cout << "Stories are a collection of personal anecdotes shared from the author to the reader. Stories can have multiple purposes, such as to entertain, to persuade, and to inform. In addition to these purposes, stories can also be used to pass down knowledge, preserve memories, and share advice." << endl << endl;
    } else if (dialogueNumber == 2)
    {
        cout << endl << "One key piece of advice that stories share is about the implications of poor decisions. Throughout this year, I have been thinking about the question: how can stories exploring high-pressure situations reveal the importance of making calculated decisions to avoid significant consequences?" << endl << endl;
    } else if (dialogueNumber == 3)
    {
         cout << "Throughout this year, I have read numerous stories relating to this topic and thought about how they give insight into this topic. From these examples I have come to find that stories about high-pressure situations reveal how making poor decisions due to external pressure and stress often leads to significant consequences. This computer program, written in C++, explores eight different stories through various media and how they assisted me in answering my research question." << endl << endl;
    }
    dialogueNumber+=1;
    return dialogueNumber;
}

// this sleep method is a workaround for needing different sleep methods on windows and linux so I included it so that the program would be compatible with both operating systems
void sleep(int waitTime)
{
    this_thread :: sleep_for(chrono :: milliseconds(waitTime));
}

// this menu system will allow the user to choose which story they want to see information for
int menu()
{   
    int quit = 0;
    int choice = -1;
    cout << endl << endl << "Which story would you like to look at first? (Enter the corresponding number)" << endl << endl << "\"A Sound of Thunder\" (1)" << endl << "Red Winter (2)" << endl << "\"The Sniper\" (3)" << endl << "Lord of the Flies (4)" << endl << "Romeo and Juliet (5)" << endl << "\"How Stress Impacts Decision Making\" (6)" << endl << "The Siege: The Remarkable Story of the Greatest SAS Hostage Drama (7)" << endl << "\"Heart-Shaped Box (8)\"" << endl;
 cin >> choice;
 switch (choice) {
     case 1:
     aSoundOfThunder();
     break;
     case 2:
     redWinter();
     break;
     case 3:
     theSniper();
     break;
     case 4:
     lordOfTheFlies();
     break;
     case 5:
     romeoAndJuliet();
     break;
     case 6:
     howStressImpactsDecisionMaking();
     break;
     case 7:
     theSiege();
     break;
     case 8:
     heartShapedBox();
     break;
     default:
     cout << "Invalid choice... You are being sent back to the menu..." << endl;
     menu();
     break;
 }
cout << endl << endl << "If you would like to continue and see more examples, enter 0. If you would like to quit the program, enter 1. ";
cin >> quit;
return quit;
}

// asks the user to enter a 0 to continue the code so that the reader does not get overwhelmed with text
void resume()
{
  int resume;
    cout << "Enter 0 to continue: ";
 cin >> resume;
 while (resume != 0) {
    cout << "That's not 0. Try again: ";
    cin >> resume;
 }
}


// all of the story dialogues:

void aSoundOfThunder(){
    cout << endl << endl << "\"A Sound of Thunder\" by Ray Bradbury is a short story following the character Eckels, a wealthy man who joins a time-traveling safari tour to hunt dinosaurs. The tour guide, Travis, warns Eckels that the smallest actions and changes done to the past can multiply over millions of years, leading to huge changes in the future. When Eckels sees the Tyrannosaurus rex that they are supposed to kill, he panics and becomes mortified in fear. In his fear, \"Eckels, not looking back, walked blindly to the edge of the Path, his gun limp in his arms, stepped off the Path, and walked, not knowing it, in the jungle. His feet sank into green moss. His legs moved him, and he felt alone and remote from the events behind\" (Bradbury). When Eckels and the rest of the group returned to the present, the world was vastly different. The language was different and the winner of the election was a different candidate. The reason for this is because when he wandered off the path in a trance of fear he crushed a butterfly under his boot and over time the change multiplied eventually leading into a substantial and noticeable difference. This story demonstrates how because of his sudden fear, his mind was manipulated and he chose to stray from the path despite being warned against it. He did not realize what he was doing because he was being manipulated by his fear. The external pressure on him caused him to make a poor decision, leading to significant consequences when they returned to the present.";
}

void redWinter(){
    cout << endl << endl << "Red Winter by Marc Cameron is a fast-paced novel set during the Cold War. It weaves together two storylines - the first one revolving around a top-secret stealth plane crash in Nevada and the other with a group of American and British spies going into East Berlin to try and receive information from a possible defector. After the plane crashes, a Soviet spy attempts to get away with a piece of the wreckage without being stopped by the FBI. The main plot surrounding uncovering a mole in East Berlin has similar roles of perseverance. The book highlights the differences in freedom between East and West Berlin. It examines how, in East Berlin, there is constant surveillance by the Stasi. The movement of people in East Berlin is also restricted, and there is oppressive government control. The novel contains strong themes of oppression and struggles over power and control, as well as the significance of poor decisions made while under pressure. Red Winter ties high-pressure decision-making to oppression and authoritarian rule through its Cold War setting. The novel vividly portrays East Berlin where the Stasi monitors citizens, restricts freedoms of speech and travel, and punishes people who disagree through torture. This oppressive environment forces individuals to make desperate and irrational decisions to attempt to flee or resist the rule in East Berlin. One striking example is Kurt Feifer, a Soviet intelligence officer in East Berlin who seeks asylum in the West. He possesses critical espionage details which he offers in exchange for asylum, knowing that if he is caught, he will face torture of execution by the authoritarian government. He desperately seeks out freedom from authoritarian rule, forcing him to revert to desperate measures and make risky decisions.";
}

void theSniper(){
    cout << endl << endl << "\"The Sniper\" by Liam O'Flaherty is a short story about a Republican sniper on the rooftops of Dublin, Ireland during the Irish Civil War. The short story highlights how war strips individuals of their humanity by forcing them into violent roles where survival depends on quick judgement. A young sniper, isolated on a rooftop, knows that exposing himself could mean death. Yet, the stress and exhaustion push him towards making a reckless decision, \"He paused for a moment, considering whether he should risk a smoke. It was dangerous. The flash might be seen in the darkness, and there were enemies watching. He decided to take the risk\" (O\’Flaherty). His position is revealed to the enemy after which he is wounded and forced to trick the enemy to survive. He later discovers that the enemy that he killed was his brother, adding another layer to the dehumanization and loss of innocence caused by war. The war forced the sniper to rely on his survival instincts, never considering the possibility that his enemy could be someone close to him before it was too late.";
}

void lordOfTheFlies(){
    cout << endl << endl << "Lord of the Flies by William Golding tells the story of a group of schoolboys stranded on an island without any adults. Even though at first they act civilly under the leadership of Ralph, they gradually succumb to fear, power struggles, and survival instincts leading to many of them making many irrational and savage decisions, escalating the situation into violence. In one example, Simon is gruesomely killed because the boys, overwhelmed by fear and mob mentality, mistake him for the beast and impulsively kill him. Another moment in which pressure leads to violence and death is when Piggy and Ralph confront Jack’s tribe, demanding the return of Piggy’s stolen glasses. In this tense moment Roger pushes a massive boulder off the cliff, crushing Piggy instantly. This decision, driven by the chaos and hostility that have slowly consumed the boys as they delve into savagery, symbolizes the complete collapse of civilization into savagery on the island. The story is a great example of how even innocent people can do bad things. Without proper order and supervision, people can spiral into destructive behavior, leading to tragic consequences as seen in the story when multiple children die and more violence occurs before they are saved when a naval officer arrives on the island. When the boys lose their connection to society and civility and are subjected to high levels of stress and hopelessness, they begin to make worse and worse decisions, which result in huge implications.";
}

void romeoAndJuliet(){
    cout << endl << endl << "William Shakespeare's play, Romeo and Juliet, is a story about two rivaling families, the Montagues and the Capulets, who have been fighting for a long time because of an ancient grudge. The heirs of the conflicting families, Romeo and Juliet, fall in love even though they are supposed to be sworn enemies. In Romeo and Juliet, a series of impulsive decisions and misunderstandings lead to tragedy and many deaths. After Tybalt kills Mercutio, Romeo, overwhelmed by grief, retaliates and kills Tybalt, \"Alive in triumph, and Mercutio slain! / Away to heaven, respective lenity, / And fire-eyed fury be my conduct now.- / Now, Tybalt, take the \'villain\' bank again / That late thou gavest me, for Mercutio\'s soul / Is but a little way above our heads, / Staying for thine to keep him company. / Either thou or I, or both, must go with him\" (Shakespeare 3.1.127-134). This rash decision that one of them must die eventually leads to his banishment after Romeo kills Tybalt and, in turn, sets off a chain of tragic events. Juliet then faces pressure to marry Paris and takes a sleep potion to fake her death to escape having to marry him. The urgency of the situation forces her into making a reckless decision without fully considering the risks. Furthermore, Romeo believes that Juliet is truly dead so he hastily buys a poison to take his life and moments later Juliet awakens and kills herself as well. This story emphasizes how external factors like seeking revenge, love, and being forced into making quick decisions can lead to significant implications.";
}

void howStressImpactsDecisionMaking(){
    cout << endl << endl << "\"How Stress Impacts Decision Making\" is an article by Walden University that highlights the negative impact that stress can have on decision-making. It explains that under high stress, individuals struggle to make new decisions or adapt to change. As stated in the article, \"When anxiety is not managed, the body shifts to a negative stress—or toxic stress—state… There is a decrease in blood flow and oxygen to the brain, which promotes lower cognitive functioning and sends the brain into a chaotic state. In this state, the brain is unable to access the information it needs to make logical decisions\" (Walden University). Because this is an academic article grounded in research and supported by studies, it is likely to be relatively unbiased. This evidence strengthens the idea that stories exploring high-pressure situations reflect real psychological phenomena, showing how external stress can impair judgment and lead to serious consequences.";
}

void theSiege(){
    cout << endl << endl << "The Siege by Ben Macintyre is a detailed and engaging nonfiction account of the six-day Iranian Embassy Hostage Crisis, culminating in a dramatic special-forces operation. The book explores not only the experiences of the hostages and the motivations of the captors, but also provides critical background on the political tensions that led to the standoff. Although negotiations initially remained peaceful, the situation grew increasingly volatile as the gunmen became frustrated by unmet demands and limited media coverage. Originally intending to release their captives within twenty-four hours, the captors instead grew desperate and, by the sixth day, executed a hostage—a choice that triggered a raid by the Special Air Service. Macintyre presents this decision as the product of escalating psychological strain. His account notes that \"by the sixth day, the siege was entering a jittery miasma of extreme sleeplessness: the press, the politicians, and the police were weary… After five nights on the floor, the hostages were aching and drained, but the gunmen were even more depleted. They were told to sleep in shifts, but remained awake most of the time, alert and nerve-strung\" (Macintyre 247). This deterioration in mental state—fueled by fear, isolation, and exhaustion—highlights how even those who begin with calculated intentions can ultimately make impulsive and tragic choices under extreme pressure. The deaths of five of the six gunmen demonstrate the profound consequences that can arise when stress and external pressure override reasoned decision-making.";
}

void heartShapedBox(){
    cout << endl << endl << "\"Heart-Shaped Box\" by Nirvana is a song that examines how love can have multiple sides. The song\'s cryptic lyrics reflect the intensity of emotional attachment - both romantic and destructive. The song shows how deep emotional bonds can drive people to make irrational, impulsive, or even self-destructive choices. Lines like \"I’ve been locked inside your heart-shaped box for weeks\" (Nirvana) create a sense of entrapment in love, dependency, fixation, and even suffering. Love, in addition to being a blessing, can also be manipulative and entraping. The descriptive language and idioms of the song demonstrate how love influences people to make decisions that they would not have made otherwise, decisions like self-harm or destruction to help out the other person.";
}


