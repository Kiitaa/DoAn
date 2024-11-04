#include <iostream>
#include <string>

using namespace std;

//Thong Tin Khach Hang
struct TTKH
{
    char ten[7]; //Ten 
    char soNha[10]; // So Nha
    char tenD[20]; // Ten Duong
    char tenP[10]; // Ten Phuong
    char tenQ[10]; //Ten Quan
    char tenT[10]; //Ten Tinh Thanh
    int sdt; // So Dien Thoai
};

typedef struct TTKH;

//Thong Tin San Pham (7 San Pham)
// SP = San Pham
// KL = Khoi Luong
// GT = Gia Thanh
// SL = So Luong
struct TTSP1
{
    char SP1[100] = "Chuot khong day HP";
    double KL1 = 0.06;
    double GT1 = 150.000;
    int SL1 = 150;
};

typedef struct TTSP1;

struct TTSP2
{
    char SP2[100] = "Tai nghe Bluetooth khong day";
    double KL2 = 0.15;
    double GT2 = 300.000;
    int SL2 = 200;
};

typedef struct TTSP2;

struct TTSP3
{
    char SP3[100] = "Kingston USB";
    double KL3 = 0.05;
    double GT3 = 190.000;
    int SL3 = 100;
};

typedef struct TTSP3;

struct TTSP4
{
    char SP4[100] = "Lot chuot Logitech";
    double KL4 = 0.29;
    double GT4 = 7.000;
    int SL4 = 300;
};

typedef struct TTSP4;

struct TTSP5
{
    char SP5[100] = "Day cap mang Cat6";
    double KL5 = 20.6;
    double GT5 = 115.000;
    int SL5 = 200;
};

typedef struct TTSP5;

struct TTSP6
{
    char SP6[100] = "Dong ho thong minh ";
    double KL6 = 0.38;
    double GT6 = 450.000;
    int SL6 = 100;
};

typedef struct TTSP6;

struct TTSP7
{
    char SP7[100] = "Man hinh LG 27'";
    double KL7 = 3.2;
    double GT7 = 999.999;
    int SL7 = 170;
};

typedef struct TTSP7;



int main()
{
    TTKH TTKH;
    TTSP1 TTSP1;
    TTSP2 TTSP2;
    TTSP3 TTSP3;
    TTSP4 TTSP4;
    TTSP5 TTSP5;
    TTSP6 TTSP6;
    TTSP7 TTSP7;
    int c;
    int DSSP;
    bool Exit;

    //Menu 
    cout << "-----------------------------------------------------" << endl;
    cout << "Chao mung ban den voi ung dung quan ly giao hang." << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Hay chon mot trong cac chuc nang sau: " << endl;
    cout << "1 - Nhap thong tin ca nhan." << endl;
    cout << "2 - Xem danh sach san pham." << endl;
    cout << "3 - Thoat chuong trinh." << endl;
    cout << "Hay chon mot trong cac chuc nang tren: ";
    cin >> c;
    cout << "Ban da chon:  " << c << endl;

        switch (c)
        {
        case 1:
            cout << "Thong tin ca nhan.\n";
            cout << "Hay nhap ten cua ban: ";
            cin >> TTKH.ten;
            cout << "Hay nhap so dien thoai cua ban: ";
            cin >> TTKH.sdt;
            cout << "Hay nhap so nha cua ban: ";
            cin >> TTKH.soNha;
            cout << "Hay nhap ten duong cua ban: ";
            cin >> TTKH.tenD;
            cout << "Hay nhap phuong cua ban: ";
            cin >> TTKH.tenP;
            cout << "Hay nhap quan cua ban: ";
            cin >> TTKH.tenQ;
            cout << "Hay nhap tinh cua ban: ";
            cin >> TTKH.tenT;
            cout << "Thong tin ca nhan cua ban: \n" << "Ten: " << TTKH.ten << "\n" << "So dien thoai: " << TTKH.sdt << "\n" << "So nha: " << TTKH.soNha << "\n" << "Ten duong: " << TTKH.tenD << "\n" << "Ten phuong: " << TTKH.tenP << "\n" << "Ten quan: " << TTKH.tenQ << "\n" << "Ten tinh: " << TTKH.tenT;

            break;
        case 2:
            cout << "Danh sach san pham:\n";
            cout << "-----------------------------------------" << endl;

            cout << "San pham 1: " << endl;
            cout << "Ten san pham: " << TTSP1.SP1 << endl;
            cout << "Khoi luong san pham: " << TTSP1.KL1 << " kg" << endl;
            cout << "Dong gia: " << TTSP1.GT1 << " dong" << endl;
            cout << "Ton kho:  " << TTSP1.SL1 << " cai" << endl;

            cout << "-----------------------------------------" << endl;

            cout << "San pham 2: " << endl;
            cout << "Ten san pham: " << TTSP2.SP2 << endl;
            cout << "Khoi luong san pham: " << TTSP2.KL2 << " kg" << endl;
            cout << "Dong gia: " << TTSP2.GT2 << " dong" << endl;
            cout << "Ton kho:  " << TTSP2.SL2 << " cai" << endl;

            cout << "-----------------------------------------" << endl;

            cout << "San pham 3: " << endl;
            cout << "Ten san pham: " << TTSP3.SP3 << endl;
            cout << "Khoi luong san pham: " << TTSP3.KL3 << " kg" << endl;
            cout << "Dong gia: " << TTSP3.GT3 << " dong" << endl;
            cout << "Ton kho:  " << TTSP3.SL3 << " cai" << endl;

            cout << "-----------------------------------------" << endl;

            cout << "San pham 4: " << endl;
            cout << "Ten san pham: " << TTSP4.SP4 << endl;
            cout << "Khoi luong san pham: " << TTSP4.KL4 << " kg" << endl;
            cout << "Dong gia: " << TTSP4.GT4 << " dong" << endl;
            cout << "Ton kho:  " << TTSP4.SL4 << " cai" << endl;

            cout << "-----------------------------------------" << endl;

            cout << "San pham 5: " << endl;
            cout << "Ten san pham: " << TTSP5.SP5 << endl;
            cout << "Khoi luong san pham: " << TTSP5.KL5 << endl;
            cout << "Dong gia: " << TTSP5.GT5 << " dong" << endl;
            cout << "Ton kho:  " << TTSP5.SL5 << " cai" << endl;

            cout << "-----------------------------------------" << endl;

            cout << "San pham 6: " << endl;
            cout << "Ten san pham: " << TTSP6.SP6 << endl;
            cout << "Khoi luong san pham: " << TTSP6.KL6 << " kg" << endl;
            cout << "Dong gia: " << TTSP6.GT6 << " dong" << endl;
            cout << "Ton kho:  " << TTSP6.SL6 << " cai" << endl;

            cout << "-----------------------------------------" << endl;

            cout << "San pham 7: " << endl;
            cout << "Ten san pham: " << TTSP7.SP7 << endl;
            cout << "Khoi luong san pham: " << TTSP7.KL7 << " kg" << endl;
            cout << "Dong gia: " << TTSP7.GT7 << " dong" << endl;
            cout << "Ton kho:  " << TTSP7.SL7 << " cai" << endl;

            cout << "-----------------------------------------" << endl;
            break;
        case 3:
            if (c == 3)
                break;
        default:
            cout << "Hay chon lai!\n";
        }
    return 0;
}