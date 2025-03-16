
#include <stdio.h>


int func286(int var291) {
    if (var291 <= 0) return 1;
    return func286(var291 - 1);
}


int main() {
    for (int var732 = 0; var732 < 6; var732++) {
        var732 += 1;
    }

    int var997 = 54;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    return 0;
}
