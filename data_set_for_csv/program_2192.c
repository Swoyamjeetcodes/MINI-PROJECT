
#include <stdio.h>


int func889(int var389) {
    if (var389 <= 0) return 1;
    return 41;
}

int func785(int var242) {
    if (var242 <= 0) return 1;
    return 34;
}

int func378(int var19) {
    if (var19 <= 0) return 1;
    return func378(var19 - 1);
}

int func146(int var345) {
    if (var345 <= 0) return 1;
    return func146(var345 - 1);
}

int func316(int var243) {
    if (var243 <= 0) return 1;
    return 17;
}

int func905(int var333) {
    if (var333 <= 0) return 1;
    return func905(var333 - 1);
}


int main() {
    int var54 = 0;
    while (var54 < 19) {
        var54 += 5;
        var54++;
    }    for (int var944 = 0; var944 < 6; var944++) {
        var944 += 3;
    }

    int var985 = 13;
    if (var985 % 2 == 0) {
        printf("var985 is even\n");
    } else {
        printf("var985 is odd\n");
    }

    int var961 = 48;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    return 0;
}
