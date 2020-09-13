#include <iostream>
using namespace std;
class point {
    /*khai báo các thành phần dữ liệu riêng*/
    private:
        int x,y;
    /*khai báo các hàm thành phần công cộng*/
    public:
        void init(int ox, int oy);
        void move(int dx, int dy);
        void display();
};
void point::init(int ox, int oy) {
    cout<<"Ham thanh phan init\n";
    x = ox; y = oy;
    /*x,y là các thành phần của đối tượng gọi hàm thành phần*/
}
void point::move(int dx, int dy) {
    cout<<"Ham thanh phan move\n";
    x += dx; y += dy;
}
void point::display() {
    cout<<"Ham thanh phan display\n";
    cout<<"Toa do: "<<x<<" "<<y<<"\n";
}
int main(){
    point p;
    p.init(2,4); /*gọi hàm thành phần từ đối tượng*/
    p.display();
    p.move(1,2);
    p.display();
    return 0;
}