
#include <stdio.h>


int func648(int var101) {
    if (var101 <= 0) return 1;
    return func648(var101 - 1);
}

int func947(int var517) {
    if (var517 <= 0) return 1;
    return func947(var517 - 1);
}

int func166(int var805) {
    if (var805 <= 0) return 1;
    return 47;
}

int func892(int var877) {
    if (var877 <= 0) return 1;
    return func892(var877 - 1);
}

int func341(int var851) {
    if (var851 <= 0) return 1;
    return 25;
}


int main() {
    int var255 = 0;
    while (var255 < 11) {
        var255 += 3;
        var255++;
    }    int var808 = 0;
    while (var808 < 6) {
        var808 += 5;
        var808++;
    }

    int var146 = 93;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    int var894 = 69;
    if (var894 % 2 == 0) {
        printf("var894 is even\n");
    } else {
        printf("var894 is odd\n");
    }

    int var706 = 32;
    if (var706 % 2 == 0) {
        printf("var706 is even\n");
    } else {
        printf("var706 is odd\n");
    }

    return 0;
}
