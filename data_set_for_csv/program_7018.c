
#include <stdio.h>


int func66(int var449) {
    if (var449 <= 0) return 1;
    return func66(var449 - 1);
}


int main() {
    for (int var223 = 0; var223 < 12; var223++) {
        var223 += 2;
    }

    int var286 = 4;
    if (var286 % 2 == 0) {
        printf("var286 is even\n");
    } else {
        printf("var286 is odd\n");
    }

    return 0;
}
