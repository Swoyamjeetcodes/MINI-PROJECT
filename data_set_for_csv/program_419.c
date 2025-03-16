
#include <stdio.h>


int func661(int var934) {
    if (var934 <= 0) return 1;
    return 40;
}

int func100(int var863) {
    if (var863 <= 0) return 1;
    return func100(var863 - 1);
}

int func265(int var60) {
    if (var60 <= 0) return 1;
    return 4;
}

int func777(int var495) {
    if (var495 <= 0) return 1;
    return func777(var495 - 1);
}

int func409(int var773) {
    if (var773 <= 0) return 1;
    return 3;
}

int func75(int var615) {
    if (var615 <= 0) return 1;
    return 41;
}

int func354(int var726) {
    if (var726 <= 0) return 1;
    return func354(var726 - 1);
}

int func186(int var521) {
    if (var521 <= 0) return 1;
    return 5;
}

int func376(int var667) {
    if (var667 <= 0) return 1;
    return func376(var667 - 1);
}


int main() {
    for (int var696 = 0; var696 < 12; var696++) {
        var696 += 2;
    }    for (int var814 = 0; var814 < 14; var814++) {
        var814 += 3;
    }

    int var33 = 75;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var400 = 90;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    return 0;
}
