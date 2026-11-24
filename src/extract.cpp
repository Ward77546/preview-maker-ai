// extract.cpp — part of preview-maker-ai.

#include "previewmakerai/extract.h"

#include <cstdio>

namespace previewmakerai {

Extract::Extract(const std::string& config_path)
    : config_path_(config_path) {}

void Extract::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Extract::run() {
    if (verbose_) std::fprintf(stderr, "[preview-maker-ai] extract: run\n");
    // core logic lives here
    return true;
}

}  // namespace previewmakerai
