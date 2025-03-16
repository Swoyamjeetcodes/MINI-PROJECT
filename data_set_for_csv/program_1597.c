
#include <stdio.h>


int func966(int var236) {
    if (var236 <= 0) return 1;
    return func966(var236 - 1);
}

int func388(int var414) {
    if (var414 <= 0) return 1;
    return func388(var414 - 1);
}

int func585(int var730) {
    if (var730 <= 0) return 1;
    return func585(var730 - 1);
}


int main() {
    int var835 = 0;
    while (var835 < 6) {
        var835 += 3;
        var835++;
    }    for (int var338 = 0; var338 < 12; var338++) {
        var338 += 1;
    }

    int var740 = 35;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    int var652 = 81;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
