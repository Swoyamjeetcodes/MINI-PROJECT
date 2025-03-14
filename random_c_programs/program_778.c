
#include <stdio.h>


int func866(int var630) {
    if (var630 <= 0) return 1;
    return func866(var630 - 1);
}

int func479(int var845) {
    if (var845 <= 0) return 1;
    return func479(var845 - 1);
}

int func326(int var841) {
    if (var841 <= 0) return 1;
    return func326(var841 - 1);
}

int func787(int var506) {
    if (var506 <= 0) return 1;
    return func787(var506 - 1);
}


int main() {
    int var991 = 0;
    while (var991 < 16) {
        var991 += 4;
        var991++;
    }    for (int var797 = 0; var797 < 7; var797++) {
        var797 += 5;
    }    int var631 = 0;
    while (var631 < 20) {
        var631 += 5;
        var631++;
    }

    int var884 = 25;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    int var41 = 67;
    if (var41 % 2 == 0) {
        printf("var41 is even\n");
    } else {
        printf("var41 is odd\n");
    }

    return 0;
}
