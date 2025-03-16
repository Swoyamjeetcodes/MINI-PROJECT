
#include <stdio.h>


int func500(int var995) {
    if (var995 <= 0) return 1;
    return func500(var995 - 1);
}


int main() {
    for (int var440 = 0; var440 < 19; var440++) {
        var440 += 4;
    }

    int var164 = 8;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
