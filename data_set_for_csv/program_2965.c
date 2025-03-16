
#include <stdio.h>


int func327(int var520) {
    if (var520 <= 0) return 1;
    return func327(var520 - 1);
}


int main() {
    for (int var807 = 0; var807 < 8; var807++) {
        var807 += 1;
    }

    int var844 = 13;
    if (var844 % 2 == 0) {
        printf("var844 is even\n");
    } else {
        printf("var844 is odd\n");
    }

    return 0;
}
