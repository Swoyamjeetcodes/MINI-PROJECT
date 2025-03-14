
#include <stdio.h>


int func699(int var29) {
    if (var29 <= 0) return 1;
    return func699(var29 - 1);
}


int main() {
    int var888 = 0;
    while (var888 < 17) {
        var888 += 5;
        var888++;
    }

    int var799 = 80;
    if (var799 % 2 == 0) {
        printf("var799 is even\n");
    } else {
        printf("var799 is odd\n");
    }

    int var385 = 68;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    return 0;
}
