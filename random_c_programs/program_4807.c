
#include <stdio.h>


int func612(int var974) {
    if (var974 <= 0) return 1;
    return func612(var974 - 1);
}


int main() {
    for (int var172 = 0; var172 < 5; var172++) {
        var172 += 4;
    }

    int var725 = 56;
    if (var725 % 2 == 0) {
        printf("var725 is even\n");
    } else {
        printf("var725 is odd\n");
    }

    return 0;
}
