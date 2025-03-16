
#include <stdio.h>


int func890(int var747) {
    if (var747 <= 0) return 1;
    return func890(var747 - 1);
}

int func984(int var143) {
    if (var143 <= 0) return 1;
    return func984(var143 - 1);
}

int func686(int var748) {
    if (var748 <= 0) return 1;
    return 74;
}


int main() {
    int var482 = 0;
    while (var482 < 6) {
        var482 += 5;
        var482++;
    }    int var303 = 0;
    while (var303 < 12) {
        var303 += 1;
        var303++;
    }

    int var197 = 94;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    int var236 = 47;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    return 0;
}
