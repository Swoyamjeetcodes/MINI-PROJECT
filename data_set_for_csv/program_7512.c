
#include <stdio.h>


int func26(int var810) {
    if (var810 <= 0) return 1;
    return func26(var810 - 1);
}

int func385(int var328) {
    if (var328 <= 0) return 1;
    return func385(var328 - 1);
}

int func2(int var944) {
    if (var944 <= 0) return 1;
    return func2(var944 - 1);
}


int main() {
    for (int var543 = 0; var543 < 9; var543++) {
        var543 += 5;
    }

    int var995 = 72;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    int var736 = 100;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    return 0;
}
