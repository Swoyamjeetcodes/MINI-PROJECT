
#include <stdio.h>


int func909(int var682) {
    if (var682 <= 0) return 1;
    return func909(var682 - 1);
}


int main() {
    for (int var243 = 0; var243 < 13; var243++) {
        var243 += 1;
    }

    int var827 = 100;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    int var409 = 79;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    return 0;
}
