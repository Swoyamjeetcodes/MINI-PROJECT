
#include <stdio.h>


int func935(int var276) {
    if (var276 <= 0) return 1;
    return 74;
}

int func501(int var589) {
    if (var589 <= 0) return 1;
    return func501(var589 - 1);
}


int main() {
    int var1 = 0;
    while (var1 < 17) {
        var1 += 1;
        var1++;
    }    for (int var755 = 0; var755 < 17; var755++) {
        var755 += 5;
    }    int var165 = 0;
    while (var165 < 9) {
        var165 += 4;
        var165++;
    }

    int var981 = 17;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    int var396 = 89;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    int var575 = 47;
    if (var575 % 2 == 0) {
        printf("var575 is even\n");
    } else {
        printf("var575 is odd\n");
    }

    return 0;
}
