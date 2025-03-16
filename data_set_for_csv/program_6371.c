
#include <stdio.h>


int func175(int var887) {
    if (var887 <= 0) return 1;
    return func175(var887 - 1);
}


int main() {
    for (int var701 = 0; var701 < 19; var701++) {
        var701 += 1;
    }

    int var968 = 13;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    return 0;
}
