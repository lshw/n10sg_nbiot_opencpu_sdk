
NBIOT_RF_CUSTOM_SRC = middleware/MTK/nbiot_custom_rf/$(MTK_NB_CUSTOM_DIR)

# Source files
C_FILES += $(NBIOT_RF_CUSTOM_SRC)/src/n1_rf_cal_data.c
C_FILES += $(NBIOT_RF_CUSTOM_SRC)/src/nb_custom_data.c

CFLAGS += -I$(SOURCE_DIR)/$(NBIOT_RF_CUSTOM_SRC)/inc

# Most of cal data is same. This option together with compound literals allows compiler to optimize size
CFLAGS += -fmerge-all-constants
