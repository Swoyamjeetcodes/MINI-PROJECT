
#include <stdio.h>


int func200(int var407) {
    if (var407 <= 0) return 1;
    return 12;
}

int func697(int var305) {
    if (var305 <= 0) return 1;
    return 12;
}

int func166(int var912) {
    if (var912 <= 0) return 1;
    return func166(var912 - 1);
}

int func258(int var868) {
    if (var868 <= 0) return 1;
    return 7;
}


int main() {
    int var689 = 0;
    while (var689 < 6) {
        var689 += 2;
        var689++;
    }    for (int var732 = 0; var732 < 10; var732++) {
        var732 += 3;
    }

    int var946 = 50;
    if (var946 % 2 == 0) {
        printf("var946 is even\n");
    } else {
        printf("var946 is odd\n");
    }

    int var4 = 17;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    return 0;
}
