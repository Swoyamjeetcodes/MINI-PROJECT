
#include <stdio.h>


int func688(int var846) {
    if (var846 <= 0) return 1;
    return func688(var846 - 1);
}


int main() {
    int var854 = 0;
    while (var854 < 16) {
        var854 += 1;
        var854++;
    }

    int var114 = 83;
    if (var114 % 2 == 0) {
        printf("var114 is even\n");
    } else {
        printf("var114 is odd\n");
    }

    return 0;
}
