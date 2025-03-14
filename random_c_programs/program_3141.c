
#include <stdio.h>


int func670(int var37) {
    if (var37 <= 0) return 1;
    return func670(var37 - 1);
}


int main() {
    int var584 = 0;
    while (var584 < 10) {
        var584 += 5;
        var584++;
    }

    int var990 = 46;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    return 0;
}
