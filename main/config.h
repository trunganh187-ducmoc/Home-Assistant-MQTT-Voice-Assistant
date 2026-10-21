/**
 * ESP32-P4 Voice Assistant Configuration
 * Target Board: Guition JC-ESP32P4-M3-DEV
 * Server: Odroid C4 (10.68.68.26)
 */

#ifndef CONFIG_H
#define CONFIG_H

#include <stddef.h> // NULL

/* ============================================================================
 * Firmware Version Safeguard (Chống lỗi undefined trong main.c)
 * ============================================================================ */
#ifndef FIRMWARE_VERSION
#define FIRMWARE_VERSION "1.0.0"
#endif

/* ============================================================================
 * WiFi Configuration (Ưu tiên mạng dây RJ45, Wi-Fi làm fallback)
 * ============================================================================ */
#define WIFI_SSID "......VUPHONG....."
#define WIFI_PASSWORD "0913718786@bc.."
#define WIFI_MAX_RETRY 5

/* ============================================================================
 * Home Assistant Configuration (Odroid C4)
 * ============================================================================ */
#define HA_HOSTNAME "10.68.68.26"          // IP máy chủ Home Assistant
#define HA_PORT 8123                       // Port mặc định của HA
#define HA_TOKEN "placeholder_token"       // Cập nhật sau qua Web Dashboard/OTA
#define HA_USE_SSL false                   // Chạy HTTP nội bộ không dùng SSL
#define HA_WEBSOCKET_PATH "/api/websocket"

/* ============================================================================
 * MQTT Configuration (Mosquitto trên Odroid C4)
 * ============================================================================ */
#define MQTT_BROKER_URI "mqtt://10.68.68.26:1883"

// Mosquitto trên C4 đã bật allow_anonymous true nên để NULL
#define MQTT_USERNAME NULL
#define MQTT_PASSWORD NULL

#define MQTT_CLIENT_ID "esp32p4_voice_assistant"

/* ============================================================================
 * Output Volume
 * ============================================================================ */
#define DEFAULT_OUTPUT_VOLUME 80

#endif // CONFIG_H
