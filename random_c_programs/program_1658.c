
#include <stdio.h>


int func762(int var560) {
    if (var560 <= 0) return 1;
    return func762(var560 - 1);
}


int main() {
    int var611 = 0;
    while (var611 < 17) {
        var611 += 1;
        var611++;
    }

    int var924 = 11;
    if (var924 % 2 == 0) {
        printf("var924 is even\n");
    } else {
        printf("var924 is odd\n");
    }

    return 0;
}
