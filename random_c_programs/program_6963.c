
#include <stdio.h>


int func957(int var770) {
    if (var770 <= 0) return 1;
    return func957(var770 - 1);
}


int main() {
    for (int var779 = 0; var779 < 15; var779++) {
        var779 += 1;
    }    for (int var314 = 0; var314 < 11; var314++) {
        var314 += 2;
    }

    int var606 = 65;
    if (var606 % 2 == 0) {
        printf("var606 is even\n");
    } else {
        printf("var606 is odd\n");
    }

    int var668 = 34;
    if (var668 % 2 == 0) {
        printf("var668 is even\n");
    } else {
        printf("var668 is odd\n");
    }

    return 0;
}
