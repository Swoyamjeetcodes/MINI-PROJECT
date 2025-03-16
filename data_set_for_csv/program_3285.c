
#include <stdio.h>


int func405(int var718) {
    if (var718 <= 0) return 1;
    return func405(var718 - 1);
}

int func933(int var446) {
    if (var446 <= 0) return 1;
    return func933(var446 - 1);
}

int func469(int var964) {
    if (var964 <= 0) return 1;
    return 67;
}


int main() {
    for (int var722 = 0; var722 < 18; var722++) {
        var722 += 5;
    }    for (int var717 = 0; var717 < 15; var717++) {
        var717 += 5;
    }

    int var987 = 31;
    if (var987 % 2 == 0) {
        printf("var987 is even\n");
    } else {
        printf("var987 is odd\n");
    }

    int var670 = 69;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    int var829 = 94;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    return 0;
}
