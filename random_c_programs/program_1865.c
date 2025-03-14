
#include <stdio.h>


int func574(int var608) {
    if (var608 <= 0) return 1;
    return func574(var608 - 1);
}


int main() {
    for (int var903 = 0; var903 < 6; var903++) {
        var903 += 4;
    }    for (int var868 = 0; var868 < 6; var868++) {
        var868 += 5;
    }

    int var564 = 44;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    int var473 = 22;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    return 0;
}
