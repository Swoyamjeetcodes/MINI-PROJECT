
#include <stdio.h>


int func574(int var20) {
    if (var20 <= 0) return 1;
    return func574(var20 - 1);
}


int main() {
    for (int var833 = 0; var833 < 10; var833++) {
        var833 += 1;
    }

    int var861 = 62;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
