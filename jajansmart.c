#include <stdio.h>

int main() {
    float uangSaku, makan, transport;
    float totalPengeluaran, sisaUang, rataRata;

    printf("=== JAJANSMART ===\n");
    printf("Aplikasi Pengelola Uang Jajan\n\n");

    printf("Masukkan uang saku: Rp");
    scanf("%f", &uangSaku);

    printf("Masukkan biaya makan: Rp");
    scanf("%f", &makan);

    printf("Masukkan biaya transportasi: Rp");
    scanf("%f", &transport);

    totalPengeluaran = makan + transport;
    sisaUang = uangSaku - totalPengeluaran;
    rataRata = totalPengeluaran / 2;

    printf("\n=== HASIL PERHITUNGAN ===\n");
    printf("Uang saku          : Rp%.0f\n", uangSaku);
    printf("Total pengeluaran  : Rp%.0f\n", totalPengeluaran);
    printf("Sisa uang          : Rp%.0f\n", sisaUang);
    printf("Rata-rata biaya    : Rp%.0f\n", rataRata);

    if (sisaUang >= 0) {
        printf("Keterangan         : Uang masih cukup.\n");
    } else {
        printf("Keterangan         : Pengeluaran melebihi uang saku.\n");
    }

    return 0;
}
