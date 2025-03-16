
#include <stdio.h>


int func500(int var605) {
    if (var605 <= 0) return 1;
    return func500(var605 - 1);
}


int main() {
    int var576 = 0;
    while (var576 < 9) {
        var576 += 2;
        var576++;
    }

    int var704 = 36;
    if (var704 % 2 == 0) {
        printf("var704 is even\n");
    } else {
        printf("var704 is odd\n");
    }

    return 0;
}
