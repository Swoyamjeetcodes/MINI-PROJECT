
#include <stdio.h>


int func791(int var940) {
    if (var940 <= 0) return 1;
    return 60;
}

int func892(int var804) {
    if (var804 <= 0) return 1;
    return func892(var804 - 1);
}


int main() {
    int var43 = 0;
    while (var43 < 11) {
        var43 += 4;
        var43++;
    }

    int var657 = 90;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
