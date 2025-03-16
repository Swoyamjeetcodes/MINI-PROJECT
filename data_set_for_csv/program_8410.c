
#include <stdio.h>


int func670(int var849) {
    if (var849 <= 0) return 1;
    return func670(var849 - 1);
}


int main() {
    for (int var755 = 0; var755 < 13; var755++) {
        var755 += 1;
    }

    int var478 = 21;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    return 0;
}
