#include <furi.h>
#include <birdwatch_icons.h>

int32_t birdwatch_app(void* p) {
    UNUSED(p);
    FURI_LOG_I("TEST", "Hello world");
    FURI_LOG_I("TEST", "I'm template!");

    return 0;
}
