# Rankuman IRIS Pertemuan ke-3
## tanggal 13 april 2021 by Fatih Rian Hibatul Hakim

### Pointer
  Pointer adalah suatu variabel penunjuk, berisi nilai yang menunjuk alamat suatu lokasi memori tertentu. Jadi pointer tidak berisi nilai data, melainkan berisi suatu alamat         memori. Lokasi memori tersebut bisa diwakili sebuah variabel atau juga berupa alamat memori secara langsung.  
  
  operator yang digunakan pada tipe data pointer ada dua: deference(&) dan reference (*)
  
### 1. Pointer Deference
  Operator ini biasanya disebut dengan **address of** atau operator alamat. Dengan menggunakan operator deference (&) ini, suatu variabel akan menghasilkan alamat memori.
  Contoh : 
```
    int x = 5;
    cout <<&x; // menggunakan (&) untuk dereference
```
  pada code tersebut, output yang akan keluar adalah address dari `int x` yaitu `0x61febc`. yang muncul akan berbeda-beda tergantung dari memori PC anda.
  
### 2. Pointer reference
  Operator ini biasanya disebut **value pointed by**. Dengan menggunakan operator ini, kita dapat mengakses secara langsung nilai yang terdapat pada suatu alamat memori.
  contoh :
```
    int x = 5;
    cout <<*&x; // menggunakan asterisk (*) untuk reference
```
  pada code tersebut, output yang muncul adalah nilai yang diberikan dari address tersebut yaitu `5`

### Double Pointer
  Variabel pointer juga dapat menunjuk variabel pointer lainnya. Hal ini disebut dengan **double pointer (pointer to pointer)**. Untuk mendeklarasikan variabel double pointer,     digunakan dua simbol asterisk. Kegunaan paling umum dari variabel double pointer adalah untuk membuat array dua dimensi secara dinamis.
  contoh :
```

{
    int var = 23;
    int *ptr = &var;
    int **dbPtr = &ptr; //** dusuni menunjukan double pointer

    printf("%d\n", **dbPtr);
    
    return 0;
}
```

### Pointer dan Array
  pointer juga bisa digunakan dengan array. pada array, pointer hanya perlu **menunjukan alamat elemen pertama saja** karena alamat array dalam memori sudah disusun secara berurutan.
  contoh : 
```
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; ++i) {
        printf("&arr[%d] => %p\n", i, &arr[i]);
    }
    printf("Address of arr => %p\n", arr);
    return 0;
}
```
output dari code tersebut adalah sebagai berikut : 
```
&arr[0] => 0061feb8 // address pada array ke 0
&arr[1] => 0061febc // address pada array ke 1
&arr[2] => 0061fec0 // address pada array ke 2
&arr[3] => 0061fec4 // address pada array ke 3
&arr[4] => 0061fec8 // address pada array ke 4
Address of arr => 0061feb8 // address dari array itu sendiri
```
