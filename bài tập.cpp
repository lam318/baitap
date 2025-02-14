#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void bai1() {
    string msg = "Xin chao";
    cout << msg << endl;
}

void bai2() {
    cout << "5 + 8 = " << 5 + 8 << endl;
}

void bai3() {
    string name;
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Ten cua ban: " << name << endl;
}


void bai4() {
    int a, b;
    cout << "Nhap 2 so: ";
    cin >> a >> b;
    cout << "Tong: " << a + b << endl;
}

void bai5() {
    int a, b;
    cout << "Nhap 2 so: ";
    cin >> a >> b;
    swap(a, b);
    cout << "Sau khi hoan doi: " << a << " " << b << endl;
}

void bai6() {
    float a, b;
    cout << "Nhap 2 so: ";
    cin >> a >> b;
    cout << "Tong: " << a + b << "\n";
    cout<<" Hieu: " << a - b<< "\n";
    cout << "Tich : " << a * b<< "\n";
    cout << "Thuong : " << a / b << endl;
}

void bai7() {
    float a, b, c;
    cout << "Nhap 3 so: ";
    cin >> a >> b >> c;
    cout << "So lon nhat: " << max({ a, b, c })<<"\n";
    cout << "So nho nhat: " << min({ a, b, c }) << endl;
}

void bai8() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    vector<float> nums(n);
    float sum = 0;
    for (float& num : nums) {
        cin >> num;
        sum += num;
    }
    cout << "Trung binh cong: " << sum / n << endl;
}

void bai9() {
    float a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        float p = (a + b + c) / 2;
        cout << "Chu vi: " << (a + b + c) << "\n";
        cout<<"Dien tich: " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    }
    else {
        cout << "Ba canh vua nhap khong tao thanh tam giac hop le." << endl;
    }
}

void bai10() {
    float a, b, c;
    cout << "Nhap he so a, b, c: ";
    cin >> a >> b >> c;
    float delta = b * b - 4 * a * c;
    if (delta < 0) cout << "Phuong trinh vo nghiem." << endl;
    else if (delta == 0) cout << "Phuong trinh co nghiem kep: " << -b / (2 * a) << endl;
    else cout << "Phuong trinh co 2 nghiem: " << (-b + sqrt(delta)) / (2 * a) << " va " << (-b - sqrt(delta)) / (2 * a) << endl;
}

void bai11() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void bai12() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    bool isPrime = n > 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "La so nguyen to" : "Khong la so nguyen to") << endl;
}

void bai13() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Nhap cac phan tu: ";
    for (int& num : nums) cin >> num;
    int target;
    cout << "Nhap target: ";
    cin >> target;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return;
            }
        }
    }
    cout << "Khong tim thay cap so phu hop." << endl;
}

void bai14() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Nhap cac phan tu (cach nhau boi dau cach: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> numsResult(n);
    numsResult[0] = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
        numsResult[i] = numsResult[i - 1] + nums[i];
    }
    cout << "Mang ket qua: ";
    for (size_t i = 0; i < numsResult.size(); i++) {
        cout << numsResult[i] << (i != numsResult.size() - 1 ? " " : "\n");
    }
}

void bai15() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) cout << "FizzBuzz ";
        else if (i % 3 == 0) cout << "Fizz ";
        else if (i % 5 == 0) cout << "Buzz ";
        else cout << i << " ";
    }
    cout << endl;
}

void bai16() {
    int n, steps = 0;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 0) {
        if (n % 2 == 0) n /= 2;
        else n--;
        steps++;
    }
    cout << "So buoc: " << steps << endl;
}

void menu() {
    int choice;
    do {
        cout << "\nChon bai tap (1-16, 0 de thoat): ";
        cin >> choice;
        switch (choice) {
        case 1: bai1(); break;
        case 2: bai2(); break;
        case 3: bai3(); break;
        case 4: bai4(); break;
        case 5: bai5(); break;
        case 6: bai6(); break;
        case 7: bai7(); break;
        case 8: bai8(); break;
        case 9: bai9(); break;
        case 10: bai10(); break;
        case 11: bai11(); break;
        case 12: bai12(); break;
        case 13: bai13(); break;
        case 14: bai14(); break;
        case 15: bai15(); break;
        case 16: bai16(); break;
        case 0: cout << "Thoat chuong trinh." << endl; break;
        default: cout << "Lua chon khong hop le." << endl;
        }
    } while (choice != 0);
}

int main() {
    menu();
    return 0;
}
