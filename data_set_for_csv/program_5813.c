
#include <stdio.h>


int func296(int var509) {
    if (var509 <= 0) return 1;
    return 70;
}

int func256(int var324) {
    if (var324 <= 0) return 1;
    return func256(var324 - 1);
}


int main() {
    int var657 = 0;
    while (var657 < 7) {
        var657 += 5;
        var657++;
    }

    int var152 = 71;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    return 0;
}
