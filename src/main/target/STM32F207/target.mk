F2_TARGETS  += $(TARGET)
HSE_VALUE = 25000000
FLASH = 512k
FEATURES       += VCP GPS

TARGET_SRC = \
            drivers/accgyro/accgyro_mpu6050.c \
            drivers/accgyro/accgyro_fake.c \
            drivers/compass/compass_hmc5883l.c \
            drivers/barometer/barometer_bmp280.c \
#            drivers/barometer/barometer_spi_bmp280.c \