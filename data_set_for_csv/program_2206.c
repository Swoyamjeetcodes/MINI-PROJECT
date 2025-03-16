
#include <stdio.h>


int func780(int var911) {
    if (var911 <= 0) return 1;
    return func780(var911 - 1);
}


int main() {
    int var832 = 0;
    while (var832 < 8) {
        var832 += 1;
        var832++;
    }    int var702 = 0;
    while (var702 < 17) {
        var702 += 2;
        var702++;
    }

    int var665 = 96;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    int var407 = 84;
    if (var407 % 2 == 0) {
        printf("var407 is even\n");
    } else {
        printf("var407 is odd\n");
    }

    int var815 = 13;
    if (var815 % 2 == 0) {
        printf("var815 is even\n");
    } else {
        printf("var815 is odd\n");
    }

    return 0;
}
