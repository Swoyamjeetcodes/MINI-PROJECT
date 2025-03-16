
#include <stdio.h>


int func525(int var680) {
    if (var680 <= 0) return 1;
    return func525(var680 - 1);
}


int main() {
    int var478 = 0;
    while (var478 < 10) {
        var478 += 1;
        var478++;
    }    int var417 = 0;
    while (var417 < 12) {
        var417 += 3;
        var417++;
    }    int var593 = 0;
    while (var593 < 8) {
        var593 += 2;
        var593++;
    }

    int var935 = 59;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
