# Belajar IoT ESP32

Dokumentasi dan kode program latihan dasar IoT menggunakan ESP32 di simulator Wokwi.

---

## 📁 Struktur Repositori
.
├── 01-esp32-blink/           # Proyek 1: Dasar Blink LED
│   ├── sketch.ino            # Kode C++ untuk mengedipkan 1 LED
│   └── ss-20260928-151016.png # Screenshot simulasi
│
├── 02-esp32-traffic-light/    # Proyek 2: Simulasi Traffic Light
│   ├── sketch.ino            # Kode C++ kontrol 3 LED (Merah, Kuning, Hijau)
│   ├── diagram.json          # Layout rangkaian komponen Wokwi
│   ├── wokwi-project.txt     # Link ke proyek Wokwi
│   └── ss-20260928-150922.png # Screenshot simulasi
│
└── README.md                 # Dokumentasi utama repositori

---

## ⚙️ Cara Kerja Tiap Proyek

1. 01-esp32-blink
Fungsi: Menyalakan dan mematikan 1 LED secara berulang (kedip).

Cara Kerja:
Pin GPIO 18 diatur sebagai OUTPUT.
Menggunakan digitalWrite(18, HIGH) untuk menyalakan LED dan LOW untuk mematikan.
delay(1000) memberi jeda penyalaan/pemadaman selama 1 detik.

2. 02-esp32-traffic-light
Fungsi: Menyimulasikan siklus lampu lalu lintas 3 warna secara otomatis.

Cara Kerja:
GPIO 18 (Merah), GPIO 19 (Kuning), dan GPIO 21 (Hijau) diatur sebagai OUTPUT.
Program mengeksekusi urutan penyalaan secara bergantian:
Merah menyala selama 5 detik (delay(5000)).
Kuning menyala selama 2 detik (delay(2000)).
Hijau menyala selama 5 detik (delay(5000)).
Proses ini berulang secara berkesinambungan di dalam fungsi loop().
