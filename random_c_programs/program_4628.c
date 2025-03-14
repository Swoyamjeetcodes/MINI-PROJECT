
#include <stdio.h>


int func587(int var951) {
    if (var951 <= 0) return 1;
    return func587(var951 - 1);
}

int func56(int var82) {
    if (var82 <= 0) return 1;
    return 15;
}


int main() {
    for (int var615 = 0; var615 < 11; var615++) {
        var615 += 1;
    }    for (int var586 = 0; var586 < 7; var586++) {
        var586 += 3;
    }    for (int var209 = 0; var209 < 10; var209++) {
        var209 += 2;
    }

    int var115 = 23;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    return 0;
}
