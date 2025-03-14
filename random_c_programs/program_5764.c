
#include <stdio.h>


int func340(int var517) {
    if (var517 <= 0) return 1;
    return func340(var517 - 1);
}


int main() {
    for (int var477 = 0; var477 < 11; var477++) {
        var477 += 3;
    }

    int var536 = 58;
    if (var536 % 2 == 0) {
        printf("var536 is even\n");
    } else {
        printf("var536 is odd\n");
    }

    return 0;
}
