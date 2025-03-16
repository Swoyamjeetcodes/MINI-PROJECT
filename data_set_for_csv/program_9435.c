
#include <stdio.h>


int func63(int var628) {
    if (var628 <= 0) return 1;
    return 5;
}

int func466(int var165) {
    if (var165 <= 0) return 1;
    return func466(var165 - 1);
}

int func847(int var263) {
    if (var263 <= 0) return 1;
    return 46;
}

int func904(int var888) {
    if (var888 <= 0) return 1;
    return func904(var888 - 1);
}

int func529(int var249) {
    if (var249 <= 0) return 1;
    return func529(var249 - 1);
}


int main() {
    for (int var18 = 0; var18 < 9; var18++) {
        var18 += 5;
    }    for (int var868 = 0; var868 < 6; var868++) {
        var868 += 5;
    }

    int var736 = 85;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    int var787 = 49;
    if (var787 % 2 == 0) {
        printf("var787 is even\n");
    } else {
        printf("var787 is odd\n");
    }

    return 0;
}
