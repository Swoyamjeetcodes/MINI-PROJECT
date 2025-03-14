
#include <stdio.h>


int func314(int var573) {
    if (var573 <= 0) return 1;
    return func314(var573 - 1);
}


int main() {
    for (int var307 = 0; var307 < 6; var307++) {
        var307 += 4;
    }

    int var779 = 41;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    return 0;
}
