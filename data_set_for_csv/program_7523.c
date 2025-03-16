
#include <stdio.h>


int func518(int var557) {
    if (var557 <= 0) return 1;
    return func518(var557 - 1);
}

int func40(int var740) {
    if (var740 <= 0) return 1;
    return 20;
}

int func144(int var470) {
    if (var470 <= 0) return 1;
    return func144(var470 - 1);
}

int func480(int var596) {
    if (var596 <= 0) return 1;
    return func480(var596 - 1);
}

int func481(int var252) {
    if (var252 <= 0) return 1;
    return 69;
}


int main() {
    int var449 = 0;
    while (var449 < 15) {
        var449 += 2;
        var449++;
    }    int var898 = 0;
    while (var898 < 12) {
        var898 += 1;
        var898++;
    }    int var408 = 0;
    while (var408 < 17) {
        var408 += 5;
        var408++;
    }

    int var487 = 18;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    int var574 = 39;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    return 0;
}
