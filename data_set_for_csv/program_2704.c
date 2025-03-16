
#include <stdio.h>


int func446(int var307) {
    if (var307 <= 0) return 1;
    return func446(var307 - 1);
}


int main() {
    for (int var720 = 0; var720 < 12; var720++) {
        var720 += 2;
    }

    int var756 = 46;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    return 0;
}
