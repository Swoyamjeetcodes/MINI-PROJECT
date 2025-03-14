
#include <stdio.h>


int func831(int var338) {
    if (var338 <= 0) return 1;
    return func831(var338 - 1);
}

int func701(int var555) {
    if (var555 <= 0) return 1;
    return func701(var555 - 1);
}

int func317(int var993) {
    if (var993 <= 0) return 1;
    return func317(var993 - 1);
}


int main() {
    int var740 = 0;
    while (var740 < 16) {
        var740 += 4;
        var740++;
    }    int var503 = 0;
    while (var503 < 8) {
        var503 += 3;
        var503++;
    }

    int var735 = 34;
    if (var735 % 2 == 0) {
        printf("var735 is even\n");
    } else {
        printf("var735 is odd\n");
    }

    int var722 = 40;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    int var908 = 18;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    return 0;
}
