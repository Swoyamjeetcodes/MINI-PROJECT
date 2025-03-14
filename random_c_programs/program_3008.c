
#include <stdio.h>


int func9(int var598) {
    if (var598 <= 0) return 1;
    return func9(var598 - 1);
}

int func890(int var229) {
    if (var229 <= 0) return 1;
    return 89;
}


int main() {
    for (int var261 = 0; var261 < 9; var261++) {
        var261 += 5;
    }    for (int var805 = 0; var805 < 15; var805++) {
        var805 += 2;
    }

    int var5 = 30;
    if (var5 % 2 == 0) {
        printf("var5 is even\n");
    } else {
        printf("var5 is odd\n");
    }

    return 0;
}
