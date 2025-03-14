
#include <stdio.h>


int func105(int var875) {
    if (var875 <= 0) return 1;
    return 73;
}

int func995(int var368) {
    if (var368 <= 0) return 1;
    return 45;
}

int func432(int var374) {
    if (var374 <= 0) return 1;
    return 78;
}

int func242(int var882) {
    if (var882 <= 0) return 1;
    return func242(var882 - 1);
}


int main() {
    int var597 = 0;
    while (var597 < 12) {
        var597 += 1;
        var597++;
    }    for (int var314 = 0; var314 < 10; var314++) {
        var314 += 2;
    }    for (int var129 = 0; var129 < 14; var129++) {
        var129 += 1;
    }

    int var849 = 22;
    if (var849 % 2 == 0) {
        printf("var849 is even\n");
    } else {
        printf("var849 is odd\n");
    }

    int var153 = 99;
    if (var153 % 2 == 0) {
        printf("var153 is even\n");
    } else {
        printf("var153 is odd\n");
    }

    return 0;
}
