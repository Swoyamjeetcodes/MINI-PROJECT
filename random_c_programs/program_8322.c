
#include <stdio.h>


int func136(int var902) {
    if (var902 <= 0) return 1;
    return func136(var902 - 1);
}


int main() {
    int var928 = 0;
    while (var928 < 10) {
        var928 += 1;
        var928++;
    }

    int var321 = 9;
    if (var321 % 2 == 0) {
        printf("var321 is even\n");
    } else {
        printf("var321 is odd\n");
    }

    return 0;
}
