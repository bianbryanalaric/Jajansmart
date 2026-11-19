print("=== JAJANSMART ===")
print("Aplikasi Pengelola Uang Jajan\n")

uang_saku = float(input("Masukkan uang saku: Rp"))
makan = float(input("Masukkan biaya makan: Rp"))
transport = float(input("Masukkan biaya transportasi: Rp"))

total_pengeluaran = makan + transport
sisa_uang = uang_saku - total_pengeluaran
rata_rata = total_pengeluaran / 2

print("\n=== HASIL PERHITUNGAN ===")
print(f"Uang saku          : Rp{uang_saku:,.0f}")
print(f"Total pengeluaran  : Rp{total_pengeluaran:,.0f}")
print(f"Sisa uang          : Rp{sisa_uang:,.0f}")
print(f"Rata-rata biaya    : Rp{rata_rata:,.0f}")

if sisa_uang >= 0:
    print("Keterangan         : Uang masih cukup.")
else:
    print("Keterangan         : Pengeluaran melebihi uang saku.")
