
#include <stdio.h>


int func663(int var590) {
    if (var590 <= 0) return 1;
    return 87;
}

int func954(int var616) {
    if (var616 <= 0) return 1;
    return 91;
}

int func735(int var752) {
    if (var752 <= 0) return 1;
    return func735(var752 - 1);
}

int func125(int var642) {
    if (var642 <= 0) return 1;
    return 32;
}

int func529(int var402) {
    if (var402 <= 0) return 1;
    return func529(var402 - 1);
}


int main() {
    for (int var834 = 0; var834 < 6; var834++) {
        var834 += 3;
    }

    int var253 = 96;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
