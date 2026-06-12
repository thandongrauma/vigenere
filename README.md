# 🔐 Vigenere Cipher Tool - Ứng dụng Mã hóa & Giải mã Mật mã Cổ điển

Dự án này là một công cụ mã hóa và giải mã văn bản dựa trên thuật toán **Mật mã Vigenère**, được phát triển hoàn toàn bằng ngôn ngữ **C++** theo phong cách hướng đối tượng (OOP). Sản phẩm được xây dựng nhằm mục đích tham gia **Trại hè Mã hóa 2026**.

---

## 💡 Giới thiệu về Thuật toán
Mật mã Vigenère là một phương pháp mã hóa văn bản bằng cách sử dụng một chuỗi các mật mã Caesar khác nhau dựa trên các chữ cái của một từ khóa (Key). Đây là một dạng mật mã dịch chuyển đa ký tự có tính bảo mật cao, giúp chống lại việc phân tích tần suất chữ cái cơ bản.

---

## ✨ Tính năng chính
- **Mã hóa (Encryption):** Biến đổi văn bản gốc (Plaintext) thành chuỗi ký tự mã hóa (Ciphertext) dựa trên Từ khóa (Key) bạn nhập.
- **Giải mã (Decryption):** Khôi phục lại chính xác văn bản ban đầu từ chuỗi đã mã hóa khi có chính xác Từ khóa.
- **Xử lý chuỗi thông minh:** - Tự động chuẩn hóa từ khóa (chuyển thành chữ in hoa và loại bỏ ký tự không phải chữ cái).
  - Giữ nguyên toàn bộ khoảng trắng, dấu câu, chữ số và định dạng viết hoa/viết thường của văn bản gốc khi mã hóa.
- **Giao diện Console mượt mà:** Khắc phục hoàn toàn lỗi trôi lệnh, nhảy menu khi nhập dữ liệu; giao diện điều hướng bằng phím số (1-3) trực quan.

---

## 🛠️ Hướng dẫn Cài đặt & Chạy thử ứng dụng

### 1. Yêu cầu hệ thống
- Máy tính đã cài đặt Trình biên dịch C++ (GCC/MinGW) hỗ trợ chuẩn C++11 trở lên.
- Cửa sổ dòng lệnh (PowerShell hoặc Command Prompt trên Windows, Terminal trên macOS/Linux).

### 2. Các bước biên dịch và chạy
Mở Terminal tại thư mục chứa file dự án và chạy dòng lệnh sau:

**Đối với Windows (PowerShell):**
```bash
g++ main.cpp -o VigenereTool ; .\VigenereTool