
#include <stdio.h>


int func612(int var655) {
    if (var655 <= 0) return 1;
    return func612(var655 - 1);
}

int func92(int var929) {
    if (var929 <= 0) return 1;
    return func92(var929 - 1);
}

int func877(int var148) {
    if (var148 <= 0) return 1;
    return func877(var148 - 1);
}


int main() {
    int var700 = 0;
    while (var700 < 19) {
        var700 += 3;
        var700++;
    }

    int var841 = 15;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    int var482 = 59;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    int var168 = 1;
    if (var168 % 2 == 0) {
        printf("var168 is even\n");
    } else {
        printf("var168 is odd\n");
    }

    int var352 = 49;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    int var465 = 37;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    return 0;
}
