# README
# Pendahuluan
Pada praktikum dasprog kali ini dengan kode P1, terdapat tugas asistensi untuk membuat suatu program mesin kasir sederhana dengan bahasa C, yang terdapat harga barang, jumlah barang, dll.
## Input dan Output
Pada program ini input dan outputnya bergantung pada pengguna, sebab pada awal program ini di-run pengguna disuruh untuk memasukkan jumlah jenis barang yang ingin dibeli, apa nama dari barang tersebut, berapa harga dari barang tersebut, dan berapa banyak barang tersebut yang dibeli. Sehingga, outputnya akan menampilkan harga total dari barang yang ingin dibeli.

## Penjelasan program
pada, fungsi Item, yaitu tipe data khusus yang menyimpan informasi tentang barang yang dibeli, mempunyai 
nama: Nama barang (dibatasi maksimal 49 karakter untuk mencegah overflow) menggunakan array,
harga: Harga barang dalam format float. 
jumlah: Jumlah barang yang dibeli, disimpan sebagai int.

Pada fungsi struk ini bertanggung jawab untuk menampilkan struk belanja.
Parameter:
#items[]: Array dari barang-barang yang dibeli.
#count: Jumlah barang yang dibeli.
Di dalam fungsi:
#subtotal dihitung untuk setiap barang (harga dikali jumlah).
#Nama barang, jumlah, dan subtotal ditampilkan.
#total keseluruhan dihitung dengan menjumlahkan semua subtotal.
#Setelah selesai, total keseluruhan ditampilkan. (output)

#fungsi
Deklarasi variabel:

items[10]: Array yang dapat menyimpan hingga 10 barang.
count: Menyimpan jumlah barang yang akan dimasukkan oleh pengguna.
Input jumlah barang: Program meminta pengguna untuk memasukkan berapa jumlah barang yang akan dibeli. Input tersebut disimpan dalam variabel count.

Validasi jumlah barang:

Jika jumlah barang tidak valid (kurang dari 1 atau lebih dari 10), program akan mengeluarkan pesan kesalahan dan berhenti.
Input detail barang:

Untuk setiap barang, pengguna akan diminta untuk memasukkan nama, harga, dan jumlah barang.
Nama barang dibatasi maksimum 49 karakter untuk mencegah kesalahan memori.
Menampilkan struk:

Setelah semua data dimasukkan, fungsi Struk dipanggil untuk mencetak struk belanja, termasuk nama barang, jumlah, subtotal, dan total harga keseluruhan.
