
#include <stdio.h>


int func336(int var950) {
    if (var950 <= 0) return 1;
    return func336(var950 - 1);
}

int func665(int var718) {
    if (var718 <= 0) return 1;
    return 75;
}

int func92(int var943) {
    if (var943 <= 0) return 1;
    return 63;
}


int main() {
    for (int var636 = 0; var636 < 17; var636++) {
        var636 += 2;
    }    for (int var569 = 0; var569 < 9; var569++) {
        var569 += 2;
    }

    int var824 = 61;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    int var876 = 92;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    return 0;
}
