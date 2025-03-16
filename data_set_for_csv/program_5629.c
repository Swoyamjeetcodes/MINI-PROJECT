
#include <stdio.h>


int func572(int var449) {
    if (var449 <= 0) return 1;
    return func572(var449 - 1);
}


int main() {
    for (int var71 = 0; var71 < 5; var71++) {
        var71 += 3;
    }

    int var477 = 56;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    return 0;
}
