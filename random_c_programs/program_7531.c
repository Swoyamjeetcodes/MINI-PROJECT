
#include <stdio.h>


int func84(int var631) {
    if (var631 <= 0) return 1;
    return func84(var631 - 1);
}


int main() {
    for (int var813 = 0; var813 < 20; var813++) {
        var813 += 1;
    }

    int var309 = 68;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    int var571 = 85;
    if (var571 % 2 == 0) {
        printf("var571 is even\n");
    } else {
        printf("var571 is odd\n");
    }

    return 0;
}
