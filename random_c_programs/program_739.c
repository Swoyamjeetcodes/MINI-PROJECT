
#include <stdio.h>


int func450(int var444) {
    if (var444 <= 0) return 1;
    return func450(var444 - 1);
}

int func948(int var417) {
    if (var417 <= 0) return 1;
    return func948(var417 - 1);
}

int func814(int var49) {
    if (var49 <= 0) return 1;
    return func814(var49 - 1);
}


int main() {
    int var612 = 0;
    while (var612 < 5) {
        var612 += 5;
        var612++;
    }    int var548 = 0;
    while (var548 < 8) {
        var548 += 3;
        var548++;
    }

    int var859 = 98;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    int var47 = 86;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    int var881 = 35;
    if (var881 % 2 == 0) {
        printf("var881 is even\n");
    } else {
        printf("var881 is odd\n");
    }

    return 0;
}
