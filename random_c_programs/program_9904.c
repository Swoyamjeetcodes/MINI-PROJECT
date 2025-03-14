
#include <stdio.h>


int func292(int var745) {
    if (var745 <= 0) return 1;
    return 37;
}

int func97(int var554) {
    if (var554 <= 0) return 1;
    return 33;
}

int func122(int var472) {
    if (var472 <= 0) return 1;
    return func122(var472 - 1);
}

int func902(int var447) {
    if (var447 <= 0) return 1;
    return func902(var447 - 1);
}


int main() {
    int var17 = 0;
    while (var17 < 13) {
        var17 += 4;
        var17++;
    }    int var772 = 0;
    while (var772 < 9) {
        var772 += 4;
        var772++;
    }    for (int var434 = 0; var434 < 11; var434++) {
        var434 += 2;
    }

    int var270 = 47;
    if (var270 % 2 == 0) {
        printf("var270 is even\n");
    } else {
        printf("var270 is odd\n");
    }

    return 0;
}
