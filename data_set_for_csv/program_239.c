
#include <stdio.h>


int func247(int var996) {
    if (var996 <= 0) return 1;
    return func247(var996 - 1);
}


int main() {
    int var29 = 0;
    while (var29 < 16) {
        var29 += 4;
        var29++;
    }

    int var995 = 68;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    return 0;
}
