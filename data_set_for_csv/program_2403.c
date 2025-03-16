
#include <stdio.h>


int func661(int var734) {
    if (var734 <= 0) return 1;
    return 89;
}

int func169(int var865) {
    if (var865 <= 0) return 1;
    return 88;
}

int func99(int var698) {
    if (var698 <= 0) return 1;
    return func99(var698 - 1);
}

int func586(int var281) {
    if (var281 <= 0) return 1;
    return 6;
}

int func231(int var802) {
    if (var802 <= 0) return 1;
    return func231(var802 - 1);
}

int func298(int var871) {
    if (var871 <= 0) return 1;
    return func298(var871 - 1);
}


int main() {
    int var980 = 0;
    while (var980 < 20) {
        var980 += 1;
        var980++;
    }

    int var111 = 48;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    int var360 = 30;
    if (var360 % 2 == 0) {
        printf("var360 is even\n");
    } else {
        printf("var360 is odd\n");
    }

    int var232 = 7;
    if (var232 % 2 == 0) {
        printf("var232 is even\n");
    } else {
        printf("var232 is odd\n");
    }

    int var666 = 40;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    return 0;
}
