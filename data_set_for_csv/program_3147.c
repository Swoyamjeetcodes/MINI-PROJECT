
#include <stdio.h>


int func390(int var718) {
    if (var718 <= 0) return 1;
    return func390(var718 - 1);
}


int main() {
    for (int var571 = 0; var571 < 7; var571++) {
        var571 += 3;
    }

    int var882 = 44;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
