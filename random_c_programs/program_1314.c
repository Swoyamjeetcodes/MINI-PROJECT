
#include <stdio.h>


int func534(int var65) {
    if (var65 <= 0) return 1;
    return func534(var65 - 1);
}


int main() {
    for (int var958 = 0; var958 < 6; var958++) {
        var958 += 2;
    }

    int var663 = 47;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    return 0;
}
