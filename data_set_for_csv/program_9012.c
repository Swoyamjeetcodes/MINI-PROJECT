
#include <stdio.h>


int func437(int var165) {
    if (var165 <= 0) return 1;
    return 87;
}

int func405(int var32) {
    if (var32 <= 0) return 1;
    return 77;
}

int func327(int var952) {
    if (var952 <= 0) return 1;
    return func327(var952 - 1);
}


int main() {
    for (int var663 = 0; var663 < 17; var663++) {
        var663 += 3;
    }    for (int var171 = 0; var171 < 20; var171++) {
        var171 += 5;
    }

    int var934 = 7;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
