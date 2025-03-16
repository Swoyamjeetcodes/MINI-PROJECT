
#include <stdio.h>


int func414(int var770) {
    if (var770 <= 0) return 1;
    return func414(var770 - 1);
}


int main() {
    int var564 = 0;
    while (var564 < 15) {
        var564 += 2;
        var564++;
    }

    int var22 = 8;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    return 0;
}
