#include <iostream>
#include <string>
#include <cctype>

// ==================== 1. ĐỊNH NGHĨA LỚP VIGENERE ====================
class Vigenere {
private:
    std::string key;

    // Hàm chuẩn hóa từ khóa thành chữ in hoa
    std::string prepareKey(const std::string& rawKey) {
        std::string processed = "";
        for (char c : rawKey) {
            if (std::isalpha(c)) processed += std::toupper(c);
        }
        return processed;
    }

public:
    Vigenere(std::string k) {
        key = prepareKey(k);
    }

    // Hàm Mã hóa
    std::string encrypt(const std::string& plaintext) {
        std::string ciphertext = "";
        int keyIdx = 0;
        if (key.empty()) return plaintext;

        for (char c : plaintext) {
            if (std::isalpha(c)) {
                char base = std::isupper(c) ? 'A' : 'a';
                int p = c - base;
                int k = key[keyIdx % key.length()] - 'A';
                ciphertext += (char)(base + (p + k) % 26);
                keyIdx++;
            } else {
                ciphertext += c;
            }
        }
        return ciphertext;
    }

    // Hàm Giải mã
    std::string decrypt(const std::string& ciphertext) {
        std::string plaintext = "";
        int keyIdx = 0;
        if (key.empty()) return ciphertext;

        for (char c : ciphertext) {
            if (std::isalpha(c)) {
                char base = std::isupper(c) ? 'A' : 'a';
                int c_val = c - base;
                int k = key[keyIdx % key.length()] - 'A';
                plaintext += (char)(base + (c_val - k + 26) % 26);
                keyIdx++;
            } else {
                plaintext += c;
            }
        }
        return plaintext;
    }
};

// ==================== 2. GIAO DIỆN MENU VÀ HÀM MAIN ====================
void showMenu() {
    std::cout << "\n--- CHUONG TRINH MA HOA VIGENERE ---\n";
    std::cout << "1. Ma hoa tin nhan\n";
    std::cout << "2. Giai ma tin nhan\n";
    std::cout << "3. Thoat\n";
    std::cout << "Chon chuc nang (1-3): ";
}

int main() {
    std::string key, input;
    int choice;

    std::cout << "Nhap tu khoa (Key): ";
    std::cin >> key;
    Vigenere cipher(key);

    while (true) {
        showMenu();
        std::cin >> choice;

        if (choice == 3) {
            std::cout << "Tam biet!\n";
            break;
        }

        // ĐẶT CIN.IGNORE Ở ĐÂY: Ngay trước khi gọi getline để xóa sạch ký tự Enter thừa
        std::cin.ignore(1000, '\n'); 

        std::cout << "Nhap van ban: ";
        std::getline(std::cin, input);

        if (choice == 1) {
            std::cout << "=> Ket qua ma hoa: " << cipher.encrypt(input) << std::endl;
        } else if (choice == 2) {
            std::cout << "=> Ket qua giai ma: " << cipher.decrypt(input) << std::endl;
        }
    }
    return 0;
}