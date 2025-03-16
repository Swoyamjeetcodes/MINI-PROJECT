
#include <stdio.h>


int func126(int var708) {
    if (var708 <= 0) return 1;
    return func126(var708 - 1);
}

int func322(int var867) {
    if (var867 <= 0) return 1;
    return func322(var867 - 1);
}

int func922(int var686) {
    if (var686 <= 0) return 1;
    return 70;
}


int main() {
    for (int var547 = 0; var547 < 20; var547++) {
        var547 += 1;
    }

    int var44 = 17;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    return 0;
}
