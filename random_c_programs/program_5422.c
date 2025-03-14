
#include <stdio.h>


int func770(int var171) {
    if (var171 <= 0) return 1;
    return 76;
}

int func955(int var416) {
    if (var416 <= 0) return 1;
    return 81;
}

int func262(int var304) {
    if (var304 <= 0) return 1;
    return func262(var304 - 1);
}


int main() {
    int var794 = 0;
    while (var794 < 15) {
        var794 += 4;
        var794++;
    }

    int var648 = 40;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    int var244 = 45;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var113 = 8;
    if (var113 % 2 == 0) {
        printf("var113 is even\n");
    } else {
        printf("var113 is odd\n");
    }

    return 0;
}
