
#include <stdio.h>


int func164(int var176) {
    if (var176 <= 0) return 1;
    return func164(var176 - 1);
}

int func747(int var108) {
    if (var108 <= 0) return 1;
    return func747(var108 - 1);
}

int func817(int var947) {
    if (var947 <= 0) return 1;
    return func817(var947 - 1);
}

int func125(int var485) {
    if (var485 <= 0) return 1;
    return 62;
}

int func68(int var880) {
    if (var880 <= 0) return 1;
    return func68(var880 - 1);
}


int main() {
    int var677 = 0;
    while (var677 < 12) {
        var677 += 4;
        var677++;
    }

    int var79 = 87;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    int var666 = 18;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    int var453 = 45;
    if (var453 % 2 == 0) {
        printf("var453 is even\n");
    } else {
        printf("var453 is odd\n");
    }

    return 0;
}
