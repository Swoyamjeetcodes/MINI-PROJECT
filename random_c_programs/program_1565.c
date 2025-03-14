
#include <stdio.h>


int func761(int var806) {
    if (var806 <= 0) return 1;
    return func761(var806 - 1);
}

int func583(int var327) {
    if (var327 <= 0) return 1;
    return 50;
}

int func885(int var281) {
    if (var281 <= 0) return 1;
    return 81;
}

int func139(int var752) {
    if (var752 <= 0) return 1;
    return 26;
}


int main() {
    int var463 = 0;
    while (var463 < 7) {
        var463 += 5;
        var463++;
    }    int var571 = 0;
    while (var571 < 6) {
        var571 += 1;
        var571++;
    }    for (int var994 = 0; var994 < 10; var994++) {
        var994 += 5;
    }

    int var364 = 50;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    return 0;
}
