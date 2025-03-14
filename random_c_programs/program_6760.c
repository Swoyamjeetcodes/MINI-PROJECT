
#include <stdio.h>


int func191(int var598) {
    if (var598 <= 0) return 1;
    return 25;
}

int func535(int var373) {
    if (var373 <= 0) return 1;
    return func535(var373 - 1);
}

int func566(int var994) {
    if (var994 <= 0) return 1;
    return func566(var994 - 1);
}

int func365(int var964) {
    if (var964 <= 0) return 1;
    return 28;
}


int main() {
    for (int var433 = 0; var433 < 10; var433++) {
        var433 += 1;
    }    for (int var773 = 0; var773 < 18; var773++) {
        var773 += 4;
    }    for (int var839 = 0; var839 < 15; var839++) {
        var839 += 4;
    }

    int var861 = 88;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    int var181 = 36;
    if (var181 % 2 == 0) {
        printf("var181 is even\n");
    } else {
        printf("var181 is odd\n");
    }

    int var364 = 12;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    return 0;
}
