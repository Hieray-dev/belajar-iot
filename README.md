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
