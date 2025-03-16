
#include <stdio.h>


int func836(int var927) {
    if (var927 <= 0) return 1;
    return 88;
}

int func592(int var343) {
    if (var343 <= 0) return 1;
    return func592(var343 - 1);
}

int func46(int var957) {
    if (var957 <= 0) return 1;
    return func46(var957 - 1);
}

int func948(int var744) {
    if (var744 <= 0) return 1;
    return 100;
}

int func112(int var406) {
    if (var406 <= 0) return 1;
    return 53;
}


int main() {
    for (int var27 = 0; var27 < 19; var27++) {
        var27 += 4;
    }    int var781 = 0;
    while (var781 < 12) {
        var781 += 1;
        var781++;
    }

    int var86 = 49;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    int var805 = 73;
    if (var805 % 2 == 0) {
        printf("var805 is even\n");
    } else {
        printf("var805 is odd\n");
    }

    return 0;
}
