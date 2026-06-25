#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. String Length\n");
    printf("2. Reverse String\n");
    printf("3. Check Palindrome\n");
    printf("4. Convert to Uppercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            while(str[len] != '\0')
            {
                len++;
            }
            printf("Length = %d", len);
            break;

        case 2:
            while(str[len] != '\0')
            {
                len++;
            }

            printf("Reversed String: ");

            for(i = len - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }
            break;

        case 3:
            len = strlen(str);

            for(i = 0; i < len / 2; i++)
            {
                if(str[i] != str[len - i - 1])
                {
                    printf("Not Palindrome");
                    return 0;
                }
            }

            printf("Palindrome");
            break;

        case 4:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }

            printf("Uppercase String: %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}