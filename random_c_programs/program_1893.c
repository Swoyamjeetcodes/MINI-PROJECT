
#include <stdio.h>


int func676(int var89) {
    if (var89 <= 0) return 1;
    return func676(var89 - 1);
}

int func146(int var858) {
    if (var858 <= 0) return 1;
    return func146(var858 - 1);
}

int func170(int var846) {
    if (var846 <= 0) return 1;
    return 40;
}


int main() {
    for (int var516 = 0; var516 < 13; var516++) {
        var516 += 5;
    }    for (int var742 = 0; var742 < 5; var742++) {
        var742 += 4;
    }    int var724 = 0;
    while (var724 < 17) {
        var724 += 3;
        var724++;
    }

    int var179 = 58;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    int var751 = 86;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    return 0;
}
