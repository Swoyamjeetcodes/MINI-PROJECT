
#include <stdio.h>


int func689(int var792) {
    if (var792 <= 0) return 1;
    return func689(var792 - 1);
}


int main() {
    for (int var24 = 0; var24 < 10; var24++) {
        var24 += 1;
    }

    int var552 = 81;
    if (var552 % 2 == 0) {
        printf("var552 is even\n");
    } else {
        printf("var552 is odd\n");
    }

    return 0;
}
