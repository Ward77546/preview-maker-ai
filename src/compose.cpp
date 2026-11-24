// compose.cpp — part of preview-maker-ai.

#include "previewmakerai/compose.h"

#include <cstdio>

namespace previewmakerai {

Compose::Compose(const std::string& config_path)
    : config_path_(config_path) {}

void Compose::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Compose::run() {
    if (verbose_) std::fprintf(stderr, "[preview-maker-ai] compose: run\n");
    // core logic lives here
    return true;
}

}  // namespace previewmakerai
