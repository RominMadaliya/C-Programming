#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    while(1)
    {
        char v, computer;

        do
        {
            printf("enter your sigh(s,w,g) : ");
            scanf("%c", &v);
            getchar();
            
        } while (v != 's' && v != 'w' && v != 'g'&&v!='e');
        if(v=='e')
        {
            break;
        }

        srand(time(0));
        int number = rand() % 100 + 1;

        if (number < 33)
        {
            computer = 's';
        }
        else if (number > 33 && number < 77)
        {
            computer = 'w';
        }
        else
        {
            computer = 'g';
        }

        if (computer == 's' && v == 'w')
        {
            printf("you lost this game\n");
        }
        else if (computer == 'w' && v == 's')
        {
            printf("you won this game\n");
        }
        else if (computer == 's' && v == 'g')
        {
            printf("you won this game\n");
        }
        else if (computer == 'g' && v == 's')
        {
            printf("you lost this game\n");
        }
        else if (computer == 'w' && v == 'g')
        {
            printf("you lost this game\n");
        }
        else if (computer == 'g' && v == 'w')
        {
            printf("you won this game\n");
        }

        else if (computer == v)
        {
            printf("this match is tied\n");
        }
        printf("    \n");
    }
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     char v, computer;

//     while (1) // loop until the user enters 'e'
//     {
//         do
//         {
//             printf("enter your sigh(s,w,g) : ");
//             scanf("%c", &v);
//             getchar(); // clear the input buffer
//         } while (v != 's' && v != 'w' && v != 'g' && v != 'e');

//         if (v == 'e') // exit the loop if the user enters 'e'
//         {
//             break;
//         }

//         srand(time(0));
//         int number = rand() % 100 + 1;

//         if (number < 33)
//         {
//             computer = 's';
//         }
//         else if (number > 33 && number < 77)
//         {
//             computer = 'w';
//         }
//         else
//         {
//             computer = 'g';
//         }

//         if (computer == 's' && v == 'w')
//         {
//             printf("you lost this game\n");
//         }
//         else if (computer == 'w' && v == 's')
//         {
//             printf("you won this game\n");
//         }
//         else if (computer == 's' && v == 'g')
//         {
//             printf("you won this game\n");
//         }
//         else if (computer == 'g' && v == 's')
//         {
//             printf("you lost this game\n");
//         }
//         else if (computer == 'w' && v == 'g')
//         {
//             printf("you lost this game\n");
//         }
//         else if (computer == 'g' && v == 'w')
//         {
//             printf("you won this game\n");
//         }

//         else if (computer == v)
//         {
//             printf("this match is tied\n");
//         }
//         printf("\n");
//       // clear the screen
//     }
// }

