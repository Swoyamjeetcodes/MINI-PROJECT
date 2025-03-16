
#include <stdio.h>


int func941(int var594) {
    if (var594 <= 0) return 1;
    return func941(var594 - 1);
}


int main() {
    int var114 = 0;
    while (var114 < 18) {
        var114 += 5;
        var114++;
    }

    int var349 = 99;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
