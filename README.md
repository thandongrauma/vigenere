# Vigenere Cipher Tool - Dự Án Mã Hóa Thử Nghiệm (C++)

Đây là một công cụ mã hóa và giải mã tin nhắn bằng **Mật mã Vigenère**, được mình viết hoàn toàn bằng ngôn ngữ **C++** dựa trên tư duy lập trình hướng đối tượng (OOP). Dự án này mình xây dựng từ đầu để nộp vào **Trại hè Mã hóa**.

---

## Trải nghiệm và Cách mình tối ưu Code
Trong quá trình code từ các file cấu trúc rời rạc, mình đã gặp một số lỗi kinh điển và đã tối ưu lại hệ thống như sau:
- **Gom gọn về 1 file duy nhất (`main.cpp`):** Giúp việc quản lý mã nguồn, biên dịch và chạy ứng dụng trở nên siêu nhanh, không lo bị lỗi liên kết file (`undefined reference`) hay thiếu thư viện header.
- **Sửa triệt để lỗi lặp menu (Nháy màn hình):** Mình đã xử lý thành công lỗi trôi lệnh cực kỳ khó chịu khi dùng kết hợp `std::cin` và `std::getline` bằng cách đặt bộ lọc bộ nhớ đệm `std::cin.ignore(1000, '\n')` vào đúng vị trí ngay trước khi nhận văn bản.
- **Xử lý chuỗi thông minh:** Hệ thống tự chuẩn hóa Key về chữ in hoa. Khi mã hóa, chương trình chỉ xử lý các ký tự chữ cái (A-Z, a-z), còn các khoảng trắng, dấu câu hay chữ số đều được giữ nguyên vẹn định dạng gốc.

---

## Cách hoạt động của Thuật toán
Ứng dụng áp dụng hệ thức toán học đồng dư của mật mã Vigenère để dịch chuyển từng ký tự dựa theo vòng lặp của từ khóa (Key):
- **Công thức mã hóa:** $C_i = (P_i + K_i) \pmod{26}$
- **Công thức giải mã:** $P_i = (C_i - K_i + 26) \pmod{26}$

---

## Hướng dẫn Biên dịch & Chạy ứng dụng

Bạn chỉ cần mở Terminal/PowerShell ngay tại thư mục chứa file `main.cpp` này và chạy đúng một dòng lệnh duy nhất để vừa biên dịch vừa mở phần mềm:

```bash
g++ main.cpp -o VigenereTool ; .\VigenereTool