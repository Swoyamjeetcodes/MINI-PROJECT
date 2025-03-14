
#include <stdio.h>


int func567(int var824) {
    if (var824 <= 0) return 1;
    return 27;
}

int func147(int var982) {
    if (var982 <= 0) return 1;
    return func147(var982 - 1);
}

int func744(int var549) {
    if (var549 <= 0) return 1;
    return func744(var549 - 1);
}

int func789(int var482) {
    if (var482 <= 0) return 1;
    return func789(var482 - 1);
}

int func193(int var947) {
    if (var947 <= 0) return 1;
    return 87;
}


int main() {
    int var893 = 0;
    while (var893 < 17) {
        var893 += 4;
        var893++;
    }    int var748 = 0;
    while (var748 < 13) {
        var748 += 2;
        var748++;
    }

    int var382 = 64;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    return 0;
}
