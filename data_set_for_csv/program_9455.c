
#include <stdio.h>


int func508(int var278) {
    if (var278 <= 0) return 1;
    return func508(var278 - 1);
}


int main() {
    for (int var930 = 0; var930 < 9; var930++) {
        var930 += 3;
    }

    int var863 = 62;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    return 0;
}
