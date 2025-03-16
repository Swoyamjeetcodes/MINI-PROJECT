
#include <stdio.h>


int func836(int var827) {
    if (var827 <= 0) return 1;
    return func836(var827 - 1);
}

int func68(int var385) {
    if (var385 <= 0) return 1;
    return func68(var385 - 1);
}

int func770(int var681) {
    if (var681 <= 0) return 1;
    return func770(var681 - 1);
}


int main() {
    for (int var164 = 0; var164 < 14; var164++) {
        var164 += 3;
    }

    int var631 = 96;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    return 0;
}
