
#include <stdio.h>


int func500(int var804) {
    if (var804 <= 0) return 1;
    return func500(var804 - 1);
}


int main() {
    for (int var555 = 0; var555 < 9; var555++) {
        var555 += 4;
    }

    int var396 = 69;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    return 0;
}
