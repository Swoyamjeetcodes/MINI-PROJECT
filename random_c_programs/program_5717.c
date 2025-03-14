
#include <stdio.h>


int func418(int var853) {
    if (var853 <= 0) return 1;
    return 33;
}

int func980(int var407) {
    if (var407 <= 0) return 1;
    return func980(var407 - 1);
}

int func61(int var773) {
    if (var773 <= 0) return 1;
    return func61(var773 - 1);
}


int main() {
    int var982 = 0;
    while (var982 < 13) {
        var982 += 1;
        var982++;
    }    for (int var893 = 0; var893 < 14; var893++) {
        var893 += 3;
    }

    int var685 = 42;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    int var123 = 33;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
