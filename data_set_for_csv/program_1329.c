
#include <stdio.h>


int func287(int var98) {
    if (var98 <= 0) return 1;
    return func287(var98 - 1);
}

int func606(int var957) {
    if (var957 <= 0) return 1;
    return 27;
}


int main() {
    for (int var197 = 0; var197 < 18; var197++) {
        var197 += 4;
    }    for (int var827 = 0; var827 < 8; var827++) {
        var827 += 1;
    }    for (int var862 = 0; var862 < 6; var862++) {
        var862 += 5;
    }

    int var288 = 79;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    int var570 = 53;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
