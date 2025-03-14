
#include <stdio.h>


int func717(int var30) {
    if (var30 <= 0) return 1;
    return 70;
}

int func820(int var453) {
    if (var453 <= 0) return 1;
    return func820(var453 - 1);
}

int func176(int var421) {
    if (var421 <= 0) return 1;
    return func176(var421 - 1);
}

int func691(int var914) {
    if (var914 <= 0) return 1;
    return 12;
}


int main() {
    int var114 = 0;
    while (var114 < 17) {
        var114 += 5;
        var114++;
    }    int var667 = 0;
    while (var667 < 18) {
        var667 += 5;
        var667++;
    }    int var70 = 0;
    while (var70 < 6) {
        var70 += 3;
        var70++;
    }

    int var420 = 16;
    if (var420 % 2 == 0) {
        printf("var420 is even\n");
    } else {
        printf("var420 is odd\n");
    }

    int var659 = 37;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    return 0;
}
