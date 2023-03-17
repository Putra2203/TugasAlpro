// judul
    //tanggal   : 17 Maret 2023\\
    //project   : Tugas Alpro
    //Nama      : Erdin Purwa Putra

#include<iostream>
using namespace std;

//kamus

int a,b;
int x,y;
int hasil,hasil1,hasil2,hasil3;

void tambah(){
    cout << "Program menambahkan angka"<<endl;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;

    hasil1 = a+b;
    cout <<"Hasilnya : "<<hasil1<<endl<<endl;
}

int kurang(int x, int y){
    return x - y;
}

int myfunction(int myArr[],int size)
{
    int sum = 0;
    for (int i =0;i<size;i++)
    {
        sum += myArr[i];
    }
    return sum;
}

float avg(int myArr[],int size) {
    float sum = 0;
    for (int i = 0;i < size;i++) {
        sum += myArr[i];
    }
    float average = sum / size;
    return average;
}

//deskripsi
int main()
{
    //penambahan
    tambah();

    //pengurangan
    cout<<"Pengurangan"<<endl;
    cout<<"Masukan angka pertama = ";
    cin >> x;
    cout<<"Masukan angka kedua = ";
    cin >> y;
    cout <<"Hasilnya = "<< kurang(x,y) <<endl;

    cout<<endl;

    //menghitung nilai total array
    int myArr[]={1,2,3,4,5};
    cout << myfunction(myArr,5) << endl;

    cout<<endl;

    //menghitung rata rata dari array
    cout << avg(myArr,5) << endl;
}
