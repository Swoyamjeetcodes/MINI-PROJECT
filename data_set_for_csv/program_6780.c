
#include <stdio.h>


int func253(int var342) {
    if (var342 <= 0) return 1;
    return func253(var342 - 1);
}


int main() {
    for (int var206 = 0; var206 < 6; var206++) {
        var206 += 2;
    }

    int var833 = 56;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
