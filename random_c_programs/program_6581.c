
#include <stdio.h>


int func912(int var439) {
    if (var439 <= 0) return 1;
    return func912(var439 - 1);
}


int main() {
    int var611 = 0;
    while (var611 < 11) {
        var611 += 3;
        var611++;
    }

    int var221 = 66;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    return 0;
}
