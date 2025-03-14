
#include <stdio.h>


int func71(int var662) {
    if (var662 <= 0) return 1;
    return func71(var662 - 1);
}


int main() {
    for (int var631 = 0; var631 < 7; var631++) {
        var631 += 4;
    }

    int var958 = 72;
    if (var958 % 2 == 0) {
        printf("var958 is even\n");
    } else {
        printf("var958 is odd\n");
    }

    return 0;
}
