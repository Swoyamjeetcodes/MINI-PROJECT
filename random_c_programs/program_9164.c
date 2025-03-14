
#include <stdio.h>


int func500(int var564) {
    if (var564 <= 0) return 1;
    return func500(var564 - 1);
}

int func50(int var636) {
    if (var636 <= 0) return 1;
    return 16;
}


int main() {
    int var693 = 0;
    while (var693 < 17) {
        var693 += 5;
        var693++;
    }

    int var798 = 40;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    int var411 = 31;
    if (var411 % 2 == 0) {
        printf("var411 is even\n");
    } else {
        printf("var411 is odd\n");
    }

    return 0;
}
