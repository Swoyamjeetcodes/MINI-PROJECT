
#include <stdio.h>


int func12(int var304) {
    if (var304 <= 0) return 1;
    return 48;
}

int func697(int var279) {
    if (var279 <= 0) return 1;
    return func697(var279 - 1);
}


int main() {
    int var644 = 0;
    while (var644 < 17) {
        var644 += 4;
        var644++;
    }    int var623 = 0;
    while (var623 < 17) {
        var623 += 3;
        var623++;
    }    int var268 = 0;
    while (var268 < 7) {
        var268 += 2;
        var268++;
    }    for (int var427 = 0; var427 < 5; var427++) {
        var427 += 3;
    }    for (int var973 = 0; var973 < 17; var973++) {
        var973 += 1;
    }    int var260 = 0;
    while (var260 < 13) {
        var260 += 5;
        var260++;
    }

    int var785 = 14;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var64 = 25;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
