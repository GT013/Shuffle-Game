//WORD HUNT
//DEVELOPER:
//CHRISTOPHER LUGOD
// [GMAIL] Christopherlugod05@gmail.com
// [FACEBOOK] www.facebook.com/Christoplugod

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>

void SystemMessage(int MessageNum);

//Global Declaration for Level and Scoring System
struct systemDatabase{

    int modeAnswer;
    int wordLen;
    int LengthEasy;
    int LengthMedium;
    int LengthHard;
    int LengthExtreme;
    int choosenNum;
    char shuffle[100];
    char raw[100];
    char answer[100];
    char cheatCode[100];
    char RepeatWord[100];
    char username[100];
    char revealedWord[12];

}data;

int CurrentLevel=1;
int Score=50,EasyScore=100,MediumScore=200,HardScore=300,ExtremeScore=400,
    ShuffleCount=1,curShuffle=0,revealCount=1,RevealScore=0,SkippingScore=0;

int main(){
  welcomeLoader();
}


//WELCOME SCREEN
void welcomeMenu(){

    system("cls");

    SystemMessage(4);
    printf("\n\n     ");
    char chosen[100];

    printf("\t\t\t\t\t\tChoose number to get in\n");Sleep(300);
    printf("\t\t\t\t\t\t[1]Play Game\n");Sleep(300);
    printf("\t\t\t\t\t\t[2]Instructions\n");Sleep(300);
    printf("\t\t\t\t\t\t[3]Scoreboard\n");Sleep(300);
    printf("\t\t\t\t\t\t[4]About\n");Sleep(300);
    printf("\t\t\t\t\t\t[5]Exit\n\t\t\t\t\t\t");Sleep(300);
    scanf("%s",&chosen);


    if(strcmpi(chosen,"1")==0){
        welcomeUser();
    }
    else if(strcmpi(chosen,"2")==0){
        gameInstruction();

    }
    else if(strcmpi(chosen,"3")==0){
        gameScoreboard();

    }
    else if(strcmpi(chosen,"4")==0){
        gameAbout();

    }
    else if(strcmpi(chosen,"5")==0){
        system("cls");
        exit(0);
    }
    else{
        SystemMessage(3);
        welcomeMenu();
    }
}

void welcomeLoader(){
    SystemMessage(4);
    printf("\n\t    ");
    for (int i = 1; i <= 100; i++) {
        printf("\b\b\b\b\b| %3d%%", i);
        Sleep(50);
    }
    printf("\n\n\n");
    printf("\t\t   ==============================================================================\n");

    printf("\t\t\t\t\t      T H E D E V E L O P E R \n\n");Sleep(300);
    printf("\t\t\t\t\t\t CHRISTOPHER LUGOD\n");Sleep(300);

    printf("\n\t\t   ==============================================================================\n");

    printf("\t\t\t\t\t This Welcome Screen will fade out in  ");

    for (int e=9; e>=0; --e) {
        printf("\b%d",e);
        Sleep(1000);
    }
    welcomeMenu();

}

void welcomeUser(){
       system("color 0E");
       system("cls");
       SystemMessage(11);
       Sleep(1000);

       system("cls");
       system("color 04");
       SystemMessage(12);
       Sleep(1000);
       system("cls");


       system("color 03");
       printf("\n\n\n\n\n");
       SystemMessage(4);
       Sleep(1000);
       system("cls");


       system("color 02");
       SystemMessage(13);
       Sleep(1000);
       system("cls");

       system("color 07");
       SystemMessage(4);
       printf("============================================ENTER YOUR USERNAME=========================================\n");
       printf("\t\t\t\t\t   Enter your username: ");
       scanf("%s",&data.username);

       printf("\t\t\t\t\t    Press any key to continue...");
       _getch();
       gameOption();

}

void gameOption(){
    system("cls");
    SystemMessage(4);
    char difficulty[100];

    printf("\n\n\t\t\t\t\t\tChoose Difficulty of the Game\n");Sleep(300);
    printf("\t\t\t\t\t\t[1]EASY\n");Sleep(300);
    printf("\t\t\t\t\t\t[2]MEDIUM\n");Sleep(300);
    printf("\t\t\t\t\t\t[3]HARD\n");Sleep(300);
    printf("\t\t\t\t\t\t[4]EXTREME\n");Sleep(300);
    printf("\t\t\t\t\t\t[5]BACK TO MENU\n\t\t\t\t\t\t");Sleep(300);
    scanf("%s",&difficulty);
    if(strcmpi(difficulty,"1")==0){
        data.choosenNum=1;
        wordDictionary();
    }
    else if(strcmpi(difficulty,"2")==0){
        data.choosenNum=2;
        wordDictionary();
    }
    else if(strcmpi(difficulty,"3")==0){
        data.choosenNum=3;
        wordDictionary();
    }
    else if(strcmpi(difficulty,"4")==0){
        data.choosenNum=4;
        wordDictionary();
    }
    else if(strcmpi(difficulty,"5")==0){
        welcomeMenu();
    }
    else{
        SystemMessage(3);
        gameOption();

    }
}



//WORD DATABASES AS GLOBAL VARIABLE
    char* EasyWords[]={
            "World","Seven","Evens","Pizza","Water","Happy","Board","Broad","Month","Angel","Angle","Death","Hated",
            "Green","Genre","Music","Fifty","Piano","Mouth","Woman","Sugar","Dream","Armed","Derma","Laugh","Tiger",
            "Faith","Earth","Hater","Heart","River","Money","Peace","Smile","Limes","Slime","Miles","House","Lemon",
            "Melon","Watch","South","Shout","Anime","After","Women","Santa","Satan","Admin","Jesus","Stone","Notes",
            "Tones","China","Chain","Blood","Light","Story","Power","Today","Night","Thing","Glory","Candy","Above",
            "Phone","Queen","Plant","Smart","Black","Honor","Train","Zebra","Bully","Brain","Mango","Among","Dirty",
            "Panda","Truck","Field","Bible","Radio","Dance","Voice","Sorry","Paris","Royal","Cloud","Color","Metal",
            "Venus","Value","North","Bread","Paper","Beard","Chair","Place","Crazy","Photo","Dress","Table","Cross",
            "White","Clear","March","Charm","Ocean","Great","Sweet","Beach","Space","Clock","Fever","Start","Funny",
            "Album","Sleep","Below","Organ","Berry","Rhyme","Whale","Arrow","Local","Daddy","Quiet","Touch","Clean",
            "Liver","Lucky","Child","Solid","Idols","Life","File","Love", "Near","Earn","Ring","Flow","Wolf", "Fish",
            "Five","King","Else","Tree","Over","Time","Item","Able","Sing","Sign","Rats","Arts","Star","City","Soul",
            "Soul","Duck","Foot","Film","Lion", "Meme","Live","Evil","Safe","Pain","Rain","Iron","Once","Cone","Ball",
            "Fire","Wood","Care","Race","Acre","Cake","Back","Lady","Away","Work","Self","Mole","Moon","Golf","Ally",
            "Nine"};
    char* MediumWords[]={
            "Abandon","Asylum","Classic","Combat","Comply","Concept","Context","Convert","Border","Behave",
            "Before","Angry","Behind","Beside","Bottle","Perfect","Tuesday","Country","Pumpkin","Special","America",
            "Freedom","Picture","Husband","Monster","Seventy","Nothing","Sixteen","Morning","Journey","History","Fifteen",
            "Amazing","January","Dolphin","Teacher","Forever","Kitchen","Holiday","Welcome","Jupiter","Justice","Diamond",
            "Courage","Hundred","Silence","Someone","Science","Revenge","Harmony","Problem","Awesome","Penguin","Blanket"
            ,"England","Musical","Imagine","Student","Mercury","Initial","Mystery","Natural","Kingdom","Captain",
            "Healthy","Library","Message","Magical","Failure","Forward","Nuclear","Fitness","Sausage","Popcorn","Vanilla",
            "Stomach","Fortune","Chicken","Strange","Crooked","Cheetah","Fashion","Uniform","Probity","Company","Culture",
            "General","Liberty","Garbage","Alcohol","Goddess","Lobster","Climate","Balance","Example","Purpose","Promise",
            "Endless","Crystal","Gravity","Funeral","Measure","Project","Volcano","Respect","Whisper","Quarter","Cherish",
            "Element","Thunder","Soldier","Snowman","October"};
    char* HardWords[]={

            "California","Everything","Aboveboard","Basketball","Characters","Literature","Perfection","Depression","Volleyball",
            "Depression","Homecoming","Technology","Maleficent","Watermelon","Appreciate","Relaxation","Convection","Government",
            "Abominable","Salmonella","Strawberry","Retirement","Television","Alzheimer","Silhouette","Friendship","Punishment",
            "Loneliness","University","Cinderella","Confidence","Restaurant","Blackboard","Discipline","Renovation","Helicopter",
            "Generation","Adaptation","Skateboard","Apocalypse","Understand","Leadership","Revolution","Antarctica",
            "Antarctica","Girlfriend","Motivation","Trampoline","Resolution","Accountant","Expression","Illuminati","Earthquake",
            "Protection","Excitement","Princess","Thousand","Fourteen","Language","American","Business","Favorite","Elephant",
            "Children","Birthday","Mountain","Feminine","Football","Kindness","Syllable","Treasure","Strength","Together","Memories",
            "Darkness","February","Sandwich","Calendar","Bullying","Equation","Violence","Marriage","Building","Internal","Function",
            "November","Tomorrow","Abortion","Champion","Sentence","Personal","Remember","Daughter","Hospital","Ordinary","Medicine",
            "Computer","absolute","abstract","academic","accepted","accident","accuracy","accurate","achieved","acquired","affected",
            "aircraft","alliance","although","aluminum","analysis","announce","anything","anywhere","apparent","appendix","bachelor",
            "bacteria","baseball","bathroom","becoming","benjamin","birthday","boundary","breaking","breeding","cellular","ceremony",
            "chairman","champion","chemical","circular","civilian","clearing","clinical","daylight","deadline","deciding","decision",
            "decrease","deferred","definite","delicate","delivery","describe","interior","internal","interval","intimate","invasion",
            "involved","isolated","judgment","judicial","junction","medicine","medieval","memorial","merchant","midnight","military",
            "minimize","minister","ministry","minority","personal","persuade","petition","physical","pipeline","platform","pleasant",
            "pleasure","politics","portable","positive","possible","powerful","practice","precious","pregnant","presence","preserve",
            "pressing","pressure","tropical","turnover","ultimate","umbrella","universe","unlawful","unlikely","valuable","variable",
            "vertical"
    };
    char* ExtremeWords[]={
            "Aberration","Abnegation","Abrogate","Abscond","Acumen","Admonish","Adverse","Advocate","Aggrandize","Antithesis","Arbitrary",
            "Bombastic","Complement","Congruity","Cupidity","Disaffected","Embezzlement","Flagrant","Insidious","Paradigm","Rescind",
            "Requisition","Sanctimonious","Veracity","Conundrum","Credulity","Effrontery","Impervious","Hackneyed","Invective",
            "Licentious","Multifarious","Anathema","Imperious","Iniquity","Impassive","Exculpate","Impertinent","Nascent","Nefarious",
            "Magnanimous","Juxtaposition","Concomitant","Arrogate","Buttress","Cursory","Gregarious","Brusque","Manifold","Scurryfunge",
            "Woofits","Giglet","Condiddle","Shinnicked","Purfled","Primpit","Loitersacke","Panshard","Puckfyst","Wagpastie","Bezonter",
            "Chatillionte","Bouffage","Quixotism","Dormedory","Vinipote","Accouchement","Advertisement","Bibliopole","Champaign",
            "Communicant","Contumely","Dandiprat","Degrade","Embarrass","Fandangle","Imminent","Intelligence","Larcener","Loathly",
            "Mechanical","Natheless","Peregrinate","Rapscallion","Salamander","Scaramouch","Sepulture","Statuary","Thenceforth",
            "Thereunto","Visionary","Weasand","Wherefore","Wherewith","Watchful","Wassail","Uncommon","Strumpet","Saturnism"
    };

//FUNCTION FOR DATABASE OF WORDS
void wordDictionary(){

    srand(time(NULL));
    int getter;

    if(data.choosenNum==1){
        data.LengthEasy = sizeof(EasyWords)/sizeof(int);
        getter= (rand()% data.LengthEasy);
        strcpy(data.raw,EasyWords[getter]);
        strcpy(data.shuffle,EasyWords[getter]);

    }
    else if(data.choosenNum==2){
        data.LengthMedium = sizeof(MediumWords)/sizeof(int);
        getter= (rand()%data.LengthMedium);
        strcpy(data.raw,MediumWords[getter]);
        strcpy(data.shuffle,MediumWords[getter]);

    }
    else if(data.choosenNum==3){
        data.LengthHard = sizeof(HardWords)/sizeof(int);
        getter= (rand()%data.LengthHard);
        strcpy(data.raw,HardWords[getter]);
        strcpy(data.shuffle,HardWords[getter]);

    }
    else if(data.choosenNum==4){
        data.LengthExtreme = sizeof(ExtremeWords)/sizeof(int);
        getter= (rand()%data.LengthExtreme);
        strcpy(data.raw,ExtremeWords[getter]);
        strcpy(data.shuffle,ExtremeWords[getter]);

    }
    strupr(data.shuffle);
    wordShuffle();
}

void wordShuffle(){
    srand(time(NULL));
    int i,j,random;

    shuffleAgain:
    for(i = 0; data.shuffle[i]!= '\0'; ++i){
    data.wordLen = i;
    }
    data.wordLen+=1;
    i = data.wordLen;

    // Algorithm from fisher-yates shuffle modern algorithm
    while(--i>0){
        j = (rand()%data.wordLen);
        random= data.shuffle[j];
        data.shuffle[j]= data.shuffle[i];
        data.shuffle[i]= random;
    }
    if(strcmpi(data.shuffle,data.raw)==0){
        goto shuffleAgain;
    }
    else{
        wordCompare();
    }
}

void wordCompare(){

    system("cls");
    data.modeAnswer=0;
    int MessageNum;

    printf("[A]Shuffle Word         [B]Give Up this level          [C]Reveal Letter(s)          [D]Cheat           [E]Back to Menu\n");
    printf("====== SCORE[%d] ======================================= LEVEL [%d] ==================================================\n",Score,CurrentLevel);

    if(strcmpi("activate",data.cheatCode)==0){
       printf("\nThe answer to this level is %s \n", data.raw);
    }
    else if(strcmpi("reveal",data.cheatCode)==0){
       printf("\nThe revealed letter is [%s] \n", data.revealedWord);
    }

    printf("\nSolve this shuffled word!: ");
    printf("%s\n",data.shuffle);

    printf("\nWhat is your answer?: ");
    scanf("%s",&data.answer);

    if(strcmpi(data.answer,data.raw)==0){

        MessageNum=1;
        data.modeAnswer=1;
        SystemMessage(MessageNum);
        strcpy(data.RepeatWord,"");
        strcpy(data.cheatCode,"");
        strcpy(data.revealedWord," ");
        ShuffleCount=1;
        revealCount=1;

        gameLevel();
    }
    else{
        wordFeature();
    }

}

void gameCheatCode(){
        char CheatCode[100];
        printf("\nEnter Cheat Code: ");
        scanf("%s",&CheatCode);

        if(strcmpi(CheatCode,"christopherpogi")==0){

            if(strcmpi(data.cheatCode,"activate")==0){
                printf("\nThis Cheat activated lately\n");
                printf("Press any key to continue...");
                _getch();
                wordCompare();
            }
            else{
                strcpy(data.cheatCode,"activate");
                printf("\nCheat activated, you will be able to view the level %d answer\n",CurrentLevel);
                printf("Press any key to continue...");
                _getch();
                wordCompare();
            }
        }
        else if(strcmpi(CheatCode,"christopherpangit")==0){

            if(strcmpi(data.cheatCode,"disable")==0){
                printf("\nCheat activated lately\n");
                printf("Press any key to continue...");
                _getch();
                wordCompare();
            }
            else{
                strcpy(data.cheatCode,"disable");
                printf("\nCheat disabled\n");
                printf("Press any key to continue...");
                _getch();
                wordCompare();
            }

        }
        else if(strcmpi(CheatCode,"errolcapistrano")==0){
            printf("\nCheat activated, You will be able to skip this level[%d] and gain points\n",CurrentLevel);
            printf("Press any key to continue...");
            _getch();
            data.modeAnswer=1;
            gameLevel();
        }
        else if(strcmpi(CheatCode,"haroldkalbo")==0){
            printf("\nCheat activated, The game reset to level 1 and score too HAHAHAHA\n");
            printf("Press any key to continue...");
            _getch();
            Score=0;
            CurrentLevel=1;
            wordDictionary();
        }
        else if(strcmpi(CheatCode,"siasol")==0){
            printf("\nCheat activated, you will earned 100 points\n");
            printf("Press any key to continue...");
            Score+=100;
            wordCompare();
        }
        else{
            SystemMessage(3);
            printf("Reseting...");
            Sleep(1000);
            wordCompare();
        }

}


void wordFeature(){

    char Option[100];
    //FOR SHUFFLING THE WORD
    if(strcmpi("a",data.answer)==0){
        gameScoringPerShuffle();
    }

    //FOR SKIPPING THE LEVEL
    else if(strcmpi("b",data.answer)==0){
        skipLevel();
    }

    //FOR REVEALING THE FIRST CHARACTER OF THE WORD
    else if(strcmpi("c",data.answer)==0){
        gameScoringPerReveal();

    }

    //FOR GAME CHEAT CODE
    else if(strcmpi("d",data.answer)==0){
        printf("\nAre you sure to enter in cheat mode? Press [Y] to continue or[N] to quit :");
        scanf("%s",&Option);

        if(strcmpi("Y",Option)==0){
            gameCheatCode();
        }
        else if(strcmpi("N",Option)==0){
            wordCompare();
        }
        else{
            SystemMessage(3);
            printf("Reseting...");
            Sleep(1000);
            wordCompare();
        }
    }

    //FOR DETECTING THE ANSWER IS POSSIBLE IN WORD DATABASE
    else if(possibleAnswer()==0){

        if(strcmpi(data.RepeatWord,data.answer)==0){
            printf("\nYou cannot enter again the same possible answer\n");
            printf("Press any key to continue...");
            _getch();
            wordCompare();
        }
        else{
            wordPossibleAnswer();
        }

    }

    else if(strcmpi("e",data.answer)==0){
        printf("\nAre you sure to go to Main Menu? Press [Y] to continue or [N] to quit :");
        scanf("%s",&Option);

        if(strcmpi("Y",Option)==0){
            resetingGame();
            welcomeMenu();
        }
        else if(strcmpi("N",Option)==0){
            wordCompare();
        }
        else{
            SystemMessage(3);
            printf("Reseting...");
            Sleep(1000);
            wordCompare();
        }
    }
    // FOR THE WRONG ANSWER YOU ENTERED
    else{
        repeatAgain();
    }
}

void repeatAgain(){
    SystemMessage(2);
    printf("Press any key to repeat...");
    _getch();
    wordCompare();
}

//DETECT THE ANSWER, IF THE CHARACTERS OF THE ANSWER IS THE SAME WITH SHUFFLED WORD
int possibleAnswer(){

    int count1[255] = {0};
    int count2[255] = {0};
    char answer[100];
    char raw[100];

    strcpy(answer,data.answer);
    strcpy(raw,data.shuffle);
    strupr(answer);
    strupr(raw);

    int i;
    for(i = 0; answer[i]; i++){
        count1[answer[i]]++;
    }

    for(i = 0; raw[i]; i++){
        count2[raw[i]]++;
    }

    // now compare the results
    if( memcmp(count1,count2,sizeof(count1)) == 0)
    {
       return 0;
    }
}

//GAME LEVELING
void gameLevel(){

    int FinalLevel=10;

    if(CurrentLevel<FinalLevel){
        //Scoring for level succeeded [INCREASE]
        if(data.modeAnswer==1){
            CurrentLevel+=1;
            gameScoringPerDifficulty();
        }
        else if(data.modeAnswer==3){
            gameScoringPerSkipping();
        }



    }
    else{
        finishGame();
    }



}

void gameRevealLetter(){

    char RevealOption[100];
    int len= strlen(data.raw);
    data.revealedWord[len]='\0';

    printf("\nRevealing the letter(s) of the word has deduction to your score\n");
    printf("Are you sure to reveal the letter? Press [Y] to continue or[N] to quit \n");
    scanf("%s",&RevealOption);

    if(revealCount<=len){

        if(strcmpi("Y",RevealOption)==0){

            if(revealCount<=len){
                strncpy(data.revealedWord,data.raw,revealCount);
                strcpy(data.cheatCode,"reveal");
            }

        }
        else if(strcmpi("N",RevealOption)==0){
            wordCompare();
        }
        else{
            SystemMessage(3);
            printf("Reseting...");
            Sleep(1000);
            wordCompare();
        }
    }
    else{
        printf("The revealed letter is the answer! type it now!");
        printf("Press any key to back to the game...");
        _getch();
        wordCompare();
    }

}

//GAME SCORING SYSTEM
void gameScoringPerReveal(){

        if(data.choosenNum==1){
            RevealScore= 40*revealCount;
        }
        else if(data.choosenNum==2){
            RevealScore= 80*revealCount;
        }
        else if(data.choosenNum==3){
            RevealScore= 120*revealCount;
        }
        else if(data.choosenNum==4){
            RevealScore= 140*revealCount;

        }
        if(Score<RevealScore){
            printf("\nInsufficient score to reveal the letter(s) of the answer, Please gain score to able to use it \n");
            printf("Press any key to back to the game...");
            _getch();
            wordCompare();
        }
        else{
            gameRevealLetter();
            Score-=RevealScore;
            revealCount+=1;
            printf("Since you revealed the letter your score decrease by %d\n",RevealScore);
            printf("Press any key to continue...");
            _getch();
            wordCompare();
        }
}

void wordPossibleAnswer(){
    char Possible[100];
    int looper=0;
        if(data.choosenNum==1){
            while(EasyWords[looper]) {
                if(strcmpi(EasyWords[looper],data.answer)==0) {
                    strcpy(Possible,"Yes");
                    break;
                }
                else{
                    strcpy(Possible,"No");
                }
                looper++;

            }

            if(strcmpi(Possible,"Yes")==0){
                strcpy(data.RepeatWord,data.answer);
                printf("\nWord is existing additional 50 points");
                printf("\nPress any key to continue...");
                _getch();
                Score+=50;
                wordCompare();
            }
            else if(strcmpi(Possible,"No")==0){
                repeatAgain();
            }

        }
        else if(data.choosenNum==2){

            while(MediumWords[looper]) {
                if(strcmpi(MediumWords[looper],data.answer)==0) {
                    strcpy(Possible,"Yes");
                    break;
                }
                else{
                    strcpy(Possible,"No");
                }
            looper++;
            }


            if(strcmpi(Possible,"Yes")==0){
                strcpy(data.RepeatWord,data.answer);
                printf("\nWord is existing additional 75 points");
                printf("Press any key to continue...");
                _getch();
                Score+=100;
                wordCompare();
            }
            else if(strcmpi(Possible,"No")==0){
                repeatAgain();
            }
        }
        else if(data.choosenNum==3){
            while(HardWords[looper]) {
                if(strcmpi(HardWords[looper],data.answer) == 0) {
                    strcpy(Possible,"Yes");
                    break;
                }
                else{
                    strcpy(Possible,"No");
                }
            looper++;
            }

            if(strcmpi(Possible,"Yes")==0){
                strcpy(data.RepeatWord,data.answer);
                printf("\nWord is existing additional 100 points");
                printf("Press any key to continue...");
                _getch();
                Score+=150;
                wordCompare();
            }
            else if(strcmpi(Possible,"No")==0){
                repeatAgain();
            }
        }
        else if(data.choosenNum==4){
            while(ExtremeWords[looper]) {
                if(strcmpi(ExtremeWords[looper],data.answer) == 0) {
                    strcpy(Possible,"Yes");
                    break;
                }
                else{
                    strcpy(Possible,"No");
                }
            looper++;
            }

            if(strcmpi(Possible,"Yes")==0){
                strcpy(data.RepeatWord,data.answer);
                printf("\nWord is existing additional 200 points");
                printf("Press any key to continue...");
                _getch();
                Score+=200;
                wordCompare();
                wordCompare();
            }
            else if(strcmpi(Possible,"No")==0){
                repeatAgain();
            }
        }
}

void gameScoringPerShuffle(){

        if(data.choosenNum==1){
            curShuffle= 2*ShuffleCount;
        }
        else if(data.choosenNum==2){
            curShuffle= 4*ShuffleCount;
        }
        else if(data.choosenNum==3){
            curShuffle= 8*ShuffleCount;
        }
        else if(data.choosenNum==4){
            curShuffle= 12*ShuffleCount;
        }

        if(Score<curShuffle){
            printf("\nInsufficient score to shuffle this word please gain score to able use it \n");
            printf("Press any key to back to the game...");
            _getch();
            wordCompare();
        }
        else{
            Score-=curShuffle;
            ShuffleCount+=1;
            printf("Since you shuffle the word your score decrease by %d\n",curShuffle);
            printf("Press any key to continue...");
            _getch();

            wordShuffle();

        }
}

void gameScoringPerDifficulty(){
    int currentScore;
    if(data.choosenNum==1){
        Score+=EasyScore;
        currentScore=EasyScore;
    }
    else if(data.choosenNum==2){
        Score+=MediumScore;
        currentScore=MediumScore;
    }
    else if(data.choosenNum==3){
        Score+=HardScore;
        currentScore=HardScore;
    }
    else if(data.choosenNum==4){
        Score+=ExtremeScore;
        currentScore=ExtremeScore;
    }

    printf("Your additional score for this level is %d\n",currentScore);
    printf("Press any key to continue to level [%d]...",CurrentLevel);
    _getch();
    wordDictionary();

}

void gameScoringPerSkipping(){

    if(data.choosenNum==1){
        SkippingScore=50;
    }
    else if(data.choosenNum==2){
        SkippingScore=100;
    }
    else if(data.choosenNum==3){
        SkippingScore=150;
    }
    else if(data.choosenNum==4){
        SkippingScore=200;

    }

    if(Score<SkippingScore){
            printf("\nInsufficient score to skip this level please gain score to able to use it \n");
            printf("Press any key to back to the game...");
            _getch();
            wordCompare();
    }
    else{
            Score-=SkippingScore;
            CurrentLevel+=1;
            printf("Since you skip this level your score decrease by %d\n",SkippingScore);
            printf("Press any key to continue to level %d...",CurrentLevel);
            _getch();
            wordDictionary();
    }
}

void finishGame(){
    system("cls");
    printf("\n");
    system("color 30");
    SystemMessage(5);
    Sleep(1000);

    system("color 24");
    SystemMessage(6);
    Sleep(1000);

    system("color 47");
    SystemMessage(7);
    Sleep(1000);
    system("cls");


    system("color 57");
    SystemMessage(8);
    Sleep(1000);


    system("color 60");
    SystemMessage(9);
    Sleep(1000);

    printf("\n");
    system("color 17");
    SystemMessage(10);
    Sleep(1000);
    system("cls");

    system("color 07");

    printf("========================== C O N G R A T S  Y O U  J U S T  F I N I S H  T H E  G A M E ==============================");
    printf("\n\n\n\n                           Congratulation you just finish the game %s scoring %d",data.username,Score);
    printf("\n                                          Press any key to exit the game...");
    _getch();
    _getch();
    saveScore();
    resetingGame();
    welcomeMenu();



}

void resetingGame(){
    strcpy(data.username,"");
    strcpy(data.shuffle,"");
    strcpy(data.raw,"");
    strcpy(data.cheatCode,"");
    strcpy(data.revealedWord," ");
    data.choosenNum=0;
    Score=50;
    ShuffleCount=1;
    curShuffle=0;
    revealCount=1;
    RevealScore=0;
    SkippingScore=0;
    CurrentLevel=1;
    curShuffle=0;
}

void skipLevel(){

        char SkipOption[100];
        printf("\nSkipping this level is getting deduction to your current score \n");
        printf("Are you sure to skip this level? Press [Y] to continue or [N] to quit \n");
        scanf("%s",&SkipOption);


        if(strcmpi("Y",SkipOption)==0){
            data.modeAnswer=3;
            gameLevel();
        }
        else if(strcmpi("N",SkipOption)==0){
            wordCompare();
        }
        else{
            SystemMessage(3);
            printf("Reseting...");
            Sleep(1000);
            wordCompare();
        }
}

void saveScore(){

    FILE *file = fopen("C:\\Users\\Christopher\\Desktop\\System Presentation by WORD HUNT DEVELOPERS\\Word Search Program\\Scoreboard.txt","a");

    char Difficulty[100];
    if(data.choosenNum==1){
        strcpy(Difficulty,"EASY");
    }
    else if(data.choosenNum==2){
        strcpy(Difficulty,"MEDIUM");
    }
    else if(data.choosenNum==3){
        strcpy(Difficulty,"HARD");
    }
    else if(data.choosenNum==4){
        strcpy(Difficulty,"EXTREME");
    }

    if (file == 0)
    {
        printf("The file cannot be open"); Sleep(2000);
        welcomeMenu();

    }
    else{
        fprintf(file,"\n%s          %s          %i",data.username,Difficulty,Score);
    }


    fclose(file);

}

void gameScoreboard(){
    char Getter[10000];
    FILE *file = fopen("C:\\Users\\Christopher\\Desktop\\System Presentation by WORD HUNT DEVELOPERS\\Word Search Program\\Scoreboard.txt","r");
    int entryCount;


    if (file == 0)
    {
        printf("The file cannot be open");

    }
    system("cls");
    printf("  ___                 _                      _ \n");
    printf(" / __| __ ___ _ _ ___| |__  ___  __ _ _ _ __| |\n");
    printf(" \\__ \\/ _/ _ \\ '_/ -_) '_ \\/ _ \\/ _` | '_/ _` |\n");
    printf(" |___/\\__\\___/_| \\___|_.__/\\___/\\__,_|_| \\__,_|\n\n");Sleep(300);
    printf("=======================================================================================================================\n\n\n");Sleep(300);
    printf("\t\t\t\t\tThe list of player,mode and their score\n");
    printf("\t\t\t--------------------------------------------------------------------\n");

    while(!feof(file)){
            fgets(Getter,10000,file);
            printf("\t\t\t\t\t%s",Getter);
    }
    printf("\n\t\t\t-------------------------------------------------------------------\n");
    printf("\t\t\t\t\tPress any key to exit...");
    _getch();
    welcomeMenu();
}

void gameInstruction(){
    system("cls");
    SystemMessage(14);
    printf("\n\n [CHOOSING DIFFULTY OF THE GAME]\n\n");Sleep(200);
    printf(" This game has 10 Levels and upon entering the game you can choose the following difficulty:\n\n"); Sleep(200);
    printf(" 1. [EASY] = Consist 4-5 Shuffled Letter words with 100 points every right answer.\n"); Sleep(200);
    printf(" 2. [MEDIUM] = Consist 6-7 Shuffled Letter words with 200 points every right answer.\n"); Sleep(200);
    printf(" 3. [HARD] = Consist 8-10 Shuffled Letter words with 300 points every right answer.\n"); Sleep(200);
    printf(" 4. [EXTREME] = Deep Word Shuffled Letter with 400 points every right answer.\n"); Sleep(200);

    printf("\n Press any key to continue to PLAYING THE GAME .... ");
    _getch();
    system("cls");
    SystemMessage(14);

    printf("\n\n [PLAYING THE GAMME]\n\n");Sleep(200);
    printf(" This game is simple just answer the shuffled letter of the word per level. Example shown below. \n\n"); Sleep(200);
    printf(" -------------------------------------\n");
    printf(" Solve this shuffled word!: DWOR \n");
    printf(" What is your answer?: WORD \n");
    printf(" -------------------------------------\n");


    printf("\n Press any key to continue to FEATURES OF THE GAME .... ");
    _getch();
    system("cls");
    SystemMessage(14);

    printf("\n\n [FEATURES OF THE GAME]\n\n");Sleep(200);
    printf(" NOTE: This features is visible to the game on the upper part of console while playing this game that shown below.\n\n"); Sleep(200);
    printf(" ----------------------------------------------------------------------------------------------------------------------\n");
    printf(" | [A]Shuffle Word        [B]Give Up this level         [C]Reveal Letter(s)         [D]Cheat          [E]Back to Menu |\n");Sleep(200);
    printf(" | ====== SCORE[120] ===================================== LEVEL [3] =================================================|\n");Sleep(200);
    printf(" ----------------------------------------------------------------------------------------------------------------------\n\n");
    printf(" Just type the letter you choose on the \"What is your answer?: _____\" on the game, The Instruction and Mechanics\n"); Sleep(200);
    printf(" is shown below.\n\n"); Sleep(200);
    printf(" 1. [A]SHUFFLE WORD = This function help the player to reshuffle again the given shuffled word but using\n"); Sleep(200);
    printf("                      this feature has deduction to your current score and the deduction depends on how.\n"); Sleep(200);
    printf("                      many time you used it.\n\n"); Sleep(200);
    printf("                      EASY = Score - 2 x How many time you use this feature.\n"); Sleep(200);
    printf("                      MEDIUM = Score - 4 x How many time you use this feature.\n"); Sleep(200);
    printf("                      HARD = Score - 8 x How many time you use this feature.\n"); Sleep(200);
    printf("                      EXTREME = Score - 12 x How many time you use this feature.\n\n\n"); Sleep(1000);


    printf(" 2. [B]GIVE UP THIS LEVEL = This function help the player to skip the current level \n"); Sleep(200);
    printf("                      this feature has deduction to your current score.\n\n"); Sleep(200);
    printf("                      EASY = Score - 50\n"); Sleep(200);
    printf("                      MEDIUM = Score - 100\n"); Sleep(200);
    printf("                      HARD = Score - 150\n"); Sleep(200);
    printf("                      EXTREME = Score - 200.\n\n\n"); Sleep(1000);


    printf(" 3. [C]REVEAL LETTER(S) = This function help the player to reveal the corresponding letter. \n"); Sleep(200);
    printf("                      this feature has deduction to your current score.\n\n"); Sleep(200);
    printf("                      EASY = Score - 40.\n"); Sleep(200);
    printf("                      MEDIUM = Score - 80.\n"); Sleep(200);
    printf("                      HARD = Score - 120.\n"); Sleep(200);
    printf("                      EXTREME = Score - 140.\n\n\n"); Sleep(1000);


    printf(" 4. [D]CHEAT MODE =   This function help the player to reveal right answer, to skip current level with \n"); Sleep(200);
    printf("                      additional 100 points, Additional 100 points for no reason, and game reset means back to zero.\n\n"); Sleep(200);
    printf("                      [christopherpogi] = to reveal the right answer for the current level.\n"); Sleep(200);
    printf("                      [christopherpangit] = to hide the revealed answer for the current level.\n"); Sleep(200);
    printf("                      [errolcapistrano] = to skip the level while gaining 100 points. - 120\n"); Sleep(200);
    printf("                      [siasol] = to add 100 points to the current points.\n"); Sleep(200);
    printf("                      [haroldkalbo] = to reset the level and score to zero (NEGATIVE OUTCOME)\n\n\n"); Sleep(1000);


    printf(" 5. ANAGARAM FUNCTION= This function is not visible, Anagram Function is a word or phrase formed by rearranging the\n"); Sleep(200);
    printf("                       letters of a different word or phrase, typically using all the original letters exactly once.\n"); Sleep(200);
    printf("                       Every anagram has additional to the points.\n\n"); Sleep(200);
    printf("                       EASY = Score + 50.\n"); Sleep(200);
    printf("                       MEDIUM = Score + 100.\n"); Sleep(200);
    printf("                       HARD = Score + 150.\n"); Sleep(200);
    printf("                       EXTREME = Score + 200.\n\n"); Sleep(1000);

    printf("\n Press any key to exit ... ");
    _getch();
    welcomeMenu();
}

void gameAbout(){
    system("cls");
    printf("     _   _              _    \n");
    printf("    /_\\ | |__  ___ _  _| |_ \n");
    printf("   / _ \\| '_ \\/ _ \\ || |  _| \n");
    printf("  /_/ \\_\\_.__/\\___/\\_,_|\\__| \n");Sleep(200);
    printf("=======================================================================================================================");Sleep(200);

    printf("\n\n\ [GAME]\n\n");Sleep(200);
    printf(" This Game involves enhancing skills such as developing research skills, guessing skills, improving spelling\n"); Sleep(200);
    printf(" and language skills, improving reasoning ability, developing the power of concentration and increasing \n");Sleep(200);
    printf(" creative abilities. According to puzzle experts at, a person solving a puzzle reasons in a logical \n");Sleep(200);
    printf(" way, arranges the problem in the mind,recognizes patterns and deduces solutions to reach a desired \n");Sleep(200);
    printf(" solution. Therefore,word games, crossword games, letter games, jigsaw, etc. are all puzzle games \n");Sleep(200);
    printf(" that not only serve the purpose of deriving fun, but also educate both adults and children.\n");Sleep(200);
    printf(" this game has a feature anagram, shuffle the word, reveal the letter and skipping level.\n");Sleep(200);

    printf("\n\n\ [DEVELOPERS]\n\n");Sleep(200);
    printf(" Christian Lugod\n");Sleep(200);
    printf(" [CELLPHONE] 09286665903\n");Sleep(200);
    printf(" [FACEBOOK] www.facebook.com/Christoplugod\n");Sleep(200);
    printf(" [INSTAGRAM] instagram.com/topzthedev\n");Sleep(200);
    printf(" [TWITTER] twitter.com/Christoplugod\n");Sleep(200);
    printf(" [EMAIL] christianlugod05@gmail.com");Sleep(200);

    printf("\n\n Press any key to exit....\n");
    _getch();
    welcomeMenu();
}

void SystemMessage(int MessageNum){

    if(MessageNum==1){
        printf("\n");
        printf("\t=============================================SYSTEM MESSAGE==============================================\n");
        printf("\t:'######::::::'#######:::::'##::: ##:::::'######::::::'########::::::::'###:::::::'########:::::'######::\n");
        printf("\t'##... ##::::'##.... ##:::: ###:: ##::::'##... ##::::: ##.... ##::::::'## ##::::::... ##..:::::'##... ##:\n");
        printf("\t ##:::..::::: ##:::: ##:::: ####: ##:::: ##:::..:::::: ##:::: ##:::::'##:. ##:::::::: ##::::::: ##:::..::\n");
        printf("\t ##:::::::::: ##:::: ##:::: ## ## ##:::: ##::'####:::: ########:::::'##:::. ##::::::: ##:::::::. ######::\n");
        printf("\t ##:::::::::: ##:::: ##:::: ##. ####:::: ##::: ##::::: ##.. ##:::::: #########::::::: ##::::::::..... ##:\n");
        printf("\t ##::: ##:::: ##:::: ##:::: ##:. ###:::: ##::: ##::::: ##::. ##::::: ##.... ##::::::: ##:::::::'##::: ##:\n");
        printf("\t. ######:::::. #######::::: ##::. ##::::. ######:::::: ##:::. ##:::: ##:::: ##::::::: ##:::::::. ######::\n");
        printf("\t:......:::::::.......::::::..::::..::::::......:::::::..:::::..:::::..:::::..::::::::..:::::::::......:::\n");
        printf("\t=========================================YOUR ANSWER IS CORRECT!=========================================\n");
        printf("\n");

    }
    else if(MessageNum==2){
        printf("\n");
        printf("\t\t============================SYSTEM MESSAGE===============================\n");
        printf("\t\t'########:::::::'###:::::::'####::::'##::::::::::'########::::'########::\n");
        printf("\t\t ##.....:::::::'## ##::::::. ##::::: ##:::::::::: ##.....::::: ##.... ##:\n");
        printf("\t\t ##:::::::::::'##:. ##:::::: ##::::: ##:::::::::: ##:::::::::: ##:::: ##:\n");
        printf("\t\t ######::::::'##:::. ##::::: ##::::: ##:::::::::: ######:::::: ##:::: ##:\n");
        printf("\t\t ##...::::::: #########::::: ##::::: ##:::::::::: ##...::::::: ##:::: ##:\n");
        printf("\t\t ##:::::::::: ##.... ##::::: ##::::: ##:::::::::: ##:::::::::: ##:::: ##:\n");
        printf("\t\t ##:::::::::: ##:::: ##::::'####:::: ########:::: ########:::: ########::\n");
        printf("\t\t..:::::::::::..:::::..:::::....:::::........:::::........:::::........:::\n");
        printf("\t\t=========================YOUR ANSWER IS INCORRECT!=======================\n");
        printf("\n");

    }
    else if(MessageNum==3){
        system("cls");
        printf("\t\tYour Inputted last time is not valid in the list given above please choose again\n");
        printf("\t\t================================================================================\n");Sleep(2000);
        system("cls");
    }
    else if(MessageNum==4){
        printf("\n\n");
        printf("\t  :::       :::   ::::::::   :::::::::   :::::::::    :::    :::  :::    :::  ::::    :::  :::::::::::\n");Sleep(80);
        printf("\t  :+:       :+:  :+:    :+:  :+:    :+:  :+:    :+:   :+:    :+:  :+:    :+:  :+:+:   :+:      :+:    \n");Sleep(80);
        printf("\t  +:+       +:+  +:+    +:+  +:+    +:+  +:+    +:+   +:+    +:+  +:+    +:+  :+:+:+  +:+      +:+    \n");Sleep(80);
        printf("\t  +#+  +:+  +#+  +#+    +:+  +#++:++#:   +#+    +:+   +#++:++#++  +#+    +:+  +#+ +:+ +#+      +#+    \n");Sleep(80);
        printf("\t  +#+ +#+#+ +#+  +#+    +#+  +#+    +#+  +#+    +#+   +#+    +#+  +#+    +#+  +#+  +#+#+#      +#+    \n");Sleep(80);
        printf("\t   #+#+# #+#+#   #+#    #+#  #+#    #+#  #+#    #+#   #+#    #+#  #+#    #+#  #+#   #+#+#      #+#    \n");Sleep(80);
        printf("\t    ###   ###     ########   ###    ###  #########    ###    ###   ########   ###    ####      ###    \n");Sleep(80);
        printf("\t                                   SHUFFLED LETTER OF WORD BASE GAME                                  \n");
        printf("\n      ");
    }
    else if(MessageNum==5){
        printf("\n");
        printf("\t  /$$$$$$   /$$$$$$  /$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$$$$$$$ /$$$$$$ \n");
        printf("\t /$$__  $$ /$$__  $$| $$$ | $$ /$$__  $$| $$__  $$ /$$__  $$|__  $$__//$$__  $$\n");
        printf("\t| $$  \\__/| $$  \\ $$| $$$$| $$| $$  \\__/| $$  \\ $$| $$  \\ $$   | $$  | $$  \\__/\n");
        printf("\t| $$      | $$  | $$| $$ $$ $$| $$ /$$$$| $$$$$$$/| $$$$$$$$   | $$  |  $$$$$$ \n");
        printf("\t| $$      | $$  | $$| $$  $$$$| $$|_  $$| $$__  $$| $$__  $$   | $$   \\____  $$\n");
        printf("\t| $$    $$| $$  | $$| $$\\  $$$| $$  \\ $$| $$  \\ $$| $$  | $$   | $$   /$$  \\ $$\n");
        printf("\t|  $$$$$$/|  $$$$$$/| $$ \\  $$|  $$$$$$/| $$  | $$| $$  | $$   | $$  |  $$$$$$/\n");
        printf("\t \\______/  \\______/ |__/  \\__/ \\______/ |__/  |__/|__/  |__/   |__/   \\______/ \n");
    }
    else if(MessageNum==6){
        printf("\n");
        printf("\t /$$     /$$ /$$$$$$  /$$   /$$\n");
        printf("\t|  $$   /$$//$$__  $$| $$  | $$ \n");
        printf("\t \\  $$ /$$/| $$  \\ $$| $$  | $$ \n");
        printf("\t  \\  $$$$/ | $$  | $$| $$  | $$\n");
        printf("\t  \\  $$$$/ | $$  | $$| $$  | $$\n");
        printf("\t    | $$   | $$  | $$| $$  | $$ \n");
        printf("\t    | $$   |  $$$$$$/|  $$$$$$/  \n");
        printf("\t    |__/    \\______/  \\______/ \n");
    }
    else if(MessageNum==7){
        printf("\n");
        printf("\t    /$$$$$ /$$   /$$  /$$$$$$  /$$$$$$$$  \n");
        printf("\t   |__  $$| $$  | $$ /$$__  $$|__  $$__/ \n");
        printf("\t      | $$| $$  | $$| $$  \\__/   | $$   \n");
        printf("\t      | $$| $$  | $$|  $$$$$$    | $$    \n");
        printf("\t /$$  | $$| $$  | $$ \\____  $$   | $$    \n");
        printf("\t| $$  | $$| $$  | $$ /$$  \\ $$   | $$    \n");
        printf("\t|  $$$$$$/|  $$$$$$/|  $$$$$$/   | $$     \n");
        printf("\t \\______/  \\______/  \\______/    |__/  \n");
    }
    else if(MessageNum==8){
        printf("\n");
        printf("\t /$$$$$$$$ /$$$$$$ /$$   /$$ /$$$$$$  /$$$$$$  /$$   /$$  \n");
        printf("\t| $$_____/|_  $$_/| $$$ | $$|_  $$_/ /$$__  $$| $$  | $$  \n");
        printf("\t| $$        | $$  | $$$$| $$  | $$  | $$  \\__/| $$  | $$  \n");
        printf("\t| $$$$$     | $$  | $$ $$ $$  | $$  |  $$$$$$ | $$$$$$$$   \n");
        printf("\t| $$$$$     | $$  | $$ $$ $$  | $$  |  $$$$$$ | $$$$$$$$   \n");
        printf("\t| $$        | $$  | $$\\  $$$  | $$   /$$  \\ $$| $$  | $$   \n");
        printf("\t| $$       /$$$$$$| $$ \\  $$ /$$$$$$|  $$$$$$/| $$  | $$     \n");
        printf("\t|__/      |______/|__/  \\__/|______/ \\______/ |__/  |__/    \n");

    }
    else if(MessageNum==9){
        printf("\n");
        printf("\t /$$$$$$$$ /$$   /$$ /$$$$$$$$    \n");
        printf("\t|__  $$__/| $$  | $$| $$_____/    \n");
        printf("\t   | $$   | $$  | $$| $$           \n");
        printf("\t   | $$   | $$$$$$$$| $$$$$          \n");
        printf("\t   | $$   | $$__  $$| $$__/         \n");
        printf("\t   | $$   | $$  | $$| $$         \n");
        printf("\t   | $$   | $$  | $$| $$$$$$$$    \n");
        printf("\t   |__/   |__/  |__/|________/    \n");
;
    }
    else if(MessageNum==10){
        printf("\t  /$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$$  \n");
        printf("\t /$$__  $$ /$$__  $$| $$$    /$$$| $$_____/    \n");
        printf("\t| $$  \\__/| $$  \\ $$| $$$$  /$$$$| $$        \n");
        printf("\t| $$ /$$$$| $$$$$$$$| $$ $$/$$ $$| $$$$$       \n");
        printf("\t| $$|_  $$| $$__  $$| $$  $$$| $$| $$__/       \n");
        printf("\t| $$  \\ $$| $$  | $$| $$\\  $ | $$| $$       \n");
        printf("\t|  $$$$$$/| $$  | $$| $$ \\/  | $$| $$$$$$$$  \n");
        printf("\t \\______/ |__/  |__/|__/     |__/|________/ \n");
    }


    else if(MessageNum==11){
       printf("\n\n\n\n\n");
       printf("\t  _______ .______       _______  _______ .___________. __  .__   __.   _______      _______. __  \n");
       printf("\t /  _____||   _  \\     |   ____||   ____||           ||  | |  \\ |  |  /  _____|    /       ||  | \n");
       printf("\t|  |  __  |  |_)  |    |  |__   |  |__   `---|  |----`|  | |   \\|  | |  |  __     |   (----`|  | \n");
       printf("\t|  | |_ | |      /     |   __|  |   __|      |  |     |  | |  . `  | |  | |_ |     \\   \\    |  |\n");
       printf("\t|  |__| | |  |\\  \\----.|  |____ |  |____     |  |     |  | |  |\\   | |  |__| | .----)   |   |__|\n");
       printf("\t \\______| | _| `._____||_______||_______|    |__|     |__| |__| \\__|  \\______| |_______/    (__) \n");
    }
    else if(MessageNum==12){
       printf("\n\n\n\n\n\n");
       printf("\t _______ .______        ______   .___  ___. \n");
       printf("\t|   ____||   _  \\      /  __  \\  |   \\/   | \n");
       printf("\t|  |__   |  |_)  |    |  |  |  | |  \\  /  | \n");
       printf("\t|   __|  |      /     |  |  |  | |  |\\/|  | \n");
       printf("\t|  |     |  |\\  \\----.|  `--'  | |  |  |  |\n");
       printf("\t|__|     | _| `._____| \\______/  |__|  |__| \n");
    }
    else if(MessageNum==13){
    printf("\n\n\n\n\n");
       printf("\t _______   ___________    ____  _______  __        ______   .______    _______ .______          _______.\n");
       printf("\t|       \\ |   ____\\   \\  /   / |   ____||  |      /  __  \\  |   _  \\  |   ____||   _  \\        /       |\n");
       printf("\t|  .--.  ||  |__   \\   \\/   /  |  |__   |  |     |  |  |  | |  |_)  | |  |__   |  |_)  |      |   (----`\n");
       printf("\t|  |  |  ||   __|   \\      /   |   __|  |  |     |  |  |  | |   ___/  |   __|  |      /        \\   \\   \n");
       printf("\t|  '--'  ||  |____   \\    /    |  |____ |  `----.|  `--'  | |  |      |  |____ |  |\\  \\----.----)   |   \n");
       printf("\t|_______/ |_______|   \\__/     |_______||_______| \\______/  | _|      |_______|| _| `._____|_______/    \n");
    }
    else if(MessageNum==14){
        printf("   ___         _               _   _          \n");
        printf("  |_ _|_ _  __| |_ _ _ _  _ __| |_(_)___ _ _  \n");
        printf("   | || ' \\(_-<  _| '_| || / _|  _| / _ \\ ' \\ \n");
        printf("  |___|_||_/__/\\__|_|  \\_,_\\__|\\__|_\\___/_||_|\n\n");Sleep(300);
        printf("=======================================================================================================================");Sleep(300);

    }
}
