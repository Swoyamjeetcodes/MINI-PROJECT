
#include <stdio.h>


int func423(int var47) {
    if (var47 <= 0) return 1;
    return func423(var47 - 1);
}


int main() {
    for (int var157 = 0; var157 < 11; var157++) {
        var157 += 5;
    }

    int var976 = 30;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
