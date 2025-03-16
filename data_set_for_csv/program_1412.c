
#include <stdio.h>


int func455(int var582) {
    if (var582 <= 0) return 1;
    return func455(var582 - 1);
}

int func84(int var696) {
    if (var696 <= 0) return 1;
    return func84(var696 - 1);
}


int main() {
    for (int var462 = 0; var462 < 18; var462++) {
        var462 += 3;
    }

    int var77 = 6;
    if (var77 % 2 == 0) {
        printf("var77 is even\n");
    } else {
        printf("var77 is odd\n");
    }

    return 0;
}
