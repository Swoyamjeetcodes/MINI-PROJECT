
#include <stdio.h>


int func492(int var292) {
    if (var292 <= 0) return 1;
    return func492(var292 - 1);
}


int main() {
    int var866 = 0;
    while (var866 < 9) {
        var866 += 3;
        var866++;
    }    int var107 = 0;
    while (var107 < 11) {
        var107 += 1;
        var107++;
    }

    int var155 = 72;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    int var43 = 31;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var925 = 68;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    return 0;
}
