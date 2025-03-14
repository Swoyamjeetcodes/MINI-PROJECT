
#include <stdio.h>


int func712(int var933) {
    if (var933 <= 0) return 1;
    return func712(var933 - 1);
}


int main() {
    for (int var923 = 0; var923 < 19; var923++) {
        var923 += 3;
    }

    int var54 = 17;
    if (var54 % 2 == 0) {
        printf("var54 is even\n");
    } else {
        printf("var54 is odd\n");
    }

    return 0;
}
