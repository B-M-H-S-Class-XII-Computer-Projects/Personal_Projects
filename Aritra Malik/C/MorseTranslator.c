#include <stdio.h>
#include <stdlib.h>

// Declarations
void clear_scr();
void nextphase1();
void nextphase2();
int strlength(char *str);
int menu_input();
int strcompare(char s1[], char s2[]);
int Txt2Mrs();
char high2low(char c);
char* prosign_mrc();

/* Structure to hold the corresponding values */
typedef struct
{
    char character;
    char *string;
} letter_map;

/* Codes for the declared functions */
void clear_scr() // To clear the screen{Escape sequence: \033[2J } and move the cursor to the top left corner of the screen{Escape sequence: \033[1;1H }
{
    printf("\033[2J\033[1;1H");
}

int strcompare(char s1[], char s2[]) // To compare two strings
{
    int i;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i]) return -1;
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') return 0;
}

int strlength(char *str) // To mesure the length of a string
{
    int i;
    for (i=0; str[i] != '\0'; ++i);
    return i;
}

int menu_input() // Main menu system
{
    clear_scr();
    int option;
    printf("###########################################################\n");
    printf("##                                                       ##\n");
    printf("##      WELCOME TO THE MORSE CODE TRANSLATOR PROGRAM     ##\n");
    printf("##                                                       ##\n");
    printf("###########################################################\n\n");
    printf("-------------------------------------------------------------------\n\n");
    printf("***********************************************************\n");
    printf("## 1 - Translate text to Morse Code                      ##\n");
    printf("## 2 - Translate Morse Code to text                      ##\n");
    printf("## 3 - Exit the program                                  ##\n");
    printf("***********************************************************\n");
    printf("\nPlease select one of the above options [Type 0 for Prosign codes]: ");
    scanf("%d", &option);
    return option;
}

char* prosign_mrc() // Prosign Code menu system
{
    clear_scr();
    char* opt = (char*)malloc(3 * sizeof(char));;
    printf("***************************************************************\n");
    printf("##                                                           ##\n");
    printf("##                     SPECIAL CODES                         ##\n");
    printf("##                                                           ##\n");
    printf("***************************************************************\n");
    printf("##         Type this                 Get this                ##\n");
    printf("##            02      -------->      <AA> [New Line]         ##\n");
    printf("##            03      -------->      <AR> [End of message]   ##\n");
    printf("##            04      -------->      <AS> [Wait]             ##\n");
    printf("##            05      -------->      <BK> [Break]            ##\n");
    printf("##            06      -------->      <BT> [New Para.]        ##\n");
    printf("##            07      -------->      <CL> [Clear]            ##\n");
    printf("##            08      -------->      <CT> [Start copying]    ##\n");
    printf("##            09      -------->      <DO> [Change the        ##\n");
    printf("##                                              wabun code]  ##\n");
    printf("##            10      -------->      <KA> [Starting signal]  ##\n");
    printf("##            11      -------->      <KN> [Invite a          ##\n");
    printf("##                                          specific station ##\n");
    printf("##                                               to transmit]##\n");
    printf("##            12      -------->      <SK> [End of            ##\n");
    printf("##                                              transmission]##\n");
    printf("##            13      -------->      <SN> [Understood]       ##\n");
    printf("##            14      -------->      <VA> [<SA>]             ##\n");
    printf("##            15      -------->      <VE> [<SN>]             ##\n");
    printf("##            16      -------->      <ERROR>                 ##\n");
    printf("##            17      -------->      <HH> [<ERROR>]]         ##\n");
    printf("##            18      -------->      <SOS> [Distress Signal] ##\n");
    printf("##            19      -------->      EXIT                    ##\n");
    printf("***************************************************************\n\n");
    printf("Enter the code: ");
    scanf("%s", opt);
    return opt;
}

void nextphase1() // To transport the compiler to Txt2Mrs function
{
    printf("\n\nMorse Code Translator: Press Enter to continue... \n");
    getchar(); //to hold the screen
    if (getchar() == '\n') Txt2Mrs();
}

void nextphase2() // To transport the compiler to prosign_mrc function
{
    printf("\n\nMorse Code Translator: Press Enter to continue... \n");
    getchar();
    if (getchar() == '\n') prosign_mrc();
}

char high2low(char c) // To convert the characters of a string into lowercase
{
    if (c >= 'A' && c <= 'Z') return c + ('a' - 'A');
    return c;
}

int Txt2Mrs() // To convert text into morse code
{
    char *text; // Declaring the text poiter to character to store user input dynamically

    /* DataBase for tranlating text to morse */
    char A[7] = ".-";
    char B[7] = "-...";
    char C[7] = "-.-.";
    char D[7] = "-..";
    char E[7] = ".";
    char F[7] = "..-.";
    char G[7] = "--.";
    char H[7] = "....";
    char I[7] = "..";
    char J[7] = ".---";
    char K[7] = "-.-";
    char L[7] = ".-..";
    char M[7] = "--";
    char N[7] = "-.";
    char O[7] = "---";
    char P[7] = ".--.";
    char Q[7] = "--.-";
    char R[7] = ".-.";
    char S[7] = "...";
    char T[7] = "-";
    char U[7] = "..-";
    char V[7] = "...-";
    char W[7] = ".--";
    char X[7] = "-..-";
    char Y[7] = "-.--";
    char Z[7] = "--..";
    char ONE[7] = ".----";
    char TWO[7] = "..---";
    char THREE[7] = "...--";
    char FOUR[7] = "....-";
    char FIVE[7] = ".....";
    char SIX[7] = "-....";
    char SEVEN[7] = "--...";
    char EIGHT[7] = "---..";
    char NINE[7] = "----.";
    char ZERO[7] = "-----";
    
    // Signs
    char DOT[7] = ".-.-.-";
    char COMMA[7] = "--..--";
    char QUESTION[7] = "..--..";
    char AT_SIGN[7] = ".--.-.";
    char closeBRACKETS[7] = "-.--.-";
    char openBRACKETS[7] = "-.--.";
    char COLON[7] = "---...";
    char EQUALS[7] = "-...-";
    char EXCLAMATION[7] = "-.-.--";
    char HIPHEN[7] = "-....-";
    char MUL[7] = "-..-";
    char ADD[7] = ".-.-.";
    char PERCENT[19] = " -----/-..-./----- ";
    char QUOTATION[7] = ".-..-.";
    char SLASH[7] = "-..-.";
    
    // Prosigns
    char AA[10] = ".-.-";
    char AR[10] = ".-.-.";
    char AS[10] = ".-...";
    char BK[10] = "-...-.-";
    char BT[10] = "-...-";
    char CL[10] = "-.-..-..";
    char CT[10] = "-.-.-";
    char DO[10] = "-..---";
    char KA[10] = "-.-.-";
    char KN[10] = "-.--.";
    char SK[10] = "...-.-";
    char SN[10] = "...-.";
    char VA[10] = "...-.-";
    char VE[10] = "...-.";
    char SOS[10] = "...---...";
    char ERROR[10] = "........";
    char HH[10] = "........";

    letter_map mapping[] = { // Mapping the letter with their corresponding string for easier access
        {'a', A},
        {'b', B},
        {'c', C},
        {'d', D},
        {'e', E},
        {'f', F},
        {'g', G},
        {'h', H},
        {'i', I},
        {'j', J},
        {'k', K},
        {'l', L},
        {'m', M},
        {'n', N},
        {'o', O},
        {'p', P},
        {'q', Q},
        {'r', R},
        {'s', S},
        {'t', T},
        {'u', U},
        {'v', V},
        {'w', W},
        {'x', X},
        {'y', Y},
        {'z', Z},
        {'0', ZERO},
        {'1', ONE},
        {'2', TWO},
        {'3', THREE},
        {'4', FOUR},
        {'5', FIVE},
        {'6', SIX},
        {'7', SEVEN},
        {'8', EIGHT},
        {'9', NINE},
        {'.', DOT},
        {',', COMMA},
        {'?', QUESTION},
        {'@', AT_SIGN},
        {':', COLON},
        {')', closeBRACKETS},
        {'(', openBRACKETS},
        {'=', EQUALS},
        {'!', EXCLAMATION},
        {'-', HIPHEN},
        {'*', MUL},
        {'+', ADD},
        {'%', PERCENT},
        {'\"', QUOTATION},
        {'/', SLASH}
    };

    int num_mappping = sizeof(mapping) / sizeof(*mapping); // Number of elements in the Map

    int option = menu_input(); // Assigning option with the value returned by menu_input function

    /* Main Logic */
    if (option == 1)
    {
        printf("Enter the text: ");
        scanf(" %m[^\n]", &text); /* %m format specifier is used to allocate memory dynamically to text using malloc()
                                     [^\n] part of the format string tells scanf to read any characters up to but not including a newline character
                                     address-of operator (&) is used to pass the pointer to unallocated text char variable or uninitialized allocated text pointer of type char * that will store the input text.*/

        printf("You: %s\n", text);

        for (int i = 0; text[i] != '\0'; i++) // Converting the uppercase to lowercase
        {
            text[i] = high2low(text[i]);
        }

        printf("Morse Code Translator: ");
            
        for (int i = 0; i < strlength(text); i++) // Replace each letter with its Morse code
        {
            char current_char = text[i];

            if (current_char == ' ') // if the compiler finds that the current character is space it printf "/"
            {
                printf("/"); // "/" --> " " in morse code
            }
            else
            {
                for (int j = 0; j < num_mappping; j++)
                {
                    if (mapping[j].character == current_char)
                    {
                        printf(" %s", mapping[j].string);
                        break;
                    }
                }
            }
        }
        printf("\n");
        free(text); // Deallocating the text valriable
        nextphase1();
    }
    else if (option == 2)
    {
        printf("Morse Code Translator: Under construction...\n");
        nextphase1();
    }
    else if (option == 3)
    {    
        printf("\nMorse Code Translator: Have a good day!\n");
        exit(0);
    }
    else if (option == 0) // For using the Prosigns
    {
        char* proOption = prosign_mrc();

        printf("\nMorse Code Translator: ");
        if (strcompare(proOption, "02") == 0)
        {
            printf(".-.-");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "03") == 0)
        {
            printf(".-.-.");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "04") == 0)
        {
            printf(".-...");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "05") == 0)
        {
            printf("-...-.-");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "06") == 0)
        {
            printf("-...-");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "07") == 0)
        {
            printf("-.-..-..");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "08") == 0)
        {
            printf("-.-.-");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "09") == 0)
        {
            printf("-..---");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "10") == 0)
        {
            printf("-.-.-");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "11") == 0)
        {
            printf("-.--.");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "12") == 0 || strcompare(proOption, "14"))
        {
            printf("...-.-");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "13") == 0 || strcompare(proOption, "15"))        
        {
            printf("...-.");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "16") == 0 || strcompare(proOption, "17"))
        {
            printf("........");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "18") == 0)
        {
            printf("...---...");
            free(proOption);
            nextphase2();
        }
        else if (strcompare(proOption, "19") == 0)
        {
            free(proOption);
            nextphase1();
        }
        else
        {
            printf("Wrong Input...");
            free(proOption);
            nextphase2();
        }
        free(proOption); // Deallocating the proOption variable
    }
    else
    {
        printf("\nMorse Code Translator: Wrong input...\n");
        nextphase1();
    }
}

int main() // For Executing the code
{
    Txt2Mrs();
}
