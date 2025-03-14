
#include <stdio.h>


int func610(int var560) {
    if (var560 <= 0) return 1;
    return 40;
}

int func290(int var14) {
    if (var14 <= 0) return 1;
    return 61;
}

int func566(int var159) {
    if (var159 <= 0) return 1;
    return func566(var159 - 1);
}


int main() {
    for (int var609 = 0; var609 < 14; var609++) {
        var609 += 1;
    }    for (int var905 = 0; var905 < 12; var905++) {
        var905 += 5;
    }

    int var853 = 97;
    if (var853 % 2 == 0) {
        printf("var853 is even\n");
    } else {
        printf("var853 is odd\n");
    }

    int var989 = 83;
    if (var989 % 2 == 0) {
        printf("var989 is even\n");
    } else {
        printf("var989 is odd\n");
    }

    int var152 = 19;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    return 0;
}
