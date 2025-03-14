
#include <stdio.h>


int func95(int var671) {
    if (var671 <= 0) return 1;
    return 70;
}

int func877(int var933) {
    if (var933 <= 0) return 1;
    return func877(var933 - 1);
}

int func806(int var455) {
    if (var455 <= 0) return 1;
    return func806(var455 - 1);
}

int func45(int var225) {
    if (var225 <= 0) return 1;
    return 10;
}


int main() {
    int var843 = 0;
    while (var843 < 15) {
        var843 += 5;
        var843++;
    }    int var994 = 0;
    while (var994 < 19) {
        var994 += 3;
        var994++;
    }    for (int var498 = 0; var498 < 7; var498++) {
        var498 += 4;
    }

    int var238 = 4;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    int var682 = 39;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    return 0;
}
