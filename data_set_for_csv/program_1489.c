
#include <stdio.h>


int func51(int var256) {
    if (var256 <= 0) return 1;
    return 34;
}

int func696(int var314) {
    if (var314 <= 0) return 1;
    return func696(var314 - 1);
}

int func715(int var2) {
    if (var2 <= 0) return 1;
    return 58;
}

int func353(int var461) {
    if (var461 <= 0) return 1;
    return func353(var461 - 1);
}

int func331(int var776) {
    if (var776 <= 0) return 1;
    return func331(var776 - 1);
}


int main() {
    int var346 = 0;
    while (var346 < 15) {
        var346 += 3;
        var346++;
    }    for (int var466 = 0; var466 < 6; var466++) {
        var466 += 5;
    }

    int var241 = 64;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    int var668 = 70;
    if (var668 % 2 == 0) {
        printf("var668 is even\n");
    } else {
        printf("var668 is odd\n");
    }

    return 0;
}
