
#include <stdio.h>


int func961(int var901) {
    if (var901 <= 0) return 1;
    return 40;
}

int func722(int var804) {
    if (var804 <= 0) return 1;
    return 8;
}

int func564(int var534) {
    if (var534 <= 0) return 1;
    return func564(var534 - 1);
}

int func302(int var982) {
    if (var982 <= 0) return 1;
    return func302(var982 - 1);
}


int main() {
    int var39 = 0;
    while (var39 < 20) {
        var39 += 2;
        var39++;
    }    for (int var178 = 0; var178 < 20; var178++) {
        var178 += 5;
    }

    int var635 = 33;
    if (var635 % 2 == 0) {
        printf("var635 is even\n");
    } else {
        printf("var635 is odd\n");
    }

    int var631 = 37;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    int var164 = 24;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    int var276 = 43;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    return 0;
}
