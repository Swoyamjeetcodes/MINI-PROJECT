
#include <stdio.h>


int func229(int var966) {
    if (var966 <= 0) return 1;
    return func229(var966 - 1);
}


int main() {
    for (int var690 = 0; var690 < 12; var690++) {
        var690 += 3;
    }

    int var564 = 12;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    return 0;
}
