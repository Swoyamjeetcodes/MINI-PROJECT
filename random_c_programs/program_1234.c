
#include <stdio.h>


int func269(int var828) {
    if (var828 <= 0) return 1;
    return 63;
}

int func379(int var833) {
    if (var833 <= 0) return 1;
    return func379(var833 - 1);
}


int main() {
    for (int var544 = 0; var544 < 12; var544++) {
        var544 += 4;
    }    for (int var306 = 0; var306 < 15; var306++) {
        var306 += 2;
    }    for (int var979 = 0; var979 < 17; var979++) {
        var979 += 5;
    }

    int var134 = 87;
    if (var134 % 2 == 0) {
        printf("var134 is even\n");
    } else {
        printf("var134 is odd\n");
    }

    int var76 = 49;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    int var674 = 38;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
