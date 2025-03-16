
#include <stdio.h>


int func172(int var373) {
    if (var373 <= 0) return 1;
    return func172(var373 - 1);
}


int main() {
    int var425 = 0;
    while (var425 < 17) {
        var425 += 5;
        var425++;
    }

    int var611 = 22;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    return 0;
}
