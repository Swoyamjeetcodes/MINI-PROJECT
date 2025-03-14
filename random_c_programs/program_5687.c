
#include <stdio.h>


int func132(int var627) {
    if (var627 <= 0) return 1;
    return 48;
}

int func767(int var401) {
    if (var401 <= 0) return 1;
    return func767(var401 - 1);
}

int func203(int var649) {
    if (var649 <= 0) return 1;
    return func203(var649 - 1);
}

int func855(int var992) {
    if (var992 <= 0) return 1;
    return 4;
}


int main() {
    for (int var779 = 0; var779 < 18; var779++) {
        var779 += 2;
    }    for (int var73 = 0; var73 < 5; var73++) {
        var73 += 4;
    }    for (int var726 = 0; var726 < 14; var726++) {
        var726 += 4;
    }    for (int var479 = 0; var479 < 7; var479++) {
        var479 += 5;
    }    for (int var554 = 0; var554 < 13; var554++) {
        var554 += 2;
    }    int var928 = 0;
    while (var928 < 6) {
        var928 += 4;
        var928++;
    }    int var309 = 0;
    while (var309 < 7) {
        var309 += 1;
        var309++;
    }

    int var824 = 49;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    int var267 = 7;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    int var139 = 26;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    return 0;
}
