// text.cpp — part of preview-maker-ai.

#include "previewmakerai/text.h"

#include <cstdio>

namespace previewmakerai {

Text::Text(const std::string& config_path)
    : config_path_(config_path) {}

void Text::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Text::run() {
    if (verbose_) std::fprintf(stderr, "[preview-maker-ai] text: run\n");
    // core logic lives here
    return true;
}

}  // namespace previewmakerai
