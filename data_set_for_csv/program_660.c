
#include <stdio.h>


int func611(int var966) {
    if (var966 <= 0) return 1;
    return func611(var966 - 1);
}


int main() {
    for (int var119 = 0; var119 < 12; var119++) {
        var119 += 4;
    }

    int var60 = 28;
    if (var60 % 2 == 0) {
        printf("var60 is even\n");
    } else {
        printf("var60 is odd\n");
    }

    return 0;
}
