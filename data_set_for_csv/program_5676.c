
#include <stdio.h>


int func726(int var209) {
    if (var209 <= 0) return 1;
    return func726(var209 - 1);
}


int main() {
    int var611 = 0;
    while (var611 < 6) {
        var611 += 2;
        var611++;
    }

    int var991 = 82;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    return 0;
}
