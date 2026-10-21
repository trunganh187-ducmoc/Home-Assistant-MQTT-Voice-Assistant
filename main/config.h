#pragma once

// Bỏ trống Wi-Fi vì chúng ta chạy cáp mạng dây RJ45
#define WIFI_SSID             ""
#define WIFI_PASSWORD         ""

// Địa chỉ server nội bộ Odroid C4 (không phải bí mật)
#define HA_WEBSOCKET_URL      "ws://10.68.68.26:8123/api/websocket"
#define HA_ACCESS_TOKEN       "placeholder_token" // Sẽ update sau

#define MQTT_BROKER_URL       "mqtt://10.68.68.26:1883"
#define MQTT_CLIENT_ID        "esp32p4_voice_assistant"

#define DEFAULT_OUTPUT_VOLUME 80
#ifndef FIRMWARE_VERSION
#define FIRMWARE_VERSION      "1.0.0"
#endif
