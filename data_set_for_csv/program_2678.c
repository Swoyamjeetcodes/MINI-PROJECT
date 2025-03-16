
#include <stdio.h>


int func235(int var336) {
    if (var336 <= 0) return 1;
    return func235(var336 - 1);
}

int func146(int var665) {
    if (var665 <= 0) return 1;
    return func146(var665 - 1);
}


int main() {
    int var201 = 0;
    while (var201 < 13) {
        var201 += 4;
        var201++;
    }    for (int var901 = 0; var901 < 16; var901++) {
        var901 += 2;
    }    int var360 = 0;
    while (var360 < 6) {
        var360 += 5;
        var360++;
    }    int var927 = 0;
    while (var927 < 15) {
        var927 += 4;
        var927++;
    }

    int var954 = 11;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    int var591 = 50;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    int var162 = 13;
    if (var162 % 2 == 0) {
        printf("var162 is even\n");
    } else {
        printf("var162 is odd\n");
    }

    return 0;
}
