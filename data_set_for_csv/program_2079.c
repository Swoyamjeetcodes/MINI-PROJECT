
#include <stdio.h>


int func999(int var882) {
    if (var882 <= 0) return 1;
    return func999(var882 - 1);
}


int main() {
    int var866 = 0;
    while (var866 < 7) {
        var866 += 5;
        var866++;
    }

    int var657 = 18;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
