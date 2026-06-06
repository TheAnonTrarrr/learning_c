#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str[7];
    int i;
    int flag = 1;

    puts("Введите 6 цифр без пробелов...");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < 6; i++) {
        flag = 0;

        if (!isdigit(str[i])) {
            flag = 0;

            if (isalpha(str[i])) {
                printf("Буква %c найдена\n", toupper(str[i]));
            }
            else if (ispunct(str[i])) {
                printf("Пунктуация найдена\n");
            }
            else if (isspace(str[i])) {
                printf("Пробел найден\n");
            }
        }
    } (flag) ? puts("Ввод корректен") : puts("Ввод некорректен");


    return 0;
}
