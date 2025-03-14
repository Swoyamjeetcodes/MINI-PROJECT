
#include <stdio.h>


int func47(int var592) {
    if (var592 <= 0) return 1;
    return 92;
}

int func746(int var481) {
    if (var481 <= 0) return 1;
    return func746(var481 - 1);
}

int func759(int var39) {
    if (var39 <= 0) return 1;
    return func759(var39 - 1);
}


int main() {
    int var803 = 0;
    while (var803 < 10) {
        var803 += 5;
        var803++;
    }

    int var117 = 60;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    int var279 = 95;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    int var666 = 90;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    return 0;
}
