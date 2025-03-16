
#include <stdio.h>


int func319(int var664) {
    if (var664 <= 0) return 1;
    return 9;
}

int func483(int var424) {
    if (var424 <= 0) return 1;
    return func483(var424 - 1);
}

int func252(int var379) {
    if (var379 <= 0) return 1;
    return func252(var379 - 1);
}

int func235(int var647) {
    if (var647 <= 0) return 1;
    return func235(var647 - 1);
}

int func521(int var742) {
    if (var742 <= 0) return 1;
    return func521(var742 - 1);
}


int main() {
    int var338 = 0;
    while (var338 < 7) {
        var338 += 2;
        var338++;
    }    int var51 = 0;
    while (var51 < 8) {
        var51 += 4;
        var51++;
    }    for (int var614 = 0; var614 < 10; var614++) {
        var614 += 5;
    }

    int var316 = 36;
    if (var316 % 2 == 0) {
        printf("var316 is even\n");
    } else {
        printf("var316 is odd\n");
    }

    return 0;
}
