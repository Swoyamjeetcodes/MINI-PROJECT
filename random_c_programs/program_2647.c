
#include <stdio.h>


int func230(int var237) {
    if (var237 <= 0) return 1;
    return 3;
}

int func667(int var383) {
    if (var383 <= 0) return 1;
    return func667(var383 - 1);
}

int func169(int var905) {
    if (var905 <= 0) return 1;
    return func169(var905 - 1);
}

int func409(int var292) {
    if (var292 <= 0) return 1;
    return func409(var292 - 1);
}

int func109(int var861) {
    if (var861 <= 0) return 1;
    return 34;
}


int main() {
    int var728 = 0;
    while (var728 < 14) {
        var728 += 3;
        var728++;
    }    int var911 = 0;
    while (var911 < 12) {
        var911 += 4;
        var911++;
    }

    int var171 = 85;
    if (var171 % 2 == 0) {
        printf("var171 is even\n");
    } else {
        printf("var171 is odd\n");
    }

    int var143 = 44;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    int var535 = 75;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    return 0;
}
