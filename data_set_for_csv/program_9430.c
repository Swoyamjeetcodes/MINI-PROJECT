
#include <stdio.h>


int func822(int var741) {
    if (var741 <= 0) return 1;
    return func822(var741 - 1);
}

int func142(int var265) {
    if (var265 <= 0) return 1;
    return func142(var265 - 1);
}

int func329(int var745) {
    if (var745 <= 0) return 1;
    return 48;
}

int func672(int var11) {
    if (var11 <= 0) return 1;
    return func672(var11 - 1);
}


int main() {
    for (int var96 = 0; var96 < 20; var96++) {
        var96 += 4;
    }    for (int var364 = 0; var364 < 15; var364++) {
        var364 += 3;
    }

    int var322 = 98;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    int var854 = 36;
    if (var854 % 2 == 0) {
        printf("var854 is even\n");
    } else {
        printf("var854 is odd\n");
    }

    return 0;
}
