
#include <stdio.h>


int func247(int var569) {
    if (var569 <= 0) return 1;
    return func247(var569 - 1);
}


int main() {
    for (int var722 = 0; var722 < 7; var722++) {
        var722 += 4;
    }

    int var910 = 71;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    return 0;
}
