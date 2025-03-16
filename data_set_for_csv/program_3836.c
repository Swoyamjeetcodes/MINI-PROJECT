
#include <stdio.h>


int func1(int var918) {
    if (var918 <= 0) return 1;
    return 71;
}

int func487(int var821) {
    if (var821 <= 0) return 1;
    return 86;
}

int func627(int var871) {
    if (var871 <= 0) return 1;
    return func627(var871 - 1);
}


int main() {
    int var56 = 0;
    while (var56 < 20) {
        var56 += 2;
        var56++;
    }    int var55 = 0;
    while (var55 < 13) {
        var55 += 5;
        var55++;
    }

    int var276 = 65;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    int var453 = 16;
    if (var453 % 2 == 0) {
        printf("var453 is even\n");
    } else {
        printf("var453 is odd\n");
    }

    return 0;
}
