// main.cpp — entry point. Wires config and subsystems together.

#include "previewmakerai/settings.h"
#include "previewmakerai/extract.h"
#include "previewmakerai/compose.h"
#include "previewmakerai/text.h"
#include "previewmakerai/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    previewmakerai::Settings settings = previewmakerai::Settings::load_default();
    previewmakerai::Extract extract(settings.store_path);
    previewmakerai::Compose compose(settings.store_path);
    previewmakerai::Text text(settings.store_path);
    previewmakerai::Cli cli(settings.store_path);
    std::fprintf(stderr, "[preview-maker-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
