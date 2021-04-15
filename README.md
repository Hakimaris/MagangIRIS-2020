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
    int **dbPtr = &ptr; // (**) disini menunjukan double pointer

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
### Pass by Value
Pass by Value berarti saat kita memasukkan (passing) argumen pada fungsi, nilai dari argumen tersebut akan disalin ke variabel yang berada pada parameter fungsi. Karena hanya nilainya saja yang diterima oleh fungsi, perubahan yang terjadi pada variabel parameter fungsi tidak akan berpengaruh terhadap variabel asalnya.

Contoh:
```
void change(int a, int b)
{
    a = a + 5;
    b = b + 5;
}

int main()
{
    int x = 10, y = 6;
    change(x, y);
    printf("%d %d\n", x, y);

    return 0;
}
```
Nilai pada variabel x dan y tidak berubah karena metode passing yang digunakan adalah Pass by Value.

### Pass by Address/Reference
Berbeda dengan sebelumnya, sesuai namanya, metode Pass by Address berarti argumen yang dimasukkan (passing) ke parameter fungsi adalah alamat memori variabel. Segala perubahan yang terjadi pada variabel tersebut, juga mempengaruhi langsung ke variabel asalnya. Hal ini terjadi karena argumennya adalah langsung berupa alamat memorinya.

```
void change(int *a, int *b)
{
    *a = *a + 5;
    *b = *b + 5;
}

int main()
{
    int x = 10, y = 6;
    change(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}
```
Karena parameternya menerima alamat memori, maka variabel parameternya harus berupa pointer.

#tugas
### tugas 1
Buat fungsi untuk menukar nilai dari 2 variabel menggunakan pointer !
jawaban saya :
```
#include <stdio.h>
// tugas : tukar angka menggunakan pointer
void tukar(int *a,int *b){ // subprogram untuk menukar
    int temp = 1;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=5,b=3;
    tukar(&a,&b); 
    printf("%d %d", a,b);
    return 0;
}
```
### tugas 2
Buat fungsi untuk membalik sebuah array menggunakan pointer !
```
#include <stdio.h>

void tukar(int *a,int *b){ // subprogram untuk menukar
    int temp = 1;
    temp=*a;
    *a=*b;
    *b=temp;
}

void balik(int *arr){
    for(int i = 0, j = 4; i<2 ;i++){
        tukar(&arr[i], &arr[j]);
        j--;
    }
}

int main(){
    int num[] = {1, 2, 3, 4, 5};
    balik(num);
    for (int i =0; i < 5; i++)
    {printf ("%d ", num[i]);}
}
```
### tugas 3
Cari soal tentang penerapan pointer dan kerjakan !
soal yang digunakan =
https://www.hackerrank.com/challenges/pointer-in-c/problem

```
#include <stdio.h>
#include <math.h> // <<-- buat absolutenya include ginian 
// source https://www.hackerrank.com/challenges/pointer-in-c/problem
void update(int *a,int *b) {
    // Complete this function 
    int temp = *a;   
    *a = (*a+*b);
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
```

## sumber yang digunakan
https://bundet.com/d/995-pengertian-pointer-dalam-c
https://github.com/AlproITS/DasarPemrograman/wiki/Modul-4:-Pointer-dan-Struct#deklarasi-variabel-pointer
https://www.hackerrank.com/challenges/pointer-in-c/problem
