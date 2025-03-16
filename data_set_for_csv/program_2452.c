
#include <stdio.h>


int func241(int var34) {
    if (var34 <= 0) return 1;
    return func241(var34 - 1);
}


int main() {
    int var717 = 0;
    while (var717 < 6) {
        var717 += 1;
        var717++;
    }

    int var258 = 3;
    if (var258 % 2 == 0) {
        printf("var258 is even\n");
    } else {
        printf("var258 is odd\n");
    }

    return 0;
}
