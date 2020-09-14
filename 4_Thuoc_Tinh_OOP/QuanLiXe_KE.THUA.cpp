#include<iostream>
using namespace std;
#include<string>
#include<conio.h>
class XE{
    protected:
	   string HoTenNguoiThue;
	   float SoGioThue;
    public:
	    void NhapThongTin(){
		   fflush(stdin);
		   cout << "\nNhap ho ten nguoi thue: ";
		   getline(cin, HoTenNguoiThue);
		   cout << "\nNhap so gio thue: ";
		   cin >> SoGioThue;
	    }
	    void XuatThongTin(){
		   cout << "\nHo ten nguoi thue: " << HoTenNguoiThue;
		   cout << "\nSo gio thue: " << SoGioThue;
	    }
};
class XEDAP : public XE{
    public:
	    float TinhTienThueXe(){
		return 10000 + ((SoGioThue - 1) * 8000);
	    }
};
class XEMAY : public XE{
    private:
	    int LoaiXe;
	    string BienSo;
    public:
	    void NhapThongTin(){
		   XE::NhapThongTin();
		   cout << "\nNhap loai xe can thue(100 - 250 phan khoi): ";
		   cin >> LoaiXe;
		   fflush(stdin);
		   cout << "\nNhap bien so: ";
		   getline(cin, BienSo);
        }
	    void XuatThongTin(){
		   XE::XuatThongTin();
		   cout << "\nLoai xe: " << LoaiXe;
		   cout << "\nBien so: " << BienSo;
	    }
	    float TinhTienThueXe(){
		   float s = 0;
		   if (LoaiXe == 100)
			   s = 150000;
		   else
			   s = 200000;
		   return s + ((SoGioThue - 1) * 100000);
	    }
	    int Getter_LoaiXe(){
		   return LoaiXe;
	    }
	    void Setter_LoaiXe(int LOAIXE){
		   LoaiXe = LOAIXE;
	    }
};
// Phương thức xuất tổng thông tin thuê xe
void Xuat_Tat_Ca_Thong_Tin_Thue_Xe(XEDAP ds_xedap[], int n, XEMAY ds_xemay[], int m){
	int dem = 1;
	cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
	for (int i = 0; i < n; i++){ // Xuất danh sách xe đạp
		cout << "\n\tTHONG TIN THUE XE DAP THU " << dem++ << endl;
		ds_xedap[i].XuatThongTin();
		cout << "\nTien thue: " << (size_t)ds_xedap[i].TinhTienThueXe();
	}
	cout << "\n\n\t\t DANH SACH THUE XE MAY\n";
	for (int i = 0; i < m; i++){ // xuất danh sách xe máy
		cout << "\n\tTHONG TIN THUE MAY THU " << dem++ << endl;
		ds_xemay[i].XuatThongTin();
		cout << "\nTien thue: " << (size_t)ds_xemay[i].TinhTienThueXe();
	}
}
// Phương thức tính tiền thuê xe đạp và xe máy
float Tinh_Tong_Tien_Thue_Xe(XEDAP ds_xedap[], int n, XEMAY ds_xemay[], int m){
	float tong = 0;
	for (int i = 0; i < n; i++){ // Duyệt DS xe đạp 		
		tong += ds_xedap[i].TinhTienThueXe();
	}
	for (int i = 0; i < m; i++){ // Duyệt DS xe máy	 	
		tong += ds_xemay[i].TinhTienThueXe();
	}
	return tong;
}
// Hàm quản lý các loại xe
void Menu(XEDAP ds_xedap[], int n, XEMAY ds_xemay[], int m){
	int luachon;
	while (true){
		system("cls");
		cout << "\n\n\t\t ====== QUAN LY XE ======";
		cout << "\n\t1. Nhap danh sach thue xe dap va xe may";
		cout << "\n\t2. Xuat tat ca thong tin thue xe";
		cout << "\n\t3. Tinh tong so tien cho thue xe dap va xe may";
		cout << "\n\t4. Xuat tat ca cac thong tin lien quan den viec cho thue xe dap";
		cout << "\n\t5. Tinh tong so tien cho thue xe may loai 250 phan khoi";
		cout << "\n\t0. Ket thuc";
		cout << "\n\n\t\t ============== END ============";

		cout << "\nNhap lua chon: ";
		cin >> luachon;

		if (luachon == 1){
			int chon;
			while (true){
				system("cls");
				cout << "\n1. Thue XE DAP";
				cout << "\n2. Thue XE MAY";
				cout << "\n0. Ket thuc";

				cout << "\nNhap loai xe muon thue: ";
				cin >> chon;

				if (chon == 1)
				{
					XEDAP x;
					cout << "\n\n\t\t NHAP THONG TIN THUE XE DAP\n";
					x.NhapThongTin();
					ds_xedap[n] = x;
					n++;
				}
				else if (chon == 2)
				{
					XEMAY x;
					cout << "\n\n\t\t NHAP THONG TIN THUE XE MAY\n";
					x.NhapThongTin();
					ds_xemay[m] = x;
					m++;
				}
				
				else
				{
					
					break;
				}
			}
		}
		else if (luachon == 2){
			Xuat_Tat_Ca_Thong_Tin_Thue_Xe(ds_xedap, n, ds_xemay, m);
			system("pause");
		}
		else if (luachon == 3){
			cout << "\n\n\t\tTONG TIEN THUE XE: " << (size_t)Tinh_Tong_Tien_Thue_Xe(ds_xedap, n, ds_xemay, m);
			system("pause");
		}
		else if (luachon == 4){
			cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
			for (int i = 0; i < n; i++){ // Xuất DS xe đạp
				cout << "\n\tTHONG TIN THUE XE DAP THU " << i + 1 << endl;
				ds_xedap[i].XuatThongTin();
				cout << "\nTien thue: " << (size_t)ds_xedap[i].TinhTienThueXe();
			}
			system("pause");
		}
		else if (luachon == 5){
			int dem = 0;
			cout << "\n\n\t\t DANH SACH THUE XE MAY LOAI 250 PHAN KHOI\n";
			for (int i = 0; i < m; i++){ // Xuất DS xe máy
				if (ds_xemay[i].Getter_LoaiXe() == 250){
					cout << "\n\tTHONG TIN THUE MAY THU " << ++dem << endl;
					ds_xemay[i].XuatThongTin();
					cout << "\nTien thue: " << (size_t)ds_xemay[i].TinhTienThueXe();
				}				
			}
			system("pause");
		}
		else
		{
			break;
		}
	}
}
int main(){
	XEDAP ds_xedap[100];
	int n = 0;
	XEMAY ds_xemay[100];
	int m = 0;
	Menu(ds_xedap, n, ds_xemay, m);
	system("pause");
	return 0;
}