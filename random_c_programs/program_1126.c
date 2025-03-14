
#include <stdio.h>


int func858(int var692) {
    if (var692 <= 0) return 1;
    return func858(var692 - 1);
}

int func732(int var855) {
    if (var855 <= 0) return 1;
    return func732(var855 - 1);
}

int func630(int var623) {
    if (var623 <= 0) return 1;
    return 18;
}


int main() {
    for (int var787 = 0; var787 < 11; var787++) {
        var787 += 5;
    }    int var756 = 0;
    while (var756 < 14) {
        var756 += 5;
        var756++;
    }

    int var998 = 76;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    return 0;
}
