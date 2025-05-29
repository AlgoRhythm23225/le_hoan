#include <iostream>
#include <cmath>

class phuong_trinh_bac_hai {
private:
    float a, b, c;

public:
    phuong_trinh_bac_hai(float a, float b, float c) : a(a), b(b), c(c) {}

    void solve() {
        if (a == 0) {
            if (b == 0) {
                if (c == 0)
                    std::cout << "Phuong trinh vo so nghiem.\n";
                else
                    std::cout << "Phuong trinh vo nghiem.\n";
            }
            else {
                float x = -c / b;
                std::cout << "Phuong trinh bac nhat co nghiem: x = " << x << "\n";
            }
        }
        else {
            float delta = b * b - 4 * a * c;
            if (delta > 0) {
                float x1 = (-b + sqrtf(delta)) / (2 * a);
                float x2 = (-b - sqrtf(delta)) / (2 * a);
                std::cout << "Phuong trinh co 2 nghiem phan biet:\n";
                std::cout << "x1 = " << x1 << ", x2 = " << x2 << "\n";
            }
            else if (delta == 0) {
                float x = -b / (2 * a);
                std::cout << "Phuong trinh co nghiem kep: x = " << x << "\n";
            }
            else {
                std::cout << "Phuong trinh vo nghiem (delta < 0).\n";
            }
        }
    }
};

void main() 
{
    float a, b, c;
    std::cout << "Nhap a, b, c: ";
    std::cin >> a >> b >> c;

    phuong_trinh_bac_hai eq(a, b, c);
    eq.solve();
}
