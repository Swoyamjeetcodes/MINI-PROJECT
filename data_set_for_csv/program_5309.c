
#include <stdio.h>


int func311(int var928) {
    if (var928 <= 0) return 1;
    return func311(var928 - 1);
}

int func143(int var856) {
    if (var856 <= 0) return 1;
    return 21;
}

int func975(int var603) {
    if (var603 <= 0) return 1;
    return 50;
}


int main() {
    int var483 = 0;
    while (var483 < 15) {
        var483 += 5;
        var483++;
    }

    int var180 = 85;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    int var934 = 39;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
