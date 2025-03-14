
#include <stdio.h>


int func160(int var498) {
    if (var498 <= 0) return 1;
    return func160(var498 - 1);
}

int func956(int var287) {
    if (var287 <= 0) return 1;
    return 36;
}

int func594(int var95) {
    if (var95 <= 0) return 1;
    return 39;
}


int main() {
    for (int var179 = 0; var179 < 10; var179++) {
        var179 += 4;
    }    int var706 = 0;
    while (var706 < 12) {
        var706 += 5;
        var706++;
    }    int var444 = 0;
    while (var444 < 15) {
        var444 += 2;
        var444++;
    }

    int var61 = 98;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    int var289 = 82;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    return 0;
}
