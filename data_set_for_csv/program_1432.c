
#include <stdio.h>


int func159(int var633) {
    if (var633 <= 0) return 1;
    return 8;
}

int func162(int var969) {
    if (var969 <= 0) return 1;
    return func162(var969 - 1);
}

int func841(int var19) {
    if (var19 <= 0) return 1;
    return func841(var19 - 1);
}

int func981(int var201) {
    if (var201 <= 0) return 1;
    return 48;
}


int main() {
    for (int var29 = 0; var29 < 11; var29++) {
        var29 += 1;
    }

    int var240 = 26;
    if (var240 % 2 == 0) {
        printf("var240 is even\n");
    } else {
        printf("var240 is odd\n");
    }

    int var956 = 23;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
