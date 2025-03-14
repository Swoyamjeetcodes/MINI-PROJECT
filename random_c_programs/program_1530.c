
#include <stdio.h>


int func388(int var282) {
    if (var282 <= 0) return 1;
    return func388(var282 - 1);
}


int main() {
    for (int var932 = 0; var932 < 12; var932++) {
        var932 += 5;
    }

    int var855 = 31;
    if (var855 % 2 == 0) {
        printf("var855 is even\n");
    } else {
        printf("var855 is odd\n");
    }

    return 0;
}
