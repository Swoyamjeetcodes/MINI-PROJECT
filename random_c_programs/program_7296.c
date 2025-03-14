
#include <stdio.h>


int func67(int var529) {
    if (var529 <= 0) return 1;
    return func67(var529 - 1);
}


int main() {
    for (int var307 = 0; var307 < 18; var307++) {
        var307 += 2;
    }

    int var766 = 22;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    return 0;
}
