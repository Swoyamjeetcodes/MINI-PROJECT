
#include <stdio.h>


int func38(int var129) {
    if (var129 <= 0) return 1;
    return func38(var129 - 1);
}


int main() {
    for (int var77 = 0; var77 < 17; var77++) {
        var77 += 4;
    }

    int var128 = 7;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    int var161 = 60;
    if (var161 % 2 == 0) {
        printf("var161 is even\n");
    } else {
        printf("var161 is odd\n");
    }

    int var927 = 30;
    if (var927 % 2 == 0) {
        printf("var927 is even\n");
    } else {
        printf("var927 is odd\n");
    }

    return 0;
}
