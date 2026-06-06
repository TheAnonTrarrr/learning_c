#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "No Time Like Present ";
    char sub[] = "Time";

    if(strstr(str, sub) == NULL) {
        printf("Подстрока \"Time\" не найдена\n");
    }

    else {
        printf("Подстрока \"Time\" найдена в %p\n", strstr(str, sub));
        printf("Номер индекса элемента - %ld\n\n", strstr(str, sub) - str);

        printf("%s против \"Time\": %d\n", sub, strcmp(sub, "Time"));
        printf("%s против \"time\": %d\n", sub, strcmp(sub, "time"));
        printf("%s против \"TIME\": %d\n", sub, strcmp(sub, "TIME"));
    }

    return 0;
}
