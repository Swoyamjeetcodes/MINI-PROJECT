
#include <stdio.h>


int func738(int var921) {
    if (var921 <= 0) return 1;
    return func738(var921 - 1);
}


int main() {
    for (int var69 = 0; var69 < 15; var69++) {
        var69 += 5;
    }

    int var611 = 7;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    return 0;
}
