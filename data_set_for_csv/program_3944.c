
#include <stdio.h>


int func892(int var487) {
    if (var487 <= 0) return 1;
    return func892(var487 - 1);
}


int main() {
    int var826 = 0;
    while (var826 < 20) {
        var826 += 3;
        var826++;
    }

    int var742 = 50;
    if (var742 % 2 == 0) {
        printf("var742 is even\n");
    } else {
        printf("var742 is odd\n");
    }

    return 0;
}
