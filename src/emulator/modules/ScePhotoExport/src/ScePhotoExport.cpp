// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include <ScePhotoExport/exports.h>

EXPORT(int, scePhotoExportFromData) {
    return unimplemented("scePhotoExportFromData");
}

EXPORT(int, scePhotoExportFromFile) {
    return unimplemented("scePhotoExportFromFile");
}

EXPORT(int, scePhotoExportIsAvailableFromData) {
    return unimplemented("scePhotoExportIsAvailableFromData");
}

EXPORT(int, scePhotoExportIsAvailableFromFile) {
    return unimplemented("scePhotoExportIsAvailableFromFile");
}

BRIDGE_IMPL(scePhotoExportFromData)
BRIDGE_IMPL(scePhotoExportFromFile)
BRIDGE_IMPL(scePhotoExportIsAvailableFromData)
BRIDGE_IMPL(scePhotoExportIsAvailableFromFile)
