
#include <stdio.h>


int func310(int var131) {
    if (var131 <= 0) return 1;
    return func310(var131 - 1);
}


int main() {
    for (int var121 = 0; var121 < 11; var121++) {
        var121 += 1;
    }

    int var126 = 5;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    return 0;
}
