
#include <stdio.h>


int func773(int var416) {
    if (var416 <= 0) return 1;
    return func773(var416 - 1);
}


int main() {
    for (int var537 = 0; var537 < 19; var537++) {
        var537 += 5;
    }

    int var300 = 63;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var795 = 24;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
