
#include <stdio.h>


int func636(int var425) {
    if (var425 <= 0) return 1;
    return func636(var425 - 1);
}


int main() {
    for (int var237 = 0; var237 < 19; var237++) {
        var237 += 4;
    }

    int var643 = 75;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
