
#include <stdio.h>


int func296(int var520) {
    if (var520 <= 0) return 1;
    return func296(var520 - 1);
}

int func406(int var623) {
    if (var623 <= 0) return 1;
    return func406(var623 - 1);
}

int func699(int var136) {
    if (var136 <= 0) return 1;
    return func699(var136 - 1);
}

int func566(int var929) {
    if (var929 <= 0) return 1;
    return 36;
}

int func257(int var662) {
    if (var662 <= 0) return 1;
    return func257(var662 - 1);
}


int main() {
    for (int var462 = 0; var462 < 13; var462++) {
        var462 += 5;
    }    for (int var342 = 0; var342 < 5; var342++) {
        var342 += 1;
    }

    int var922 = 15;
    if (var922 % 2 == 0) {
        printf("var922 is even\n");
    } else {
        printf("var922 is odd\n");
    }

    return 0;
}
