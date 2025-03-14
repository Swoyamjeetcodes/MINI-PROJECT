
#include <stdio.h>


int func678(int var724) {
    if (var724 <= 0) return 1;
    return func678(var724 - 1);
}


int main() {
    for (int var59 = 0; var59 < 9; var59++) {
        var59 += 5;
    }

    int var445 = 8;
    if (var445 % 2 == 0) {
        printf("var445 is even\n");
    } else {
        printf("var445 is odd\n");
    }

    return 0;
}
