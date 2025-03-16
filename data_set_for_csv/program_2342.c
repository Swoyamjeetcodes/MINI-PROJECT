
#include <stdio.h>


int func888(int var403) {
    if (var403 <= 0) return 1;
    return func888(var403 - 1);
}

int func487(int var534) {
    if (var534 <= 0) return 1;
    return 26;
}

int func191(int var21) {
    if (var21 <= 0) return 1;
    return func191(var21 - 1);
}


int main() {
    int var752 = 0;
    while (var752 < 13) {
        var752 += 3;
        var752++;
    }    for (int var144 = 0; var144 < 18; var144++) {
        var144 += 5;
    }

    int var263 = 3;
    if (var263 % 2 == 0) {
        printf("var263 is even\n");
    } else {
        printf("var263 is odd\n");
    }

    int var793 = 72;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    int var555 = 69;
    if (var555 % 2 == 0) {
        printf("var555 is even\n");
    } else {
        printf("var555 is odd\n");
    }

    return 0;
}
