
#include <stdio.h>


int func802(int var632) {
    if (var632 <= 0) return 1;
    return 8;
}

int func594(int var771) {
    if (var771 <= 0) return 1;
    return func594(var771 - 1);
}


int main() {
    for (int var293 = 0; var293 < 20; var293++) {
        var293 += 5;
    }    int var551 = 0;
    while (var551 < 14) {
        var551 += 1;
        var551++;
    }    int var97 = 0;
    while (var97 < 11) {
        var97 += 5;
        var97++;
    }

    int var752 = 67;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var723 = 77;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    int var209 = 71;
    if (var209 % 2 == 0) {
        printf("var209 is even\n");
    } else {
        printf("var209 is odd\n");
    }

    return 0;
}
