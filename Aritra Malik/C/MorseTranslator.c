#include <stdio.h>
#include <stdlib.h>

// Declarations
void clear_scr();
void nextphase();
int strlength(char *str);
int menu_input();
int Txt2Mrs();
char high2low(char c);

// Structure to hold the corresponding values
typedef struct
{
    char character;
    char *string;
} letter_map;

// Codes for the declared functions
void clear_scr()
{
    printf("\033[2J\033[1;1H");
}

int strlength(char *str) {
    int i;
    
    for (i=0; str[i] != '\0'; ++i);
    
    return i;
}

int menu_input()
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
    printf("\nPlease select one of the above options: ");

    scanf("%d", &option);

    return option;
}

void nextphase()
{
    printf("\n\nMorse Code Translator: Press Enter to continue... \n");
    getchar(); //to hold the screen
    if (getchar() == '\n')
    {
        Txt2Mrs();
    }
}

char high2low(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    return c;
}

int Txt2Mrs() 
{
    char *text;
    char A[6] = ".-";
    char B[6] = "-...";
    char C[6] = "-.-.";
    char D[6] = "-..";
    char E[6] = ".";
    char F[6] = "..-.";
    char G[6] = "--.";
    char H[6] = "....";
    char I[6] = "..";
    char J[6] = ".---";
    char K[6] = "-.-";
    char L[6] = ".-..";
    char M[6] = "--";
    char N[6] = "-.";
    char O[6] = "---";
    char P[6] = ".--.";
    char Q[6] = "--.-";
    char R[6] = ".-.";
    char S[6] = "...";
    char T[6] = "-";
    char U[6] = "..-";
    char V[6] = "...-";
    char W[6] = ".--";
    char X[6] = "-..-";
    char Y[6] = "-.--";
    char Z[6] = "--..";
    char ONE[6] = ".----";
    char TWO[6] = "..---";
    char THREE[6] = "...--";
    char FOUR[6] = "....-";
    char FIVE[6] = ".....";
    char SIX[6] = "-....";
    char SEVEN[6] = "--...";
    char EIGHT[6] = "---..";
    char NINE[6] = "----.";
    char ZERO[6] = "-----";
    char DOT[7] = ".-.-.-";
    char COMMA[7] = "--..--";
    char QUESTION[7] = "..--..";


    letter_map mapping[] = {
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
        {'?', QUESTION}
    };

    int num_mappping = sizeof(mapping) / sizeof(*mapping);

    int option = menu_input();

    if (option == 1)
    {
        printf("Enter the text: ");
        scanf(" %m[^\n]", &text);

        printf("You: %s\n", text);

        for (int i = 0; text[i] != '\0'; i++) // Converts to lowercase charcters
        {
            text[i] = high2low(text[i]);
        }

        printf("Morse Code Translator: ");
            
        for (int i = 0; i < strlength(text); i++) // Replace each letter with its Morse code
        {
            char current_char = text[i];

            if (current_char == ' ')
            {
                printf("/");
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

        free(text);

        // For holding the screen
        nextphase();    
    }
    else if (option == 2)
    {
        printf("Morse Code Translator: Under construction...\n");
        nextphase();
    }
    else if (option == 3)
    {    
        printf("\nMorse Code Translator: Have a good day!\n");
        exit(0);
    }
    else
    {
        printf("\nMorse Code Translator: Wrong input...\n");
        nextphase();
    }
}

int main()
{
    Txt2Mrs();
}
