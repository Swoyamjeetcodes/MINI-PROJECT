
#include <stdio.h>


int func899(int var623) {
    if (var623 <= 0) return 1;
    return func899(var623 - 1);
}

int func645(int var351) {
    if (var351 <= 0) return 1;
    return 85;
}

int func290(int var109) {
    if (var109 <= 0) return 1;
    return 65;
}

int func198(int var993) {
    if (var993 <= 0) return 1;
    return func198(var993 - 1);
}


int main() {
    for (int var912 = 0; var912 < 10; var912++) {
        var912 += 5;
    }    for (int var362 = 0; var362 < 5; var362++) {
        var362 += 4;
    }    int var340 = 0;
    while (var340 < 6) {
        var340 += 5;
        var340++;
    }

    int var859 = 0;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    int var622 = 96;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    int var391 = 91;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    return 0;
}
