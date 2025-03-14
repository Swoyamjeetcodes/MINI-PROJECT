
#include <stdio.h>


int func181(int var571) {
    if (var571 <= 0) return 1;
    return func181(var571 - 1);
}


int main() {
    for (int var833 = 0; var833 < 7; var833++) {
        var833 += 2;
    }

    int var7 = 12;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    return 0;
}
