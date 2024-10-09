#include <stdio.h>

typedef struct {
    char nama[50];
    float harga;
    int jumlah;
} Item;

void tampilkanStruk(Item items[], int count) {
    float total = 0;
    printf("====== Struk Belanja ====== \n");
    for (int i = 0; i < count; i++) {
        float subtotal = items[i].harga * items[i].jumlah;
        printf("%s (x%d): %.2f\n", items[i].nama, items[i].jumlah, subtotal);
        total += subtotal;
    }
    printf("===========================\n");
    printf("Total: %.2f\n", total);
}

int main() {
    Item items[10];
    int count;

    // Minta pengguna untuk memasukkan jumlah item yang akan dibeli
    printf("Masukkan jumlah item (maksimal 10): ");
    scanf("%d", &count);

    // Validasi jumlah item yang dimasukkan
    if (count < 1 || count > 10) {
        printf("Jumlah item tidak valid. Masukkan jumlah antara 1 hingga 10.\n");
        return 1;  // Menghentikan program jika input tidak valid
    }

    for (int i = 0; i < count; i++) {
        printf("Masukkan nama item %d: ", i + 1);
        scanf("%49s", items[i].nama);  // Membatasi input nama agar tidak melebihi 49 karakter
        printf("Masukkan harga item %d: ", i + 1);
        scanf("%f", &items[i].harga);
        printf("Masukkan jumlah item %d: ", i + 1);
        scanf("%d", &items[i].jumlah);
    }

    tampilkanStruk(items, count);
    return 0;
}
