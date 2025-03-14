
#include <stdio.h>


int func574(int var875) {
    if (var875 <= 0) return 1;
    return func574(var875 - 1);
}

int func974(int var333) {
    if (var333 <= 0) return 1;
    return func974(var333 - 1);
}


int main() {
    for (int var752 = 0; var752 < 5; var752++) {
        var752 += 3;
    }    int var867 = 0;
    while (var867 < 15) {
        var867 += 3;
        var867++;
    }

    int var225 = 1;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    int var984 = 32;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    int var738 = 28;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    return 0;
}
