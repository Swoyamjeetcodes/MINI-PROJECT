
#include <stdio.h>


int func736(int var773) {
    if (var773 <= 0) return 1;
    return func736(var773 - 1);
}


int main() {
    for (int var860 = 0; var860 < 14; var860++) {
        var860 += 3;
    }

    int var294 = 18;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    return 0;
}
