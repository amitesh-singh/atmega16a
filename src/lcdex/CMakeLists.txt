add_executable_avr(lcdex lcdex.c)
#link with liblcd library
target_link_libraries(lcdex lcd)
