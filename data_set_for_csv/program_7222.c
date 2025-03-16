
#include <stdio.h>


int func339(int var813) {
    if (var813 <= 0) return 1;
    return func339(var813 - 1);
}


int main() {
    int var777 = 0;
    while (var777 < 19) {
        var777 += 2;
        var777++;
    }

    int var662 = 49;
    if (var662 % 2 == 0) {
        printf("var662 is even\n");
    } else {
        printf("var662 is odd\n");
    }

    return 0;
}
