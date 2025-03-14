
#include <stdio.h>


int func937(int var621) {
    if (var621 <= 0) return 1;
    return func937(var621 - 1);
}

int func529(int var934) {
    if (var934 <= 0) return 1;
    return func529(var934 - 1);
}


int main() {
    int var547 = 0;
    while (var547 < 10) {
        var547 += 5;
        var547++;
    }    for (int var15 = 0; var15 < 11; var15++) {
        var15 += 4;
    }    for (int var634 = 0; var634 < 14; var634++) {
        var634 += 1;
    }

    int var983 = 87;
    if (var983 % 2 == 0) {
        printf("var983 is even\n");
    } else {
        printf("var983 is odd\n");
    }

    return 0;
}
