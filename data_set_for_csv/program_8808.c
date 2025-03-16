
#include <stdio.h>


int func740(int var840) {
    if (var840 <= 0) return 1;
    return 15;
}

int func144(int var95) {
    if (var95 <= 0) return 1;
    return 10;
}

int func653(int var368) {
    if (var368 <= 0) return 1;
    return 4;
}

int func522(int var750) {
    if (var750 <= 0) return 1;
    return func522(var750 - 1);
}


int main() {
    int var891 = 0;
    while (var891 < 15) {
        var891 += 3;
        var891++;
    }

    int var499 = 21;
    if (var499 % 2 == 0) {
        printf("var499 is even\n");
    } else {
        printf("var499 is odd\n");
    }

    int var44 = 97;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    int var868 = 85;
    if (var868 % 2 == 0) {
        printf("var868 is even\n");
    } else {
        printf("var868 is odd\n");
    }

    return 0;
}
