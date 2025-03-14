
#include <stdio.h>


int func968(int var846) {
    if (var846 <= 0) return 1;
    return func968(var846 - 1);
}


int main() {
    for (int var871 = 0; var871 < 12; var871++) {
        var871 += 5;
    }

    int var959 = 51;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    return 0;
}
