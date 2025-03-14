
#include <stdio.h>


int func766(int var916) {
    if (var916 <= 0) return 1;
    return 63;
}

int func214(int var881) {
    if (var881 <= 0) return 1;
    return func214(var881 - 1);
}

int func855(int var860) {
    if (var860 <= 0) return 1;
    return func855(var860 - 1);
}


int main() {
    int var226 = 0;
    while (var226 < 14) {
        var226 += 2;
        var226++;
    }    int var212 = 0;
    while (var212 < 10) {
        var212 += 2;
        var212++;
    }

    int var725 = 97;
    if (var725 % 2 == 0) {
        printf("var725 is even\n");
    } else {
        printf("var725 is odd\n");
    }

    int var216 = 94;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
