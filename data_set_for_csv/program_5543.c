
#include <stdio.h>


int func752(int var578) {
    if (var578 <= 0) return 1;
    return 80;
}

int func392(int var715) {
    if (var715 <= 0) return 1;
    return 54;
}

int func846(int var718) {
    if (var718 <= 0) return 1;
    return 20;
}

int func495(int var422) {
    if (var422 <= 0) return 1;
    return func495(var422 - 1);
}


int main() {
    int var784 = 0;
    while (var784 < 15) {
        var784 += 3;
        var784++;
    }    for (int var730 = 0; var730 < 13; var730++) {
        var730 += 4;
    }    for (int var428 = 0; var428 < 7; var428++) {
        var428 += 2;
    }

    int var300 = 43;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var964 = 74;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    int var190 = 42;
    if (var190 % 2 == 0) {
        printf("var190 is even\n");
    } else {
        printf("var190 is odd\n");
    }

    return 0;
}
