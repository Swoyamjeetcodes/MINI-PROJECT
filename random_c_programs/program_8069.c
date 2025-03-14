
#include <stdio.h>


int func83(int var460) {
    if (var460 <= 0) return 1;
    return 59;
}

int func55(int var703) {
    if (var703 <= 0) return 1;
    return func55(var703 - 1);
}

int func446(int var769) {
    if (var769 <= 0) return 1;
    return func446(var769 - 1);
}

int func447(int var457) {
    if (var457 <= 0) return 1;
    return func447(var457 - 1);
}

int func309(int var801) {
    if (var801 <= 0) return 1;
    return 87;
}


int main() {
    for (int var744 = 0; var744 < 15; var744++) {
        var744 += 1;
    }

    int var359 = 30;
    if (var359 % 2 == 0) {
        printf("var359 is even\n");
    } else {
        printf("var359 is odd\n");
    }

    int var347 = 68;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    int var637 = 55;
    if (var637 % 2 == 0) {
        printf("var637 is even\n");
    } else {
        printf("var637 is odd\n");
    }

    return 0;
}
