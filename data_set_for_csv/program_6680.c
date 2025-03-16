
#include <stdio.h>


int func746(int var886) {
    if (var886 <= 0) return 1;
    return 100;
}

int func191(int var636) {
    if (var636 <= 0) return 1;
    return 97;
}

int func37(int var84) {
    if (var84 <= 0) return 1;
    return 18;
}

int func297(int var553) {
    if (var553 <= 0) return 1;
    return func297(var553 - 1);
}

int func7(int var928) {
    if (var928 <= 0) return 1;
    return func7(var928 - 1);
}

int func858(int var286) {
    if (var286 <= 0) return 1;
    return 87;
}

int func739(int var558) {
    if (var558 <= 0) return 1;
    return 30;
}

int func445(int var457) {
    if (var457 <= 0) return 1;
    return func445(var457 - 1);
}

int func512(int var283) {
    if (var283 <= 0) return 1;
    return func512(var283 - 1);
}


int main() {
    int var659 = 0;
    while (var659 < 12) {
        var659 += 2;
        var659++;
    }    int var982 = 0;
    while (var982 < 12) {
        var982 += 3;
        var982++;
    }    for (int var281 = 0; var281 < 10; var281++) {
        var281 += 2;
    }

    int var446 = 91;
    if (var446 % 2 == 0) {
        printf("var446 is even\n");
    } else {
        printf("var446 is odd\n");
    }

    return 0;
}
