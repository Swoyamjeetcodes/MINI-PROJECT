
#include <stdio.h>


int func847(int var221) {
    if (var221 <= 0) return 1;
    return func847(var221 - 1);
}


int main() {
    int var693 = 0;
    while (var693 < 18) {
        var693 += 3;
        var693++;
    }

    int var353 = 76;
    if (var353 % 2 == 0) {
        printf("var353 is even\n");
    } else {
        printf("var353 is odd\n");
    }

    return 0;
}
