#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Mengubah semua karakter string menjadi huruf kecil (setara .casefold()) */
void to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = (char)tolower((unsigned char)str[i]);
    }
}

/* Mengecek apakah needle ada di dalam haystack (setara operator 'in' Python) */
int contains(const char *haystack, const char *needle) {
    return strstr(haystack, needle) != NULL;
}

void cristiano_ronaldo() {
    char user[512];

    printf("Ronaldo: Hello! Welcome to Cristiano Ronaldo Chat Bot\n");

    while (1) {
        printf("You: ");

        /* Baca satu baris input */
        if (fgets(user, sizeof(user), stdin) == NULL) break;

        /* Hapus newline di akhir */
        user[strcspn(user, "\n")] = '\0';

        /* Ubah ke huruf kecil */
        to_lower(user);

        /* ── Pencocokan persis (==) ── */
        if (strcmp(user, "hello!") == 0) {
            printf("Ronaldo: Hello!\n");

        /* ── Pencocokan substring (in) ── */
        } else if (contains(user, "halo")) {
            printf("Ronaldo: Hello!\n");

        } else if (contains(user, "helo")) {
            printf("Ronaldo: Hello!\n");

        } else if (contains(user, "sui!")) {
            printf("Ronaldo: Sui\n");

        } else if (contains(user, "ronaldo is the goat")) {
            printf("Ronaldo: Absolutely\n");

        } else if (contains(user, "messi is trash")) {
            printf("Ronaldo: Very trash\n");

        } else if (contains(user, "messi world cup is corrupted")) {
            printf("Ronaldo: I agree\n");

        } else if (contains(user, "messi better")) {
            printf("Ronaldo: FUCK YOU\n");

        } else if (contains(user, "hala madrid")) {
            printf("Ronaldo: \xC2\xA1Hala Madrid!\n"); /* ¡Hala Madrid! dalam UTF-8 */

        /* ── Pencocokan persis untuk exit ── */
        } else if (strcmp(user, "exit") == 0) {
            printf("Ronaldo: Me is better than messi\n");
            break;

        } else {
            printf("Ronaldo: Sui\n");
        }
    }
}

int main(void) {
    cristiano_ronaldo();
    return 0;
}
