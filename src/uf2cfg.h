#define PRODUCT_NAME "STM32 Board"
#define BOARD_ID "STM32F103-generic-v0"
#define INDEX_URL "https://github.com/Byvm815/uf2-stm32f103"
#define UF2_NUM_BLOCKS 8000
#define VOLUME_LABEL "USB Flash"
// where the UF2 files are allowed to write data - we allow MBR, since it seems part of the softdevice .hex file
#define USER_FLASH_START (uint32_t)(APP_BASE_ADDRESS)
#define USER_FLASH_END (0x08000000+FLASH_SIZE_OVERRIDE)
