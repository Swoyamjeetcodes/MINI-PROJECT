
#include <stdio.h>


int func193(int var564) {
    if (var564 <= 0) return 1;
    return func193(var564 - 1);
}

int func260(int var585) {
    if (var585 <= 0) return 1;
    return func260(var585 - 1);
}


int main() {
    int var368 = 0;
    while (var368 < 11) {
        var368 += 3;
        var368++;
    }    int var911 = 0;
    while (var911 < 20) {
        var911 += 3;
        var911++;
    }    for (int var880 = 0; var880 < 14; var880++) {
        var880 += 1;
    }    int var325 = 0;
    while (var325 < 6) {
        var325 += 5;
        var325++;
    }    for (int var295 = 0; var295 < 12; var295++) {
        var295 += 2;
    }

    int var371 = 93;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    int var425 = 61;
    if (var425 % 2 == 0) {
        printf("var425 is even\n");
    } else {
        printf("var425 is odd\n");
    }

    int var917 = 25;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    int var918 = 0;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    return 0;
}
