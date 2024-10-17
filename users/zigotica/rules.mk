SRC += zigotica.c

ifeq ($(COMBO_ENABLE)$(TAP_DANCE_ENABLE), yesyes)
    INTROSPECTION_KEYMAP_C = introspection.c
else
	ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
		INTROSPECTION_KEYMAP_C = tapdances.c
	endif

	ifeq ($(strip $(COMBO_ENABLE)), yes)
		INTROSPECTION_KEYMAP_C = combos.c
	endif
endif

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled.c
endif

ifeq ($(strip $(ENCODER_ENABLE)), yes)
    SRC += encoder.c
endif

