
#include <stdio.h>


int func765(int var298) {
    if (var298 <= 0) return 1;
    return func765(var298 - 1);
}


int main() {
    int var425 = 0;
    while (var425 < 15) {
        var425 += 4;
        var425++;
    }

    int var998 = 10;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    return 0;
}
