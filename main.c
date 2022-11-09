#include <stdio.h>
#include <string.h>
int main()
{
    int i, length;
    int flag = 0;
    int choice;
    int l, j;
    char str1[80];
    char str2[80];
    int value;
    do
    {
        printf("Enetr your choice\n");
        printf("1.Substring\n");
        printf("2.Palindrome\n");
        printf("3.Compare\n");
        printf("4.Copy\n");
        printf("5.Reverse\n");
        printf("6.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter first string: ");
            scanf("%s", &str1);
            printf("Enter second string: ");
            scanf("%s", &str2);
            for (l = 0; str2[l] != '\0'; l++)
            {
                for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
                {
                    if (str1[i] == str2[j])
                    {
                        j++;
                    }
                    else
                    {
                        j = 0;
                    }
                }
            }
            if (j == l)
            {
                printf("Substring is present in the given string  %d \n", i - j + 1, " \n");
            }
            else
            {
                printf("Substring not found\n");
            }
            break;
        case 2:
            printf("Enter first string: ");
            scanf("%s", &str1);

            length = strlen(str1);

            for (i = 0; i < length; i++)
            {
                if (str1[i] != str1[length - i - 1])
                {
                    flag = 1;
                    break;
                }
            }

            if (flag)
            {
                printf("%s is not a palindrome \n", str1);
            }
            else
            {
                printf("%s is a palindrome\n", str1);
            }
            break;
        case 3:
            printf("Enter first string: ");
            scanf("%s", &str1);
            printf("Enter second string: ");
            scanf("%s", &str2);
            value = strcmp(str1, str2);
            if (value == 0)
                printf("strings are same\n");
            else
                printf("strings are not same\n");
            break;
        case 4:
            printf("Enter first string: ");
            scanf("%s", &str1);
            char str3[80] = "";
            printf("Before copying\n");
            printf("Source string: %s \n", str1);
            printf("Destination string: %s \n\n", str3);

            strcpy(str3, str1); // calling strcpy function
            printf("After copying\n");
            printf("Source string: %s \n", str1);
            printf("Destination string: %s \n", str3);
            break;
        case 5:
            printf("Enter first string: ");
            scanf("%s", &str1);
            printf(" \n After the reverse of a string: %s ", strrev(str1));
            break;
        default:
            printf("bhai kya kar raha hai tu ,kuchh bhi mat enter kar \n");
            break;
        }
    } while (choice != 6);

    return 0;
}
/* 
Enetr your choice
1.Substring
2.Palindrome
3.Compare
4.Copy
5.Reverse
6.Exit
1
Enter first string: abcd
Enter second string: ab
Substring is present in the given string  1 
Enetr your choice
1.Substring
2.Palindrome
3.Compare
4.Copy
5.Reverse
6.Exit
2
Enter first string: pop
pop is a palindrome
Enetr your choice
1.Substring
2.Palindrome
3.Compare
4.Copy
5.Reverse
6.Exit
3
Enter first string: abcd
Enter second string: abcd
strings are same
Enetr your choice
1.Substring
2.Palindrome
3.Compare
4.Copy
5.Reverse
6.Exit
4
Enter first string: Dharmendra
Before copying
Source string: Dharmendra
Destination string:

After copying
Source string: Dharmendra
Destination string: Dharmendra
Enetr your choice
1.Substring
2.Palindrome
3.Compare
4.Copy
5.Reverse
6.Exit
5
Enter first string: Dharmendra

 After the reverse of a string: ardnemrahD Enetr your choice
1.Substring
2.Palindrome
3.Compare
4.Copy
5.Reverse
6.Exit
6
bhai kya kar raha hai tu ,kuchh bhi mat enter kar
 */