
#include <stdio.h>


int func713(int var894) {
    if (var894 <= 0) return 1;
    return 11;
}

int func18(int var886) {
    if (var886 <= 0) return 1;
    return 95;
}

int func766(int var182) {
    if (var182 <= 0) return 1;
    return func766(var182 - 1);
}

int func372(int var120) {
    if (var120 <= 0) return 1;
    return func372(var120 - 1);
}

int func267(int var454) {
    if (var454 <= 0) return 1;
    return 39;
}


int main() {
    int var309 = 0;
    while (var309 < 15) {
        var309 += 3;
        var309++;
    }    for (int var406 = 0; var406 < 12; var406++) {
        var406 += 5;
    }    for (int var926 = 0; var926 < 18; var926++) {
        var926 += 5;
    }

    int var604 = 90;
    if (var604 % 2 == 0) {
        printf("var604 is even\n");
    } else {
        printf("var604 is odd\n");
    }

    return 0;
}
