
#include <stdio.h>


int func174(int var422) {
    if (var422 <= 0) return 1;
    return func174(var422 - 1);
}

int func225(int var770) {
    if (var770 <= 0) return 1;
    return func225(var770 - 1);
}

int func832(int var592) {
    if (var592 <= 0) return 1;
    return func832(var592 - 1);
}


int main() {
    int var251 = 0;
    while (var251 < 19) {
        var251 += 5;
        var251++;
    }    for (int var206 = 0; var206 < 10; var206++) {
        var206 += 4;
    }    int var160 = 0;
    while (var160 < 6) {
        var160 += 2;
        var160++;
    }

    int var598 = 9;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    int var489 = 69;
    if (var489 % 2 == 0) {
        printf("var489 is even\n");
    } else {
        printf("var489 is odd\n");
    }

    int var174 = 90;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    return 0;
}
