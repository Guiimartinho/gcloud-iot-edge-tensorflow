

// SDK tool configuration
#define CONFIG_TOOLPREFIX "xtensa-esp32-elf-"
#define CONFIG_PYTHON "python"
#define CONFIG_MAKE_WARN_UNDEFINED_VARIABLES true

// Bootloader config
#define CONFIG_LOG_BOOTLOADER_LEVEL_INFO true
#define CONFIG_LOG_BOOTLOADER_LEVEL 3
#define CONFIG_BOOTLOADER_VDDSDIO_BOOST_1_9V true

// Security features

// Camera configuration
#define CONFIG_OV2640_SUPPORT true

// Serial flasher config
#define CONFIG_ESPTOOLPY_PORT "/dev/tty.SLAB_USBtoUART"
#define CONFIG_ESPTOOLPY_BAUD_921600B true
#define CONFIG_ESPTOOLPY_BAUD_OTHER_VAL 115200
#define CONFIG_ESPTOOLPY_BAUD 921600
#define CONFIG_ESPTOOLPY_COMPRESSED true
#define CONFIG_FLASHMODE_DIO true
#define CONFIG_ESPTOOLPY_FLASHMODE "dio"
#define CONFIG_ESPTOOLPY_FLASHFREQ_40M true
#define CONFIG_ESPTOOLPY_FLASHFREQ "40m"
#define CONFIG_ESPTOOLPY_FLASHSIZE_4MB true
#define CONFIG_ESPTOOLPY_FLASHSIZE "4MB"
#define CONFIG_ESPTOOLPY_FLASHSIZE_DETECT true
#define CONFIG_ESPTOOLPY_BEFORE_RESET true
#define CONFIG_ESPTOOLPY_BEFORE "default_reset"
#define CONFIG_ESPTOOLPY_AFTER_RESET true
#define CONFIG_ESPTOOLPY_AFTER "hard_reset"
#define CONFIG_MONITOR_BAUD_115200B true
#define CONFIG_MONITOR_BAUD_OTHER_VAL 115200
#define CONFIG_MONITOR_BAUD 115200

// ESP32 Camera Demo Configuration
#define CONFIG_WIFI_SSID "casa viebrantz"
#define CONFIG_WIFI_PASSWORD "alvaro.felipe"
#define CONFIG_XCLK_FREQ 20000000

// Pin Configuration
#define MODEL_M5Stack 1
#define MODEL_ESP32CAM 2
#define MODEL MODEL_M5Stack

#if MODEL == MODEL_ESP32CAM
#define CONFIG_D0 13
#define CONFIG_D1 18
#define CONFIG_D2 19
#define CONFIG_D3 21
#define CONFIG_D4 36
#define CONFIG_D5 39
#define CONFIG_D6 34
#define CONFIG_D7 35
#define CONFIG_XCLK 0
#define CONFIG_PCLK 22
#define CONFIG_VSYNC 25
#define CONFIG_HREF 23
#define CONFIG_SDA 26
#define CONFIG_SCL 27
#define CONFIG_RESET 32
#else 
#define CONFIG_D0 17
#define CONFIG_D1 35
#define CONFIG_D2 34
#define CONFIG_D3 5
#define CONFIG_D4 39
#define CONFIG_D5 18
#define CONFIG_D6 36
#define CONFIG_D7 19
#define CONFIG_XCLK 27
#define CONFIG_PCLK 21
#define CONFIG_VSYNC 22
#define CONFIG_HREF 26
#define CONFIG_SDA 25
#define CONFIG_SCL 23
#define CONFIG_RESET 15
#endif
#define CONFIG_QR_RECOGNIZE true

// Partition Table
#define CONFIG_PARTITION_TABLE_SINGLE_APP true
#define CONFIG_PARTITION_TABLE_CUSTOM_FILENAME "partitions.csv"
#define CONFIG_PARTITION_TABLE_CUSTOM_APP_BIN_OFFSET 0x10000
#define CONFIG_PARTITION_TABLE_FILENAME "partitions_singleapp.csv"
#define CONFIG_APP_OFFSET 0x10000
#define CONFIG_PARTITION_TABLE_OFFSET 0x8000

// Compiler options
#define CONFIG_OPTIMIZATION_LEVEL_DEBUG true
#define CONFIG_OPTIMIZATION_ASSERTIONS_ENABLED true
#define CONFIG_STACK_CHECK_NONE true

// Component config

// Application Level Tracing
#define CONFIG_ESP32_APPTRACE_DEST_NONE true
#define CONFIG_ESP32_APPTRACE_LOCK_ENABLE true

// FreeRTOS SystemView Tracing

// Bluetooth
#define CONFIG_BTDM_CONTROLLER_PINNED_TO_CORE 0
#define CONFIG_BT_RESERVE_DRAM 0
#define CONFIG_BT_ACL_CONNECTIONS 4
#define CONFIG_BLUEDROID_PINNED_TO_CORE 0
#define CONFIG_BLUEDROID_PINNED_TO_CORE_0 1
#define CONFIG_BLUEDROID_ENABLED 1

// ESP32-specific
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_240 true
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ 240
#define CONFIG_MEMMAP_SMP true
#define CONFIG_TRACEMEM_RESERVE_DRAM 0x0
#define CONFIG_ESP32_ENABLE_COREDUMP_TO_NONE true
#define CONFIG_FOUR_UNIVERSAL_MAC_ADDRESS true
#define CONFIG_NUMBER_OF_UNIVERSAL_MAC_ADDRESS 4
#define CONFIG_SYSTEM_EVENT_QUEUE_SIZE 32
#define CONFIG_SYSTEM_EVENT_TASK_STACK_SIZE 2048
#define CONFIG_BTC_TASK_STACK_SIZE 3072
#define CONFIG_MAIN_TASK_STACK_SIZE 3584
#define CONFIG_IPC_TASK_STACK_SIZE 1024
#define CONFIG_TIMER_TASK_STACK_SIZE 3584
#define CONFIG_NEWLIB_STDOUT_LINE_ENDING_CRLF true
#define CONFIG_NEWLIB_STDIN_LINE_ENDING_CR true
#define CONFIG_CONSOLE_UART_DEFAULT true
#define CONFIG_CONSOLE_UART_NUM 0
#define CONFIG_CONSOLE_UART_BAUDRATE 115200
#define CONFIG_ULP_COPROC_RESERVE_MEM 0
#define CONFIG_ESP32_PANIC_PRINT_REBOOT true
#define CONFIG_ESP32_DEBUG_OCDAWARE true
#define CONFIG_INT_WDT true
#define CONFIG_INT_WDT_TIMEOUT_MS 300
#define CONFIG_INT_WDT_CHECK_CPU1 true
#define CONFIG_BROWNOUT_DET true
#define CONFIG_BROWNOUT_DET_LVL_SEL_0 true
#define CONFIG_BROWNOUT_DET_LVL 0
#define CONFIG_ESP32_TIME_SYSCALL_USE_RTC_FRC1 true
#define CONFIG_ESP32_RTC_CLOCK_SOURCE_INTERNAL_RC true
#define CONFIG_ESP32_RTC_CLK_CAL_CYCLES 1024
#define CONFIG_ESP32_DEEP_SLEEP_WAKEUP_DELAY 2000
#define CONFIG_ESP32_XTAL_FREQ_40 true
#define CONFIG_ESP32_XTAL_FREQ 40

// Wi-Fi
#define CONFIG_ESP32_WIFI_STATIC_RX_BUFFER_NUM 10
#define CONFIG_ESP32_WIFI_DYNAMIC_RX_BUFFER_NUM 32
#define CONFIG_ESP32_WIFI_STATIC_TX_BUFFER true
#define CONFIG_ESP32_WIFI_TX_BUFFER_TYPE 0
#define CONFIG_ESP32_WIFI_STATIC_TX_BUFFER_NUM 16
#define CONFIG_ESP32_WIFI_AMPDU_TX_ENABLED true
#define CONFIG_ESP32_WIFI_TX_BA_WIN 6
#define CONFIG_ESP32_WIFI_AMPDU_RX_ENABLED true
#define CONFIG_ESP32_WIFI_RX_BA_WIN 6
#define CONFIG_ESP32_WIFI_NVS_ENABLED true

// PHY
#define CONFIG_ESP32_PHY_CALIBRATION_AND_DATA_STORAGE true
#define CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER 20
#define CONFIG_ESP32_PHY_MAX_TX_POWER 20

// Power Management

// ADC-Calibration
#define CONFIG_ADC_CAL_EFUSE_TP_ENABLE true
#define CONFIG_ADC_CAL_EFUSE_VREF_ENABLE true
#define CONFIG_ADC_CAL_LUT_ENABLE true

// Ethernet
#define CONFIG_DMA_RX_BUF_NUM 10
#define CONFIG_DMA_TX_BUF_NUM 10
#define CONFIG_EMAC_TASK_PRIORITY 20

// FAT Filesystem support
#define CONFIG_FATFS_CODEPAGE_437 true
#define CONFIG_FATFS_CODEPAGE 437
#define CONFIG_FATFS_LFN_NONE true
#define CONFIG_FATFS_FS_LOCK 0
#define CONFIG_FATFS_TIMEOUT_MS 10000
#define CONFIG_FATFS_PER_FILE_CACHE true

// FreeRTOS
#define CONFIG_FREERTOS_CORETIMER_0 true
#define CONFIG_FREERTOS_HZ 100
#define CONFIG_FREERTOS_ASSERT_ON_UNTESTED_FUNCTION true
#define CONFIG_FREERTOS_CHECK_STACKOVERFLOW_CANARY true
#define CONFIG_FREERTOS_INTERRUPT_BACKTRACE true
#define CONFIG_FREERTOS_THREAD_LOCAL_STORAGE_POINTERS 1
#define CONFIG_FREERTOS_ASSERT_FAIL_ABORT true
#define CONFIG_FREERTOS_IDLE_TASK_STACKSIZE 1024
#define CONFIG_FREERTOS_ISR_STACKSIZE 1536
#define CONFIG_FREERTOS_MAX_TASK_NAME_LEN 16
#define CONFIG_TIMER_TASK_PRIORITY 1
#define CONFIG_TIMER_TASK_STACK_DEPTH 2048
#define CONFIG_TIMER_QUEUE_LENGTH 10
#define CONFIG_FREERTOS_QUEUE_REGISTRY_SIZE 0

// Heap memory debugging
#define CONFIG_HEAP_POISONING_DISABLED true

// libsodium
#define CONFIG_LIBSODIUM_USE_MBEDTLS_SHA true

// Log output
#define CONFIG_LOG_DEFAULT_LEVEL_INFO true
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_COLORS true

// LWIP
#define CONFIG_LWIP_MAX_SOCKETS 10
#define CONFIG_LWIP_SO_REUSE true
#define CONFIG_LWIP_SO_REUSE_RXTOALL true
#define CONFIG_LWIP_DHCP_MAX_NTP_SERVERS 1
#define CONFIG_LWIP_ETHARP_TRUST_IP_MAC true
#define CONFIG_TCPIP_RECVMBOX_SIZE 32
#define CONFIG_LWIP_DHCP_DOES_ARP_CHECK true

// DHCP server
#define CONFIG_LWIP_DHCPS_LEASE_UNIT 60
#define CONFIG_LWIP_DHCPS_MAX_STATION_NUM 8
#define CONFIG_LWIP_NETIF_LOOPBACK true
#define CONFIG_LWIP_LOOPBACK_MAX_PBUFS 8

// TCP
#define CONFIG_LWIP_MAX_ACTIVE_TCP 16
#define CONFIG_LWIP_MAX_LISTENING_TCP 16
#define CONFIG_TCP_MAXRTX 12
#define CONFIG_TCP_SYNMAXRTX 6
#define CONFIG_TCP_MSS 1436
#define CONFIG_TCP_MSL 60000
#define CONFIG_TCP_SND_BUF_DEFAULT 5744
#define CONFIG_TCP_WND_DEFAULT 5744
#define CONFIG_TCP_RECVMBOX_SIZE 6
#define CONFIG_TCP_QUEUE_OOSEQ true
#define CONFIG_TCP_OVERSIZE_MSS true

// UDP
#define CONFIG_LWIP_MAX_UDP_PCBS 16
#define CONFIG_UDP_RECVMBOX_SIZE 6
#define CONFIG_TCPIP_TASK_STACK_SIZE 2048

// ICMP

// LWIP RAW API
#define CONFIG_LWIP_MAX_RAW_PCBS 16

// mbedTLS
#define CONFIG_MBEDTLS_SSL_MAX_CONTENT_LEN 16384
#define CONFIG_MBEDTLS_HARDWARE_AES true
#define CONFIG_MBEDTLS_HAVE_TIME true
#define CONFIG_MBEDTLS_TLS_SERVER_AND_CLIENT true
#define CONFIG_MBEDTLS_TLS_SERVER true
#define CONFIG_MBEDTLS_TLS_CLIENT true
#define CONFIG_MBEDTLS_TLS_ENABLED true

// TLS Key Exchange Methods
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA true
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_RSA true
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ELLIPTIC_CURVE true
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_RSA true
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA true
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_ECDSA true
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_RSA true
#define CONFIG_MBEDTLS_SSL_RENEGOTIATION true
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1 true
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_1 true
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_2 true
#define CONFIG_MBEDTLS_SSL_ALPN true
#define CONFIG_MBEDTLS_SSL_SESSION_TICKETS true

// Symmetric Ciphers
#define CONFIG_MBEDTLS_AES_C true
#define CONFIG_MBEDTLS_RC4_DISABLED true
#define CONFIG_MBEDTLS_CCM_C true
#define CONFIG_MBEDTLS_GCM_C true

// Certificates
#define CONFIG_MBEDTLS_PEM_PARSE_C true
#define CONFIG_MBEDTLS_PEM_WRITE_C true
#define CONFIG_MBEDTLS_X509_CRL_PARSE_C true
#define CONFIG_MBEDTLS_X509_CSR_PARSE_C true
#define CONFIG_MBEDTLS_ECP_C true
#define CONFIG_MBEDTLS_ECDH_C true
#define CONFIG_MBEDTLS_ECDSA_C true
#define CONFIG_MBEDTLS_ECP_DP_SECP192R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_SECP224R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_SECP256R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_SECP384R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_SECP521R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_SECP192K1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_SECP224K1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_SECP256K1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_BP256R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_BP384R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_BP512R1_ENABLED true
#define CONFIG_MBEDTLS_ECP_DP_CURVE25519_ENABLED true
#define CONFIG_MBEDTLS_ECP_NIST_OPTIM true

// OpenSSL
#define CONFIG_OPENSSL_ASSERT_DO_NOTHING true

// PThreads
#define CONFIG_ESP32_PTHREAD_TASK_PRIO_DEFAULT 5
#define CONFIG_ESP32_PTHREAD_TASK_STACK_SIZE_DEFAULT 3072

// SPI Flash driver
#define CONFIG_SPI_FLASH_ROM_DRIVER_PATCH true
#define CONFIG_SPI_FLASH_WRITING_DANGEROUS_REGIONS_ABORTS true

// SPIFFS Configuration
#define CONFIG_SPIFFS_MAX_PARTITIONS 3
#define CONFIG_SPIFFS_PAGE_SIZE 256
#define CONFIG_SPIFFS_META_LENGTH 4

// SPIFFS Cache Configuration
#define CONFIG_SPIFFS_CACHE true
#define CONFIG_SPIFFS_CACHE_WR true
#define CONFIG_SPIFFS_PAGE_CHECK true
#define CONFIG_SPIFFS_GC_MAX_RUNS 10
#define CONFIG_SPIFFS_OBJ_NAME_LEN 32
#define CONFIG_SPIFFS_USE_MAGIC true
#define CONFIG_SPIFFS_USE_MAGIC_LENGTH true
#define CONFIG_SPIFFS_META_LENGTH 4
#define CONFIG_SPIFFS_USE_MTIME true

// Debug Configuration

// tcpip adapter
#define CONFIG_IP_LOST_TIMER_INTERVAL 120

// Wear Levelling
#define CONFIG_WL_SECTOR_SIZE_4096 true
#define CONFIG_WL_SECTOR_SIZE 4096

// AWS iot
#define CONFIG_AWS_IOT_MQTT_MIN_RECONNECT_WAIT_INTERVAL 1000
#define CONFIG_AWS_IOT_MQTT_MAX_RECONNECT_WAIT_INTERVAL 128000
#define CONFIG_AWS_IOT_SHADOW_MAX_SIMULTANEOUS_ACKS 10
#define CONFIG_AWS_IOT_MQTT_TX_BUF_LEN 512
#define CONFIG_AWS_IOT_MQTT_RX_BUF_LEN 512
#define CONFIG_AWS_IOT_SHADOW_MAX_JSON_TOKEN_EXPECTED 120
#define CONFIG_AWS_IOT_MQTT_NUM_SUBSCRIBE_HANDLERS 5
#define CONFIG_AWS_IOT_MQTT_HOST ""
#define CONFIG_AWS_IOT_MQTT_PORT 8883
#define CONFIG_AWS_IOT_SHADOW_MAX_SHADOW_TOPIC_LENGTH_WITHOUT_THINGNAME 60
#define CONFIG_AWS_IOT_SHADOW_MAX_SIZE_OF_THING_NAME 20
#define CONFIG_AWS_IOT_SHADOW_MAX_SIMULTANEOUS_THINGNAMES 10
#define CONFIG_AWS_IOT_SHADOW_MAX_SIZE_OF_UNIQUE_CLIENT_ID_BYTES 80
