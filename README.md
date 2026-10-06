# Belajar IoT ESP32

Dokumentasi dan kode program latihan dasar IoT menggunakan ESP32 di simulator Wokwi.

---

## 📁 Struktur Repositori

```text
.
├── 01-esp32-blink/
│   ├── sketch.ino
│   └── ss-20260928-151016.png
│
├── 02-esp32-traffic-light/
│   ├── diagram.json
│   ├── sketch.ino
│   ├── ss-20260928-150922.png
│   └── wokwi-project.txt
│
├── 03-esp32-ultrasonic/
│   ├── diagram.json
│   ├── sketch.ino
│   ├── ss-ultrasonic.png
│   └── wokwi-project.txt
│
├── 04-esp32-dht22/
│   ├── diagram.json
│   ├── sketch.ino
│   ├── ss-dht22.png
│   └── wokwi-project.txt
│
├── 05-esp32-lcd-i2c/
│   ├── diagram.json
│   ├── sketch.ino
│   ├── ss-lcd-i2c.png
│   └── wokwi-project.txt
│
└── README.md
```

---

## ⚙️ Cara Kerja Tiap Proyek

### 1. 01-esp32-blink
- **Fungsi:** Menyalakan dan mematikan 1 LED secara berulang (kedip).
- **Cara Kerja:** Pin GPIO 18 diatur sebagai `OUTPUT`. Menggunakan `digitalWrite(18, HIGH)` untuk menyalakan LED dan `LOW` untuk mematikan dengan jeda `delay(1000)` (1 detik).

### 2. 02-esp32-traffic-light
- **Fungsi:** Menyimulasikan siklus lampu lalu lintas 3 warna secara otomatis.
- **Cara Kerja:** GPIO 18 (Merah), GPIO 19 (Kuning), dan GPIO 21 (Hijau) diatur sebagai `OUTPUT`. Program mengeksekusi urutan penyalaan bergantian: Merah (5 detik), Kuning (2 detik), dan Hijau (5 detik).

### 3. 03-esp32-ultrasonic
- **Fungsi:** Mengukur jarak objek menggunakan sensor ultrasonik HC-SR04.
- **Cara Kerja:** Trigger pin (GPIO 5) memancarkan gelombang ultrasonik, lalu Echo pin (GPIO 18) menerima pantulannya. Waktu tempuh diukur dengan `pulseIn()` dan dikonversi ke cm.

### 4. 04-esp32-dht22
- **Fungsi:** Membaca suhu dan kelembapan udara menggunakan sensor DHT22.
- **Cara Kerja:** Data dibaca melalui GPIO 15 menggunakan `DHT sensor library` dari Adafruit, lalu ditampilkan secara berkala di Serial Monitor setiap 2 detik.

### 5. 05-esp32-lcd-i2c
- **Fungsi:** Menampilkan teks ke layar LCD 16x2 melalui modul I2C.
- **Cara Kerja:** Terhubung via komunikasi I2C pada SDA (GPIO 21) dan SCL (GPIO 22). Menggunakan library `LiquidCrystal_I2C` untuk mengatur posisi kursor dan menampilkan teks.
