
#include <stdio.h>


int func719(int var846) {
    if (var846 <= 0) return 1;
    return func719(var846 - 1);
}


int main() {
    for (int var361 = 0; var361 < 9; var361++) {
        var361 += 1;
    }

    int var396 = 36;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    return 0;
}
